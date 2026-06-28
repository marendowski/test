#include <iostream>

using namespace std;

bool czyPierwsza(int n) {
    if (n < 2)
        return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int a;
    cout << "Podaj liczbe calkowita: ";
    cin >> a;

    int wyjscie;
    do {
        cout << "\nMENU\n";
        cout << "0. Wyjscie\n";
        cout << "1. Sprawdz czy liczba jest pierwsza\n";
        cin >> wyjscie;

        if (wyjscie == 1) {
            if (czyPierwsza(a))
                cout << "Liczba jest pierwsza." << endl;
            else
                cout << "Liczba nie jest pierwsza." << endl;
        }

    } while (wyjscie != 0);


    return 0;
}
