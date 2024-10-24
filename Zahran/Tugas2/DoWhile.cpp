#include <iostream>
using namespace std;

int main() {
    int inputBilangan, total = 0, count = 0;

    cout << "Silakan masukkan bilangan (akhirkan dengan -999): " << endl;

    do {
        cin >> inputBilangan;
        if (inputBilangan != -999) {
            total += inputBilangan;
            count++;
        }
    } while (inputBilangan != -999);

    if (count == 0) {
        cout << "Tidak ada data yang diolah." << endl;
    } else {
        cout << "Total bilangan yang dimasukkan: " << count << endl;
        cout << "Jumlah total: " << total << endl;
        cout << "Rata-rata: " << (static_cast<float>(total) / count) << endl;
    }

    return 0;
}
