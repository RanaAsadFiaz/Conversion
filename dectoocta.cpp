#include <iostream>
#include <cmath>
using namespace std;
int dectoocta(int decimal)
{
	int q;
	int i = 1;
	int octa = 0;
	while (decimal != 0)
	{
		q = decimal % 8;
		decimal /= 8;
		octa += q*i;
		i *= 10;
	}
	return octa;
}
int octatodec(int octa)
{
	int dec = 0; int i = 0; int r;
	while (octa != 0)
	{
		r = octa % 10;
		octa /= 10;
		dec += r * pow(8,i);
		i++;
	}
	
	return dec;
}
void dectohex(int decimal)
{
	int q;
	int temp = 0;
	char hexa[100];
	int i = 0;
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
		cout << hexa << endl;
		q = q / 16;
	}
	cout << "The Hexadecimal Conversion of " << '\t' << decimal << '\t' << "is = ";
	for (int j = i - 1;j >= 0;j--)
	{
		cout << hexa[j];
	}
	cout << endl;
}
unsigned long hexatodec(char hexa[])
{
	char *p;
	int length = 0;
	unsigned long decimal = 0;
	for (p = hexa;*p != '\0';p++)
	{
		length++;
	}
	p = hexa;
	for (int i = 0;*p != '\0' && i < length;i++,p++)
	{
		if (*p >= 48 && *p <= 57)
		{
			decimal += (((int)(*p)) - 48) * pow(16, length - i - 1);
		}
		else if(*p >= 65 && *p <= 70)
		{
			decimal += (((int)(*p)) - 55) * pow(16, length - i - 1);
		}
		else if (*p >= 97 && *p <= 102)
		{
			decimal += (((int)(*p)) - 87) * pow(16, length - i - 1);
		}
		else
		{
			cout << "Invalid Hexadecimal Number:" << endl;
		}
	}
	return decimal;
}
int main()
{
	int decimal;
	int octa;
	char hexa[50];
	cout << "Enter the decimal Number that you want to convert in hexadecimal:" << endl;
	cin >> decimal;
	cout << "The conversion of the decimal to octa is following" << endl;
	octa = dectoocta(decimal);
	cout << '\t' << octa << endl;
	cout << "The conversion of octal to decimal is as following:" << endl;
	decimal = octatodec(octa);
	cout << '\t' << decimal << endl;
	dectohex(decimal);
	cout << endl;
	cout << "Enter Hexadecimal Number to convert into Decimal Number:" << endl;
	cin >> hexa;
	cout << "Hexadecimal Number into Decimal Number is:" << endl;
	cout << hexatodec(hexa);
	system("Pause");
}
