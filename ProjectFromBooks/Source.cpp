#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int inTask;

void edit()
{
	cin >> inTask;
	cout << endl;
}
double foo10(double kmperh)
{
	kmperh *= 1000;
	kmperh /= 3600;
	return kmperh;
}
double foo11(double mpers)
{
	mpers /= 1000;
	mpers *= 3600;
	return mpers;
}
int foo12(int a, int sum)
{
	int i = 0;
	while (i <= a)
	{
		sum = sum + i;
		i++;
	}

	return sum;
}
int foo13(int a, int sum)
{
	int i = 0;
	while (i <= a)
	{
		if (i % 2 == 1)
		{
			sum = sum + i;
		}
		i++;
	}

	return sum;
}
int foo2and15(int a, int sum)
{
	int i = 1;
	while (i <= a)
	{
		if (a % i == 0)
		{
			sum = sum + i;
		}
		i++;
	}
	return sum;
}
void printArray(int arr[], int const size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " | ";
	}
}
int main()
{
	int  chapter, task;
	cin >> chapter;
	cin >> task;
	cout << endl;

	switch (chapter)
	{
	case 1:
	{
		switch (task)
		{
		case 1:
		{
			int a = 0;
			while (a < 10)
			{
				a++;
				cout << a << endl;
			}
			break;
		}
		case 2:
		{
			int a = 0;
			while (a <= 5)
			{
				if (a % 2 == 1)
				{
					cout << a << endl;
				}
				a++;
			}
			break;
		}
		case 3:
		{
			edit();
			if (inTask == 1)
			{
				int a;
				int k = 0;
				int i = 0;
				cin >> a;
				cout << endl;
				while (i < a)
				{
					i = 4 * k + 3;
					if (i > a)
					{
						break;
					}
					cout << i << endl;
					k++;
				}
			}
			if (inTask == 2)
			{
				int a;
				int i = 0;
				cin >> a;
				cout << endl;
				while (i <= a)
				{
					if (i % 4 == 3)
					{
						cout << i << endl;
					}
					i++;
				}
			}
			break;
		}
		case 4:
		{
			int a = 1, b = 1, c;
			int count;
			int i = 0;

			cout << "Enter count of numbers: " << endl;
			cin >> count;
			cout << endl;

			cout << a << endl;
			cout << b << endl;
			while (i < count - 2)
			{
				c = a + b;
				cout << c << endl;
				a = b;
				b = c;
				i++;
			}
			break;
		}
		case 5:
		{
			int n, c;
			int k = 0;
			cin >> n;
			cout << endl;
			c = n;
			while (k <= n)
			{
				cout << c << " | ";
				c = c * (n - k);
				c = c / (k + 1);
				k++;
			}
			break;
		}
		case 6:
		{
			int km;
			double mile;
			const double mileInKm = 1.609344;
			cin >> km;
			cout << endl;

			mile = km / mileInKm;
			cout << mile << endl;
			break;
		}
		case 7:
		{
			int km, m;
			double mile;
			const double kmInMile = 1.609344;
			const double ftInMile = 5280;

			cout << "Enter km: " << endl;
			cin >> km;
			cout << "Enter m: " << endl;
			cin >> m;


			mile = (km + (double)m / 1000) / kmInMile;
			int dmile = mile;
			int dft = (mile - dmile) * ftInMile;

			cout << "mile: " << dmile << endl;
			cout << "ft: " << dft << endl;
			break;
		}
		case 8:
		{
			int sajen;
			double m;
			const double mInSajen = 2.16;

			cout << "Enter count of sajens: " << endl;
			cin >> sajen;
			cout << endl;

			m = sajen * mInSajen;
			cout << m << endl;
			break;
		}
		case 9:
		{
			int sajen, arshin, m, sm;
			double sa;
			const double mInSajen = 2.16;
			const double arshinInSajen = 0.333333333333;

			cout << "Enter count of sajens: " << endl;
			cin >> sajen;
			cout << "Enter count of arshin: " << endl;
			cin >> arshin;
			cout << endl;

			sa = (double)sajen + arshin * arshinInSajen;
			double dm = sa * mInSajen;
			m = dm;
			sm = (dm - m) * 100;

			cout << "mert: " << m << endl;
			cout << "sm: " << sm << endl;
			break;
		}
		case 10:
		{
			int kmperh;

			cout << "Enter speed(km / h): ";
			cin >> kmperh;
			cout << endl;

			cout << foo10(kmperh) << endl;
			break;
		}
		case 11:
		{
			int mpers;

			cout << "Enter speed(m / s): ";
			cin >> mpers;
			cout << endl;

			cout << foo11(mpers) << endl;
			break;
		}
		case 12:
		{
			int a;
			int sum = 0;

			cout << "Enter count of natural numbers: " << endl;
			cin >> a;
			cout << endl;

			cout << foo12(a, sum) << endl;
			break;
		}
		case 13:
		{
			int a;
			int sum = 0;

			cout << "Enter count of natural numbers: " << endl;
			cin >> a;
			cout << endl;

			cout << foo13(a, sum) << endl;
			break;
		}
		case 14:
		{
			int i = 0;
			const int size = 100;
			int arr[size + 1];

			while (i <= size)
			{
				if (i % 2 == 0)
				{
					arr[i] = i;
					cout << arr[i] << endl;
				}
				i++;
			}
			break;
		}
		case 15:
		{
			int i = 0;
			const int size = 100;
			int arr[size + 1];

			while (i <= size)
			{
				if (i % 2 == 1)
				{
					arr[i] = i;
					cout << arr[i] << endl;
				}
				i++;
			}
			break;
		}
		case 16:
		{
			int i = 1;
			const int size = 100;
			int arr[size + 1];

			while (i <= size)
			{
				arr[i] = i * i;
				cout << arr[i] << endl;
				i++;
			}
			break;
		}
		case 17:
		{
			//int a = 0, b = 1;
			int i = 0;

			const int size = 5;
			int arr[size + 2];


			arr[0] = 1;

			while (i <= size)
			{
				//a = a + b;
				//b = a;
				//arr[i] = a;
				cout << arr[i] << endl;
				arr[i + 1] = arr[i] + arr[i];
				arr[i] = arr[i + 1];
				i++;
			}
			break;
		}
		case 18:
		{
			int i = 0;
			const int size = 22;
			int arr[size + 2];

			arr[0] = 1;
			arr[1] = 1;

			while (i < size)
			{
				cout << i + 1 << ")" << arr[i] << endl;
				arr[i + 2] = arr[i] + arr[i + 1];
				i++;
			}
			break;
		}
		case 19:
		{
			int i = 0;
			const int size = 100;
			int arr[size + 1];

			while (i <= size)
			{
				arr[i] = i;
				if (i % 2 == 1)
				{
					arr[i] = i * i;
				}
				cout << arr[i] << endl;
				i++;
			}
		}
		case 20:
		{
			int i = 0;
			int fill;
			const int size = 22;
			int arr[size];

			while (i < size)
			{
				cin >> fill;
				arr[i] = fill;
				i++;
			}
			cout << endl;
			i = 0;
			while (i < size)
			{
				cout << i + 1 << ")" << arr[i] << endl;
				i++;
			}
			break;
		}
		}
		break;
	}
	case 2:
	{
		switch (task)
		{
		case 1:
		{
			int a;
			int sum = 0;
			cin >> a;

			for (int i = 0; i <= a; i++)
			{
				if (i % 2 == 1)
				{
					sum += i;
				}
			}
			cout << endl << sum << endl;
			break;
		}
		case 2:
		{
			int a;
			int sum = 0;
			int i = 0;

			cin >> a;

			do
			{
				if (i % 2 == 0)
				{
					sum += i;
				}
				i++;
			} while (i <= a);
			cout << endl << sum << endl;
			break;
		}
		case 3:
		{
			int a;
			cin >> a;
			cout << endl;
			for (int i = 1; i <= a; i++)
			{
				if (a % i == 0)
				{
					cout << i << endl;
				}
			}

			break;
		}
		case 4:
		{
			int a, b;
			cin >> a >> b;
			cout << endl;


			if (a > b)
			{
				while (a != b)
				{
					if (a > b)
					{
						a = a - b;
					}
					else
					{
						b = b - a;
					}
				}
			}
			else if (a < b)
			{
				while (a != b)
				{
					if (a < b)
					{
						b = b - a;
					}
					else
					{
						a = a - b;
					}
				}
			}
			else
			{
				a = a;
			}
			cout << a << endl;
			break;
		}
		case 11:
		{
			double a, b;
			cin >> a >> b;
			cout << endl;

			if (a != 0 && b != 0)

				cout << b / a << endl;

			else if (b != 0)

				cout << "No solutions" << endl;

			else if (a == 0 && b == 0)

				cout << "solution - any numbers" << endl;

			break;
		}
		case 12:
		{
			int a, b;
			cin >> a >> b;
			cout << endl;

			if (b % a == 0)
			{
				if (a != 0 && b != 0)
					cout << b / a << endl;
				else if (b != 0)
					cout << "No solutions" << endl;
				else if (a == 0 && b == 0)
					cout << "solution - any numbers" << endl;
			}
			else
				cout << "No solutions" << endl;
			break;
		}
		case 13:
		{
			int a, b, c;
			cin >> a >> b;
			cout << endl;

			a = a * a;
			b = b * b;
			c = a + b;

			cout << sqrt(c) << endl;
			break;
		}
		case 14:
		{
			system("chcp 1251>nul");
			cout << "a b c? ";
			double a, b, c;
			cin >> a >> b >> c;
			double d = b * b - 4 * a * c;
			if (a == 0 && b != 0) {
				cout << "один корень: x: " << -c / b << endl;
			}
			else if (d > 0) {
				cout << "два корня: х1: " << (-b + sqrt(d)) / (2 * a)
					<< "; x2: " << (-b - sqrt(d)) / (2 * a) << endl;
			}
			else if (d == 0) {
				cout << "один корень: x: " << -b / (2 * a) << endl;
			}
			else {
				cout << "корней нет\n";
			}
			break;
		}
		case 15:
		{
			int a;
			int sum = 0;
			cin >> a;
			cout << endl;

			cout << foo2and15(a, sum) << endl;
			break;
		}
		case 16:
		{
			int a = 0, b = 1, c = 0;
			int n;
			cin >> n;
			cout << endl;

			while (c < n)
			{
				c = a + b;
				a = b;
				b = c;
			}

			if (n == 0 || n > 10)
				cout << "Error. Please enter number from 1 to 10" << endl;
			else if (n == c)
				cout << "Is Fibonacci number" << endl;
			else
				cout << "Is not Fibonacci number" << endl;
			break;
		}
		case 17:
		{
			srand(69);
			const int size = 10;
			int arr[size];

			for (int i = 0; i < size; i++)
			{
				arr[i] = rand() % 20;
				cout << arr[i] << " | ";
			}
			cout << endl << "=============================================" << endl;
			for (int i = 1; i <= size - 1; i++)
			{
				for (int j = 0, k; j < size - i; j++)
				{
					if (arr[j] < arr[j + 1])

					{
						k = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = k;
					}
				}
			}
			printArray(arr, size);
			break;
		}
		case 18:
		{
			srand(69);
			const int size = 10;
			int arr[size];

			for (int i = 0; i < size; i++)
			{
				arr[i] = rand() % 20;
				cout << arr[i] << " | ";
			}
			cout << endl << "=============================================" << endl;
			for (int i = 0, j = size - 1, k; i < j; i++, j--)
			{
				k = arr[i];
				arr[i] = arr[j];
				arr[j] = k;

			}
			printArray(arr, size);
		}
		case 19:
		{
			srand(69);
			const int size = 6;
			int arr[size];

			for (int i = 0; i < size; i++)
			{
				arr[0] = 7;
				arr[1] = 2;
				arr[2] = 5;
				arr[3] = 1;
				arr[4] = 8;
				arr[5] = 4;
				cout << arr[i] << " | ";
			}
			cout << endl << "=============================================" << endl;
			for (int i = 1; i < size - 1; i++)
			{
				for (int j = 0, k; j < size - i; j++)
				{
					if (arr[j] < arr[j + 1])
					{

						k = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = k;
					}
					if (arr[j] % 2 == 1)
					{

						k = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = k;
					}
					if (arr[j] % 2 == 0)
					{

						k = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = k;
					}

				}
			}
			printArray(arr, size);
			break;
		}
		case 20:
		{
			srand(69);
			const int size = 6;
			int arr[size];

			for (int i = 0; i < size; i++)
			{
				arr[0] = 7;
				arr[1] = 2;
				arr[2] = 5;
				arr[3] = 1;
				arr[4] = 8;
				arr[5] = 4;
				cout << arr[i] << " | ";
			}
			cout << endl << "=============================================" << endl;
			for (int i = 1; i < size - 1; i++)
			{
				for (int j = 0, k; j < size - i; j++)
				{
					if (arr[j] < arr[j + 1])
					{

						k = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = k;
					}
					if (arr[j] % 2 == 1)
					{

						k = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = k;
					}

				}
			}
			printArray(arr, size);
			break;
		}
		}
		break;
	}
	}
}