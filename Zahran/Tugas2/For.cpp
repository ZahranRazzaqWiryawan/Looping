#include <iostream>
using namespace std;

int main() {
    int angka, jumlahBilangan = 0, totalNilai = 0;

    cout << "Masukkan bilangan (ketik -999 untuk berhenti): ";
    cin >> angka;

    if (angka == -999) {
        cout << "Tidak ada data yang diolah." << endl;
    } else {
        for (; angka != -999; ) {
            totalNilai += angka;
            jumlahBilangan++;
            cin >> angka;
        }

        cout << "Jumlah bilangan yang dimasukkan: " << jumlahBilangan << endl;
        cout << "Total nilai: " << totalNilai << endl;
        if (jumlahBilangan > 0) {
            cout << "Rata-rata: " << (static_cast<float>(totalNilai) / jumlahBilangan) << endl;
        }
    }

    return 0;
}
