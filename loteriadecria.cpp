#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std; 
int main()

{

 setlocale(LC_ALL, "Portuguese");

	srand(time(0));

	int troca, aux=0, i;
	int num[5];
	int chave[5];
	int totalc;
	int totale;

for (i = 0; i < 5; i++)
	{
	totalc = rand() % 49 + 1;
	chave[i] = totalc;
	cout << chave[i]<<"\n";
}

		if (chave[i] > chave[i + 1])

		{

			chave[i] = aux;

			chave[i + 1] = chave[i];

			chave[i + 1] = aux;

		}
	//parte da pergunta FEITA

	for (i = 0; i < 5; i++)

	{
		cout << "diga o " << i + 1 << "º numero.\n";

		cin >> num[i];
		
		if (num[i] < 0 || num[i] > 50)

		{

			cout << "usou algum numero invalido.\n";

		}

	}
	// dizer os numeros certos
	for (i = 0; i < 5; i++)
	{

		if (chave[i] == num[i])
		{
			cout << "voce acertou "<< i + 1<<" numeros\n";
		}
		if (chave[i] != num[i])
		{
			cout << "voce errou " << i + 1 << " numeros\n";
		}

	}



	return 0;

}
	
		
	
	