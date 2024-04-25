#include <iostream>

using namespace std;

int main() {
    int a, b = 0, digit;

    cout << "Masukkan angka: ";
    cin >> a;

   
    if (a < 0) {
        cout << "Angka tidak valid. Angka berupa negatif." << endl;
        
    }

    
    while (a != 0) {
        digit = a % 10;
        b += digit;
        a /= 10;
    }

    cout << "Hasil penjumlahan" << a << " : " << b << endl;

   
}