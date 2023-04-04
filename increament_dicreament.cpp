#include <iostream>

using namespace std;                /*perbedaan postincrement dengan preincrement
                            preincrement di print dulu baru dijumlahkan sedangkan preincrement di jumlahkan dulu baru di print*/
int main()
{
    int a = 8;
    int b = 8;
    int c = 8;
    int d = 8;
    // increment menggunakan tanda (+) sedangkan dicrement menggunakan tanda(-)

    cout << "increment yg preincrement" << endl;
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl << endl;

    cout << "yg postincrement" << endl;
    cout << b << endl;
    cout << ++b << endl;
    cout << b << endl << endl;

    cout << "dicrement yg preincrement" << endl;
    cout << c << endl;
    cout << c-- << endl;
    cout << c << endl << endl;

    cout << "yg postincrement" << endl;
    cout << d << endl;
    cout << --d << endl;
    cout << d << endl;
    cin.get();
    return 0;
}
