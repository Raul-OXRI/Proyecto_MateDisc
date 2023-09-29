#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
	int f = 1;
	for (int i = 2; i <= n; i++)
		f *= i;	
	return f;
}
int main()
{
	int a,b,n;
	cout<<"Ingrese el num A";
	cin>>a;
	cout<<"Ingrese el num B";
	cin>>b;
	cout<<"Ingrese la potencia";
	cin>>n;
	int nFact = factorial(n);
	for (int i = 0; i < n + 1; i++) {
		int niFact = factorial(n - i);
		int iFact = factorial(i);
		int aPow = pow(a, n - i);
		int xPow = pow(b, i);
		cout << (nFact * aPow * xPow) /
				(niFact * iFact) << " ";
	}
	return 0;
}
