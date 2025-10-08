#include <iostream>
#include <locale.h>
using namespace std;
int main()
{ 
	setlocale(LC_ALL, "Portuguese");

	int anos, dias;
	cout << "escreva quantos anos queres transformar em dias.";
	cin >> anos, cout << " anos ";
	dias = (anos * 365);
	cout << "" << anos << " é igual a  " << dias << ""
		;

		;
	return 0;
}