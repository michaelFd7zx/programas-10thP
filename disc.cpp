#include <iostream>
#include <locale.h>
#include<string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n;
	char sair = 's';
	string disc[9] = { "mat","pt", "fq","tlp","ing","acso","artes","AI","Ev" };
	string profs[9] = { "ana","isabel", "luke","tota","anakin","chato","sono","dormir", "lidia" };

	do {
		cout << "disciplina.\n";
		cin >> n;

		cout << "a professora da disciplina " << disc[n] << " é " << profs[n] << "\n";

		cout << "deseja perguntar outro? (s/n)\n";
		cin >> sair;
	}

	while (sair == 's');
	return 0;
}


