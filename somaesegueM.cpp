#include <iostream>
#include <locale.h>
using namespace std;
int main()
{

	setlocale(LC_ALL, "Portuguese");
	int numero, n2,  soma, i;
	soma = 0;
		cout << "quantos n�meros queres somar ? ";
	cin >> n2;
	for (i = 0; i < n2; i++)
	{
		cout << "que n�mero queres somar?";
		cin >> numero;
		soma = soma + numero;
	}
	

	cout << "o resultado final � " << soma <<" ";


		return 0;
		
}
	


