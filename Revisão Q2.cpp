#include <iomanip>
#include <iostream>

using namespace std;

int entrada;
int i;
int aux;
int resto;

int main()
{
	do
	{
		cout << "Qual valor você deseja calcular o resto? [Valor entre 0 a 50]" << endl;
		cin >> entrada;
	}
	while(entrada >= 50 || entrada <= 0);

	aux = entrada;
	aux--;

	for (i = 0; i < entrada; i++)
	{
		resto = entrada % aux;
		cout << "O resto da divisao " << entrada << " por " << aux << ": " << resto << endl;
		aux--;
	}

	return 0;
}

