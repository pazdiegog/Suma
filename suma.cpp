
/* es un programa que suma dos numeros
enteros ingresados por el usuario.
4-4-17
DGP
*/

#include <iostream>

int main()

{
    int a, b, suma;
    std::cout << "Este programa suma dos numeros enteros \n";
    std::cout << "Ingrese un numero entero: ";
    std::cin >> a;
    std::cout << "Ingrese otro numero entero: ";
    std::cin >> b;
    suma= a + b;
    std::cout << "La suma de "<<a<<" + "<<b<<" es: " <<suma;
}
