#include <iostream>
using namespace std;
int main()
{
	int decimal;
	int i = 0;
	int temp = 0;
	char hexa[100];
	int q;
	cout << "Enter the decimal Number that you want to convert in hexadecimal:" << endl;
	cin >> decimal;
	q = decimal;
	while (q != 0)
	{
		temp = q % 16;
		if (temp < 10)
		{
			temp = temp + 48;
		}
		else
		{
			temp = temp + 55;
		}

		hexa[i++] = temp;
		q = q / 16;
	}
	cout << "The Hexadecimal Conversion of " << '\t'<< decimal << '\t' << "is = ";
	for (int j = i - 1;j >= 0;j--)
	{
		cout << hexa[j];
	}
	cout << endl;
//	cout << temp;
	system("Pause");
}