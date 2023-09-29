#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

//funcion para hacer la combinacion
int comb(int n, int k){
	if(k==0 || k==n){
		return 1;
	}
	else{
		return comb(n-1, k-1) + comb(n-1,k);
	}
}

//funcion para hacer el factorial 
int factorial(int n)
{
	int f = 1;
	for (int i = 2; i <= n; i++)
		f *= i;	
	return f;
}

main(){
		int m;
		int a,b,t;
		int c,d,n,k,s;
		int nFact = factorial(n);
		cout<<"--------------------------------------------------";	
		cout<<"\n||                                              ||";
		cout<<"\n||\t1. expancion de binomio de newton\t||";
		cout<<"\n||                                              ||";
		cout<<"\n||\t2. Sin nesecidad de expandir\t\t||";
		cout<<"\n||                                              ||";
		cout<<"\n||\t3. Triangulo de pascal\t\t\t||";
		cout<<"\n||                                              ||";
	//	cout<<"\n||\t0. Salir\t\t\t\t||";
		cout<<"\n--------------------------------------------------\n";
		cin>>m;
		system("cls");
		switch (m){
			case 1:
				cout<<"Ingrese el num A";
				cin>>a;
				cout<<"Ingrese el num B";
				cin>>b;
				cout<<"Ingrese la potencia";
				cin>>n;
				
				for (int i = 0; i < n + 1; i++) {
					int niFact = factorial(n - i);
					int iFact = factorial(i);
					int aPow = pow(a, n - i);
					int xPow = pow(b, i);
					cout << (nFact * aPow * xPow) /
					(niFact * iFact) << " ";
				}
				return 0;
				break;
			case 2:
				cout<<"Introducir los coeficinetes"<<endl;
				cin>>a>>b;
				cout<<"Introducir los exponentes"<<endl;
				cin>>c>>d>>n;
				cout<<"Que termino busca"<<endl;
				cin>>k;
				t = comb(n,k-1)*pow(a,n-(k-1))*pow(b,k-1);
				s = c*(n-(k-1));
				m = d*(k-1);
				cout<<"El termino que buscamo es el siguiente: "<<t<<"x"<<s<<"y"<<m<<endl;
				return 0;
			case 3:
				int n;
				cout<<"Ingrese el numero de filas";
				cin>>n;		
				int triangulo[n][n];
				triangulo[0][0] = 1;
				for (int i = 1 ; i < n ; i++){
					for (int j = 0 ; j <= i ; j++){
						if (j == 0 || j == i){
							triangulo[i][j] = 1;
						}
						else{
							triangulo[i][j] = triangulo[i - 1][j - 1] + triangulo[i - 1][j];
						}
					}
				}	
				for (int i = 0 ; i < n ; i++){
					for (int j = 0 ; j <= i ; j ++){
						cout << triangulo[i][j] << " ";
					}
					cout<<endl;
				}
				return 0;
				break;
		}
	
}
