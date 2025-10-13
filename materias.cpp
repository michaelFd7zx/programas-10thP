#include <iostream>
#include <locale.h>
#include  <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");

	int d;
	char sair = 'n';
	string disciplinas[5] = { "PT", "MAT", "FQ", "CNA", "EDF"};
	do
	{
		cout << "diga a disciplina (0 a 4)\n";
		cin >> d;
		if (d < 0 || d > 4)
		{
			cout << "este numero é invalido.\n";
		}
		else {
			cout << "escolheste " << disciplinas[d] << "\n";
			cout << "deseja sair? (s/n)";
			cin >> sair;
		}

	} while (sair == 'n');

	return 0;
}