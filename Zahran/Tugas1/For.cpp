#include <iostream>
using namespace std;

int main()
{
    int total = 0, input;

    cout << "Masukkan 10 angka untuk dijumlahkan:" << endl;

    for (int j = 1; j <= 10; j++) {
        cout << "Angka ke-" << j << ": ";
        cin >> input;
        total += input;
    }

    cout << "Jumlah total angka yang dimasukkan adalah: " << total << endl;
    return 0;
}
