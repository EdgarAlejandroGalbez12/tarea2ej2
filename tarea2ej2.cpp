/* Escriba un programa que acepte como entrada un n�mero de cinco d�gitos, lo separe en sus distintos d�gitos y
los imprima separ�ndolos cada uno con tres espacios. (Sugerencia: emplee los operadores de divisi�n y de
m�dulo) Por ejemplo, si el usuario tecla 42339, el programa deber� imprimir:
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
