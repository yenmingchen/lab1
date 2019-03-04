#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int a;
	cin >> a;
	cout << a << endl;
	while (a!=1)
	{
		if (a==1)
		cout << a << endl;
		else if (a%2==0)
		{
			a=a/2;
			cout << a << endl;	
		}
		else
		{
			a = 3*a + 1;
			cout << a << endl; 
		}
	}
	
	system("pause");
	return 0;
}
