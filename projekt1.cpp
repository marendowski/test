#include <iostream>

using namespace std;

long long silnia(int n) {
    if (n < 0)
        return -1;

    long long wynik = 1;
    for (int i = 1; i <= n; i++)
        wynik *= i;

    return wynik;
}

int main() {
    int a;
    cout << "Podaj liczbe calkowita: ";
    cin >> a;

    int wyjscie;
    do {
        cout << "\nMENU\n";
        cout << "0. Wyjscie\n";
        cout << "1. Oblicz silnie\n";
        cin >> wyjscie;

        if (wyjscie == 1) {
            cout << "Silnia = " << silnia(a) << endl;
        }

    } while (wyjscie != 0);


    return 0;
}
