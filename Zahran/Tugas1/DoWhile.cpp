#include <iostream>
using  namespace std;

int main()
{
    int sum = 0, i = 1, n;

    do
    {
        cout << "masukan nilai ke " << i << " : ";
        cin >> n;
        sum += n;
        i++;
    } while (i <=10 );

    cout << "total jumlah angka yang dimasukan adalah : " << sum << endl;
    return 0;
    
}