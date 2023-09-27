#include <iostream>

using namespace std;

int main(){
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
}
