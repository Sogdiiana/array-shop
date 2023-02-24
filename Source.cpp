#include <iostream>
using namespace std;
int main()
{
	int tovar[5][3];
	int sumP=0,num=1,sumT=0,num1=1;
	for (int i = 0; i < 5; i++)
	{
		for (int t = 0; t < 3; t++)
		{
			cin >> tovar[i][t];
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int t = 0; t < 3; t++)
		{
			cout << tovar[i][t] << "  ";
		}
		cout << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int t = 0; t < 3; t++)
		{
			sumP = tovar[i][t] + tovar[i][t] + tovar[i][t];

		}
		cout << " sailor #" << num << " sold " << sumP << " things";
		cout << endl;
		num++;

	}
	for (int i = 0; i < 3; i++)
	{
		for (int t = 0; t < 5; t++)
		{
			sumT = tovar[t][i]+ tovar[t][i] + tovar[t][i] ;

		}
		cout << " thing #" << num1 << " has been sold " << sumT << " times";
		cout << endl;
		num1++;

	}


	return 0;
}