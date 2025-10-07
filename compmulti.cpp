#include <iostream>
#include <locale.h>
using namespace std;
int main()
{

	setlocale(LC_ALL, "Portuguese");


	int N;
	do {

	cout << " escreva um numero ";
		cin >> N;
		
		if (N == 0)
		{
			break;
		}
	
		if (N % 3 == 0)
	{
		cout << " multiplo de 3 ";

	}
	else
	
			if (N % 5 == 0)
		{
			cout << " multiplo de 5 ";
		}

	} while (N != 0);

	return 0;
	}
