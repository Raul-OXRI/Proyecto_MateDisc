#include <iostream>
#include <math.h>

using namespace std;

int comb(int n, int k){
	if(k==0 || k==n){
		return 1;
	}
	else{
		return comb(n-1, k-1) + comb(n-1,k);
	}
}

int main(){
	float a,b,t;
	int c,d,n,k,s,m;
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
}
