#include <iostream> 
using namespace std;
#include <cmath>


double power(double a, double b)
{
	return pow(a, b);
}

long factorial(double a)
{
	if (a < 0)
	{
		return 0;
	}

	if (a == 0)
	{
		return 1;
	}

	if (a == 1)
	{
		return 1;
	}

	return a * factorial(a - 1);
}

double addition(double a, double b)
{
	return a + b;
}

double subtraction(double a, double b)
{
	return a - b;
}

double multiplication(double a, double b)
{
	return a * b;
}

void division(double a, double b)
{
	if (b == 0)
	{
		cout << "CANNOT DIVIDE BY ZERO!" << endl;
	}
	else
	{
		cout << a << " / " << b << " = " << a / b << endl;
	}
}


int main()
{
	char response;
	double a = 0;
	double b = 0;
	int option = 0;
	bool choice = false;
	cout << "<<<<< WELCOME TO ACE-CALCULATOR VERSION 1! >>>>>\n\n\n" << endl;


	do
	{
		cout << "1. ADDITION\n2. SUBTRACTION\n3. MULTIPLICATION\n4. DIVISION\n5. POWER\n6. FACTORIAL\n7. EXIT\n";
		cout << "(CHOOSE ONPTIONS 1 - 7)" << endl;
		cout << "\nWHAT ACTION WOULD YOU LOVE TO PERFORM?: ";
		cin >> option;

		if (option == 7)
		{
			cout << "ACE CALCULATOR CLOSED SUCCESSFULLY." << endl;
			cout << endl;
			break;
		}

		if (option >= 1 && option <= 4)
		{
			cout << "ENTER YOUR FIRST NUMBER: ";
			cin >> a;
			cout << "ENTER YOUR SECOND NUMBER: ";
			cin >> b;
			cout << endl;
		}



		switch (option)
		{

		case 1:
		{
			cout << a << " + " << b << " = " << addition(a, b) << endl;
			cout << endl;
			break;
		}

		case 2:
		{
			cout << a << " - " << b << " = " << subtraction(a, b) << endl;
			cout << endl;
			break;
		}

		case 3:
		{
			cout << a << " x " << b << " = " << multiplication(a, b) << endl;
			cout << endl;
			break;
		}
		case 4:
		{
			division(a, b);
			cout << endl;
			break;
		}


		default:
		{
			cout << endl;
			break;
		}

		}
		if (option == 5)
		{
			cout << "\nENTER YOUR BASE: ";
			cin >> a;
			cout << "ENTER YOUR EXPONENT: ";
			cin >> b;
			cout << "\n" << a << "^" << b << " = " << power(a, b) << endl;
			cout << endl;

		}

		if (option == 6)
		{
			cout << "ENTER YOUR FACTORIAL VALUE: ";
			cin >> a;
			cout << a << "!" << " = " << factorial(a) << endl;
			cout << "\n" << endl;
		}


	} while (option > 0 && option <= 8);

	return 0;
}
