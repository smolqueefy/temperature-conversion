#include <iostream>
#include <cmath>
using std::cout;
using std::cin;



int main()
{
	char temp;
	int sum;
	int num;
	cout << "Temperature Conversion\n";
	cout << "For celsius, Press 'c'\n";
	cout << "For Fahrenheit, Press 'f'\n";
	cout << "choice: ";
	cin >> temp;
	cout << "Temperature: ";
	cin >> num;


	if (temp == 'f' || temp == 'F') // checks if variable returns f
	{
		sum = (num * 1.8) + 32;
		cout << "The temperature is " << sum << " Fahrenheit";
	}

	else if (temp == 'c' || temp == 'C') // checks if variable temp returns c
	{
		sum = (num - 32) / 1.8;
		cout << "The temperature is " << (double)sum << " Celsius";
	}

}

