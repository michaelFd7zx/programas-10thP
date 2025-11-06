#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");

	int A, L, C,R;
	cin >> A;
	cin >> L;
	cin >> C;
	
	R = A * L * C;
	if (R >= 50 && A >= 3)
	{
		cout << "1" << endl;
		}
	else
	{
		cout << "0" << endl;
	}
	
	
	return 0;
}