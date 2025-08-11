#include <iomanip>
#include <iostream>

using namespace std;

int entrada;

int main()
{
	cout << "Quantas laranjas você comprou?" << endl;
	cin >> entrada;


	cout << fixed << setprecision(2) << endl;

	if (entrada < 12)
	{
		cout << "Preco = " << entrada * 0.8 << endl;
	}
	else
	{
		cout << "Preco = " << entrada * 0.65 << endl;
	}
	
	return 0;
}

