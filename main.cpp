#include <iostream>
#include<cstdlib> //arriba en el inicio del codigo


int main()

{
    system("color 0A");

    // en el main antes de empezar a escribir tu codigo.

    int a, b, resultado = 0;
    char operacion;                         /*declaracion de las variables a utilizar en el proceso del programa*/
    std::cout << "Este programa hace operaciones de dos numeros enteros \n";       /*Se pide el ingreso de los numeros enteros*/
    std::cout << "Ingrese operacion a realizar\n";
    std::cout << "+ (suma)\n" << "- (resta)\n" << "* (multiplicacion)\n" << "/ (division)\n";
    std::cin >> operacion;
    std::cout << "Ingrese un numero entero: ";
    std::cin >> a;
    std::cout << "Ingrese otro numero entero: ";
    std::cin >> b;


    if (operacion == '+')                                                       /*Operacion SUMA*/
    {

        resultado= a + b;
        std::cout << "La suma de "<<a<< operacion <<b<<" es: " <<resultado;        /*Se imprime en pantalla el resultado*/

    }


    if (operacion == '-')                                                       /*Operacion RESTA*/
    {

        resultado = a - b;

        std::cout << "La resta de "<<a<< operacion <<b<<" es: " <<resultado;        /*Se imprime en pantalla el resultado*/

    }

        if (operacion == '*')                                                       /*Operacion MULTIPLICACION*/
    {

        resultado = a * b;

        std::cout << "La multiplicacion de "<<a<< operacion <<b<<" es: " <<resultado;        /*Se imprime en pantalla el resultado*/

    }

            if (operacion == '/')                                                       /*Operacion DIVISION*/
    {
        if( b == 0){

            std::cout << "ERROR, no se puede dividir por 0 \n";
            system ("pause");
        }

        resultado = a / b;

        std::cout << "La division de "<<a<< operacion <<b<<" es: " <<resultado;        /*Se imprime en pantalla el resultado*/

    }

}

