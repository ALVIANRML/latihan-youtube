#include <iostream>

using namespace std;

int main()
{

    int a;

    cout << "Masukkan nilai: ";
    cin >> a;

    switch(a){
        case 5:
        cout << "a=5" << endl;
        break; //        break pada switch case berfungsi untuk meloncat case-case setelahnya
        case 4:
        cout << "a=4" << endl;
        break;
        case 3:
        cout << "a=3" << endl;
        break;
        case 2:
        cout << "a=2" << endl;
        break;
        case 1:
        cout << "a=1" << endl;
        default: // default fungsinya hampir sama seperti "else"
        cout << "default" << endl;
        }
    cout << "ini adalah akhir dari program";
    cin.get();
    return 0;
}
