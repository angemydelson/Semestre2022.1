#include <stdio.h>
#include <math.h>
typedef struct {
    float x;
    float y;
}Pontos;
double distanciaEuclidiana(Pontos p1, Pontos p2){
    double distancia;
    distancia = pow((p1.x - p2.x),2) + pow((p1.y - p2.y),2);
    distancia = sqrt(distancia);
    printf("%.4lf\n",distancia);
    return distancia;
}
int main() {
    double x1, x2, y1, y2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    Pontos point1 ={x1,y1};
    Pontos point2 ={x2,y2};
    distanciaEuclidiana( point1, point2);
    return 0;
}

// #include <stdio.h>
// #include <math.h>
// typedef struct {
//     float x;
//     float y;
// }Pontos;
// int main(){
//     double x1, x2, y1, y2;
//     scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
//     Pontos p1 ={x1,y1};
//     Pontos p2 ={x2,y2};
//     double distancia;
//     distancia = pow((p1.x-p2.x),2) + pow((p1.y-p2.y),2);
//     distancia = sqrt(distancia);
//     printf("%.4lf\n",distancia);
//     return 0;
// }
