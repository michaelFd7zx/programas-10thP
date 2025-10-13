
#include <iostream>
#include <locale.h>
#include  <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");

	int carro;
	char sair = 'n';
	string carros[3] = { "fiat uno", "gol quadrado", "fusca" };
	do
	{
		cout << "escolha o carro\n";
		cin >> carro;
		if (carro < 0 || carro > 2)
		{
			cout << "este numero é invalido.\n";
		}
		else {
			cout << "este é o " << carros[carro] << "\n";
			cout << "deseja sair? (s/n)";
			cin >> sair;
		}
		
	} while (sair == 'n');

		return 0;
}