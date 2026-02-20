#include <iostream>
using namespace std;

bool isPalindrome(int x) {

    if (x < 0) return false;

    int original = x;
    long reversed = 0;

    while (x > 0) {
        reversed = reversed * 10 + (x % 10);
        x /= 10;
    }

    return reversed == original;
}

int main() {
    int x;

    cout << "Ingresa un numero: ";
    cin >> x;

    if (isPalindrome(x))
        cout << x << " es un palindromo" << endl;
    else
        cout << x << " no es un palindromo" << endl;

    return 0;
}
