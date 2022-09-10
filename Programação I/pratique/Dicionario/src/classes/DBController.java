package classes;

import java.io.File;
import java.sql.*;

/**
 *
 * @author aluno
 */
public class DBController {
    private String dbName;
    private Connection dbConn;
    
    public DBController(String dbName) {
        this.dbName = dbName;
    }
    
    public void conectar() throws Exception {
        File f = new File(this.dbName);
        
        if (!f.exists()) {
            throw new Exception("Arquivo de banco de dados não existe!");
        }
        
        Class.forName("org.sqlite.JDBC");
        this.dbConn = DriverManager.getConnection("jdbc:sqlite:" + this.dbName);
    }
    
    public void desconectar() throws SQLException {
        this.dbConn.close();
    }
    
    public void salvarPalavra(String palavra, String sinonimo) throws Exception {
        String ins = "INSERT INTO dicionario (palavra, sinonimo) VALUES (?, ?)";
        
        PreparedStatement stmt;
        
        try {
            stmt = this.dbConn.prepareStatement(ins);
            stmt.setString(1, palavra);
            stmt.setString(2, sinonimo);
            stmt.executeUpdate();            
        } catch (SQLException e) {
            throw new Exception("Erro ao inserir palavra: " + e.getMessage());
        }        
    }
    
    public ResultSet carregaPalavras() throws Exception {
        String sel = "SELECT palavra, sinonimo FROM dicionario";
        ResultSet rset = null;
        
        try {
            Statement stmt = this.dbConn.createStatement();
            rset = stmt.executeQuery(sel);
        } catch (SQLException e) {
            throw new Exception("Erro ao buscar palavras: " + e.getMessage());
        }
        
        return rset;
    }
    
}
