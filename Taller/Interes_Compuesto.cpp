#include <iostream>
#include <cmath>  // Para la función pow

using namespace std;

int main() {

    double P, r, A;
    int n, t;

    cout << "Introduce el principal (cantidad inicial invertida): ";
    cin >> P;

    cout << "Introduce la tasa de interes anual (en decimal, ej. 0.05 para 5%): ";
    cin >> r;

    cout << "Introduce el numero de veces que se aplica el interes al año: ";
    cin >> n;

    cout << "Introduce el numero de años: ";
    cin >> t;

    A = P * pow((1 + r / n), n * t);

    cout << "El monto final es: " << A << endl;

    return 0;
}
