#include <iostream>

using namespace std;

int main()
{
    int a = 10 ;
    cout << "nilai awal a=10  \n\n";

    a += 3;
    cout << "nilai a setelah ditambah 3: " << a << endl;

    a -= 3;
    cout << "lalu nilai a dikurang 3: " << a << endl;

    a *= 3;
    cout << "lalu nilai a dikali 3: " << a << endl;

    a /= 3;
    cout << "lalu nilai a dibagi 3: " << a << endl;

    a %= 3;
    cout << "lalu sisa bagi nilai a jika di bagi 3: " << a << endl;
    cin.get();
    return 0;
}
