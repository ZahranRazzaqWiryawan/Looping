#include <iostream>
using namespace std;

int main()
{
    int total = 0, input, count = 1;

    cout << "Silakan masukkan 10 angka:" << endl;

    while (count <= 10) {
        cout << "Input ke-" << count << ": ";
        cin >> input;
        total += input;
        count++;
    }

    cout << "Total dari angka yang Anda masukkan: " << total << endl;
    return 0;
}
