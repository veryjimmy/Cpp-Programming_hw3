#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void bubble(int a[])
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (a[j] < a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}
		}
	}
	cout << "Bubble sort:" << endl;
	for (int x = 0; x < 10; x++)
	{
		cout << a[x] << " ";
	}
	cout << endl;
}

void select(int a[])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			int min = i;
			if (a[min] > a[j])
				min = j;
			if (min != i)
			{
				swap(a[min], a[i]);
			}
		}
	}
	cout << "selection sort:" << endl;
	for (int x = 0; x < 10; x++)
	{
		cout << a[x] << " ";
	}
	cout << endl;
}

int main()
{
	int a[100] = { 10, 50, 33, 2, 15, 90, 1, 5, 66, 78 };
	cout << "Please input ten numbers:" << endl;
	for (int x = 0; x < 10; x++)
	{
		cout << a[x] << " ";
	}
	cout << endl;
	cout << "The input numbers is:" << endl;
	for (int x = 0; x < 10; x++)
	{
		cout << a[x] << " ";
	}
	cout << endl;

	bubble(a);
	select(a);


	system("pause");
	return 0;
}