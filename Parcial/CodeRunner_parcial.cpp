#include <iostream>
using namespace std;

struct Point {
    double x;
    double y;
};

Point calcularCentroide(Point puntos[], int n) {
    Point centroide;
    double sumax = 0, sumay = 0;
    for (int i = 0; i < n; i++) {
        sumax += puntos[i].x;
        sumay += puntos[i].y;
    }
    centroide.x = sumax / n;
    centroide.y = sumay / n;
    return centroide;  // Return the centroid after the loop
}
