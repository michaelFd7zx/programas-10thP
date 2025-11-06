#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");

	int N, M;
	cin >> N;
	cin >> M;
	cout << N / M << endl;

	return 0;
}