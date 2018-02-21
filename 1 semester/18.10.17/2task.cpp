#include <iostream>

using namespace std;

void counter(long long number, int& less, int& more, int& equal);
int  SequenceType( int less, int more, int equal);

int main()
{
	long long number;
	cout << " Enter number: " << endl;
	cin >> number;
	int k, l, m;
	counter(number, k, l, m);
	//cout << k << " " << l << " " << m << endl;

	int a = SequenceType(k, l, m);
	switch (a)
	{
	case 1:
		cout << " Increasing sequence" << endl;
		break;
	case 2:
		cout << " Non strictly increasing sequence" <<endl;
			break; 
	case 3:
				cout << " Decreasing sequence" <<endl;
				break; 
	case 4:
					cout << " Non strictly decreasing sequence" <<endl;
					break;
	case 5:
		cout << " Monotone sequence" <<endl;
		break;
	case 6:
		cout << " Disordered sequence" <<endl;
		break;
		


	}

	system("pause");
	return 0;
}
void counter(long long number, int& less, int& more, int& equal)
{
	less = 0, more = 0, equal = 0;
	int prev = number % 10, next;
	number /= 10;
	while (number)
	{
		next = number % 10;
			if (prev == next)
			{
				equal++;
			}
			else if (prev > next)
			{
				less++;
			}
			else
			{
				more++;
			}
		prev = next;
		number /= 10;
	}
}
int  SequenceType(int less, int more, int equal)
{
	if ((less > 0) && (more == 0) && (equal == 0))
	{
		return 1;
	}
	else if ((less > 0) && (more == 0) && (equal > 0))
	{
		return 2;
	}
	else if ((less == 0) && (more > 0) && (equal == 0))
	{
		return 3;
	}
	else if ((less == 0) && (more > 0) && (equal > 0))
	{
		return 4;
	}
	else if ((less == 0) && (more == 0) && (equal > 0))
	{
		return 5;
	}
	else
	{
		return 6;
	}
}

