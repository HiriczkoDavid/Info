#include <iostream>
#include <conio.h>

using namespace std;
void printPascal(int n)
{

	for (int j = 1; j <= n; j++)
	{

		int C = 1;

		for (int i = 1; i < (n - j + 1); i++){
			cout << " ";
		}

		for (int i = 1; i <= j; i++)
		{


			cout << C << " ";
			C = C * (j - i) / i;
		}

		cout << "\n";
	}
}


int main()
{
    	int n;

	cout << "Kerem adja meg a szamot a Pascal haromszoghoz ";

	cin >> n;

	printPascal(n);



    return 0;
}
