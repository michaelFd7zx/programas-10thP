#include <iostream>
#include <string>
#include <locale.h>

using namespace std;



int main()
{
	setlocale(LC_ALL, "Portuguese");
	float num, num2, result;
	char operacao;
	cout << "ce quer fazer oque? (+,-,*, /)\n";
		cin >> operacao;
	cout << "diga o primeiro numero\n";
	cin >> num;
	cout << "diga o segundo numero\n";
	cin >> num2;

	switch (operacao) {
	case '+':
		result = num + num2;
			cout << "o resultado da soma � " << result << "\n";
			break;
	case '-':
	result = num - num2 ;
		cout << "o resultado da subtra�ao � " << result << "\n";
		break;
	case '*':
		 result = num * num2 ;
		cout << "o resultado da multiplica�ao � " << result << "\n";
		break;
	case '/':
		if (num2 != 0)
		{

			result = num/num2;
			cout << "o resultado da divisao � " << result << "\n";
		}
		else
		{
			cout << " nao � possivel dividir por 0.\n";
		}
		break;
	default:
		cout << " opera�ao invalida.\n";

	}
	





	return 0;
}


