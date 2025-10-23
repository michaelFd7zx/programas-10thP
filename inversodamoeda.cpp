/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()
{
string nomes[5];
char sair;
int i;
do{
    for (i = 0; i<5;i++)
    {
        cout<< "diz o "<< i+1<<"º nome.\n";
        cin>> nomes[i];
    }
     for (i = 4; i>=0;i--)
     {
         cout<< ""<<nomes[i]<<"\n";
         
     }
    cout<< "quer continuar? (s/n)\n";
    cin>> sair;
}
while (sair != 'n');

    

    return 0;
}