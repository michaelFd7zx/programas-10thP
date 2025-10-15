#include <iostream>
#include <locale.h>
#include<string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n;
	char sair = 'n';
	string nomes[5] = {};
	string nomesfofos[5] = {};

	for (int i = 0; i < 5; i++)
	{
		cout << "nome da "<< i + 1 <<"º namorada\n";
		cin >> nomes[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "apelido da " << i + 1 << "º namorada " << nomes[i] << "\n";
		cin >> nomesfofos[i];
	}
	while (sair == 'n')
	{
		cout << "\nnumero para saber o nome e apelido da namorada: ";
		cin >> n;
		n = n - 1;

		if (n >= 0 && n < 5)
		{
			cout << "\nA " << nomes[n] << " tem apelido " << nomesfofos[n];
		}
		else if (n > 5)
		{
			cout << "\nce é trouxa? ";

		}
		else
		{
			cout << "\nta querendo namorada demais kkkk";
		}
		cout << "\n\nquer sair (s/n)";
		cin >> sair;

	}
}