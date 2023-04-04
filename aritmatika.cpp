#include <iostream>


using namespace std;

int main(){

    int a = 47;
    int b = 5;
    float c = b;

    //penjumlahan
    cout << "hasil dari " << a << "+" << b << " adalah ";
    cout << a+b << endl;

    //pengurangan
    cout << "hasil dari " << a << "-" << b << " adalah ";
    cout << a-b << endl;

    //perkalian
    cout << "hasil dari " << a << "*" << b << " adalah ";
    cout << a*b << endl;

    //pembagian
    cout << "hasil dari " << a << "/" << c << " adalah ";
    cout << a/c << endl;

    //modulus
    //pengurangan
    cout << "hasil dari " << a << " mod " << b << " adalah ";
    cout << a%b << endl;

    cin.get();
    return 0;
}
