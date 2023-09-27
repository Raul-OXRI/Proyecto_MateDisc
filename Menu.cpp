#include <iostream>

using namespace std;

int opcion = 1;

int main(){
	while (opcion != 0){
		cout<<"1 Opcion 1";
		cout<<"\n2 Opcion 2";
		cout<<"\n0 Salir";
		cin>>opcion;
		switch(opcion){
			case 1:
				break;
			case 2:
				break;
			default:
				cout<<"Opcion no valida" << endl;
				break;
		}
	}
	return 0;
}
