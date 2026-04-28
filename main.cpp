#include <iostream>
#include <string>
using namespace std;

int main() {
    int decimalNumber;

    
    cout << "Masukkan bilangan desimal: ";
    cin >> decimalNumber;

   
    if (decimalNumber == 0) {
        cout << "Hasil konversi ke biner: 0" << endl;
        return 0;
    }

    
    string binary = "";

    
    while (decimalNumber > 0) {
        binary = to_string(decimalNumber % 2) + binary;
        decimalNumber /= 2;
    }

    cout << "Hasil konversi ke biner: " << binary << endl;
    return 0;
}
