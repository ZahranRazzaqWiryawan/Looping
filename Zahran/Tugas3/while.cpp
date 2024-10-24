#include <iostream>
using namespace std;

int main() {
    int angka;
    cout << "Masukkan angka positif: ";
    cin >> angka;

    while (angka >= 0) {
        cout << "Angka: " << angka << endl;
        angka--;
    }

    return 0;
}
