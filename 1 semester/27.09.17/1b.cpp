#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	char ok = 'y';
		while (ok == 'y' || ok == 'Y')
		{
			//while (true)
			//{
				cout << "n=";
				cin >> n;
			//}
			long pow = 1;
			
			for (int i = 1;i<=n ; i ++)
			{
				pow = pow*2;
				
			}
			cout << "2*2*2.." << n << "=" << pow << endl;
			cout << "If countine press y or Y";
			cin >> ok;
		}
	return 0;
}