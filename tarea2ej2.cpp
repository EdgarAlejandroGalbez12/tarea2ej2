/* Escriba un programa que acepte como entrada un número de cinco dígitos, lo separe en sus distintos dígitos y
los imprima separándolos cada uno con tres espacios. (Sugerencia: emplee los operadores de división y de
módulo) Por ejemplo, si el usuario tecla 42339, el programa deberá imprimir:
4 2 3 3 9*/
#include <iostream>
using namespace std;
int main ()
{
	int num1, num2, num3, num4, num5, num6;
	
	cout << "introduzca un numero de 5 digitos: \n";
	cin >> num1;
	if (num1>9999 && num1<100000)
	{
		num2=num1/10000;
		num3=(num1%10000)/1000;
		num4=((num1%10000)%1000)/100;
		num5=(((num1%10000)%1000)%100)/10;
		num6=((((num1%10000)%1000)%100)%10)/1;
	
	cout << "   " << num2 << "   " << num3 << "   " << num4 << "   " << num5 << "   " << num6;
	}
	else
	cout << " el numero es mayor o menor de 5 digitos ";
	
	return 0;
}
