#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");

	int F, N, Escolha, Menor, Maior, Igual, Filtro[10] = { 101 }, R = 0, R2 = 0;

	cin >> F >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> Escolha;
		if (Escolha <= F && Escolha > R2) {
			R2 = 0;
			R2 = Escolha;
			if (Escolha > R2) {
				R = Escolha;

			}

		}

	}

	if (R2 == 0) {
		cout << "No free lunch bitch!";
	}
	else if (R2 != 0) {
		cout << R2 << endl;
	}
}