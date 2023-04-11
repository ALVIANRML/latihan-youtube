#include <iostream>

using namespace std;

int main(){
int a = 13;
int b = 31;
int c = 13;
int d = 2;

bool hasil;

//lebih besar
hasil = a < b;
cout << " a < b = " << hasil << endl;    //jika true maka outputnya adalah "1"

//lebih kecil
hasil = a > b;
cout << " a > b = " << hasil << endl;    //jika false outputnya "0"

//sama dengan
hasil = (a == c);
cout << " a = b = " << hasil << endl;

// lebih kecil sama dengan
hasil = a <= c;
cout << "a <= b = " << hasil << endl;

// lebih besar sama dengan
hasil = d >= c;
cout << "d <= c = " << hasil << endl;

// tidak sama dengan
hasil =  a != c;
cout << "a != c = " << hasil << endl;

cin.get();

return 0;
}
