#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	long long H(int n)
	{
	if(n==1)
	{
		return -1;
	}
	if(n==2)
	{
		return 1;
	}
	if(n==3)
	{
		return 2;
	}
	
	return H(n-1)-2*H(n-2)+3*H(n-3)+1;
}
	long long g2(int n)
	{
		if(n==1)
		{
			return -1;
		}
		if(n==2)
		{
			return 1;
		}
		if(n==3)
		{
			return 2;
		}
		long long l1 = -1, l2 = 1, l3 = 2, l4;
		for (int i=3;i<=n;i++)
		{
			l4 = l3 - 2 * l2 + 3 * l1 + 1;
			l2 = l3;
			l3 = l2;
		}
		return l4;
	}

int main(int argc, char** argv) {
	int func2;
	cin >> func2;
	cout << g2(func2);
	return 0;
}
