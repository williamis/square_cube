
#include <iostream>
#include <cmath>  

int main() {
    // Pyydetään käyttäjää syöttämään luku
    double number;
    std::cout << "Syötä luku: ";
    std::cin >> number;

    // Lasketaan neliö ja kuutio
    double square = pow(number, 2);  // neliö
    double cube = pow(number, 3);    // kuutio

    // Tulostetaan tulokset
    std::cout << "Syöttämäsi luvun neliö on: " << square << std::endl;
    std::cout << "Syöttämäsi luvun kuutio on: " << cube << std::endl;

    return 0;
}