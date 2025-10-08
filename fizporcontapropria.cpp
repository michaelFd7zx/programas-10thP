#include <iostream>
#include <locale.h>
using namespace std;
int main()
{ 
	setlocale(LC_ALL, "Portuguese");

	int salariob, salariol, imposto;
	cout << "escreva seu salario.";
	cin >> salariob, cout << " euros";
	salariol = (salariob * 0.7);
	cout << " o seu salario bruto é " << salariob << " euros";
	cout << " o seu salario com imposto é " << salariol << " euros";
	imposto = (salariob - salariol);
	cout << "voce vai pagar "<< imposto <<" de imposto de renda.";

	return 0;
}