#include <iostream>
#include <locale.h>
using namespace std;
int main()
{

	setlocale(LC_ALL, "Portuguese");
	int lucro, n1, n2, n3, n4;
	float caf�,Sande, Bolo, Refri;

	cout << " qual o pre�o do caf�? ";
	cin >> caf�;
	cout << " qual o pre�o do sande? ";
	cin >> Sande;
	cout << " qual o pre�o do bolo? ";
	cin >> Bolo;
	cout << " qual o pre�o do refri? ";
	cin >> Refri;
	cout << " quantos caf�s vendeste? ";
	cin >> n1;
	cout << " quantos sandes vendeste? ";
	cin >> n2;
	cout << " quantos bolos vendeste? ";
	cin >> n3;
	cout << " quantos refri�s vendeste? ";
	cin >> n4;

	lucro = (caf� * n1) + (Sande * n2) + (Bolo * n3) +(Refri*n4);
	cout << "o lucro ao fim da tarde de hoje � " << lucro << " euros.";

	return 0;
	}
