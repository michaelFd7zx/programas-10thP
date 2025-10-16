#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");

	int num, maior = -2147483648, menor =2147483647 ;

	do {
		cout << "numero.\n";
		cin >> num;

		if (num > maior)
		{
			maior = num;
		}
		if (num < menor && num != 0)
		{
			menor = num;
		}
		
	} while (num != 0);
	

	cout << "o maior é " << maior << "\n";
	cout << "o menor é " << menor << "\n";

	

	return 0;
}