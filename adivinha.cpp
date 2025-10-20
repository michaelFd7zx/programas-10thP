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
	int num, rn;
	rn = rand() % 99 + 1;
	do {
		cout << " numero\n";
		cin >> num;
		if (num > rn)
		{
			cout << "o numero esta abaixo\n";
		}
		if (num < rn)
		{
			cout << "o numero esta acima\n";
		}
	}

		while (num != rn);
	cout << "acertaste\n";


	return 0;
}