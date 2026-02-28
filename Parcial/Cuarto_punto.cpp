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
    return centroide;
}

int main() {
    int n;
    cout << "Ingrese el número de puntos: ";
    cin >> n;
    Point puntos[n];
    for (int i = 0; i < n; i++) {
        cout << "Ingrese las coordenadas del punto " << i + 1 << " (x y)[Utilice el espacio para diferenciar x de y]: ";
        cin >> puntos[i].x >> puntos[i].y;
    }
    Point centroide = calcularCentroide(puntos, n);
    cout << "El centroide de los puntos es: (" << centroide.x << ", " << centroide.y << ")" << endl;
    return 0;
}



