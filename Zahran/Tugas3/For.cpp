#include <iostream>
using namespace std;

int main() {
    int nilai;
    cout << "Silakan masukkan nilai awal: ";
    cin >> nilai;

    for (int i = nilai; i >= 0; i--) {
        cout << "Nilai saat ini: " << i << endl;
    }

    return 0;
}
