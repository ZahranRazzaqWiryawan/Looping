#include <iostream>
using namespace std;

int main() {
    int n, count = 0, sum = 0;

    cout << "masukkan bilangan: ";
    cin >> n;

    if (n == -999) {
        cout << "tidak ada data yang diolah." << endl;
    } else {
        while (n != -999) {
            sum += n;
            count++;
            cin >> n;
        }

        cout << "jumlah bilangan yang dimasukan: " << count << endl;
        cout << "total nilai: " << sum << endl;
        if (count > 0) {
            cout << "rata rata: " << (sum / (float)count) << endl;
        }
    }

    return 0;
}