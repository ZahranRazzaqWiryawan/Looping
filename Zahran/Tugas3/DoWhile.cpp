#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "masukkan nilai n: ";
    cin >> n;

    do {
        cout << n << endl;
        n--;
    } while (n >= 0);

    return 0;
}