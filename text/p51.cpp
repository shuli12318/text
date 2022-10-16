#include <iostream>
using namespace std;

int main()
{
	int a, b, sum = 0;
	cout << "the min:";
	cin >> a;
	
	cout << "the max:";
	cin >> b;
	
	for (int i=a; i<=b; i++)
	{
		sum += i;
	}
	cout << "sum=" << sum << endl;
			
	return 0;
}
