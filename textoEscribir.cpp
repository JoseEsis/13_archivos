#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
	
	string ruc, producto, texto;
	int unidades;
	double precio;
	char aux;
	ofstream archivo;
	
	archivo.open("output.txt");
	
	cout<<"RUC del cliente (X para terminar): ";
	cin>>ruc;
	while(ruc != "X")
	{
		cin.get(aux);
		cout<<"Producto: ";
		getline(cin, producto);
		cout<<"Unidades: ";
		cin>>unidades;
		cout<<"Precio: ";
		cin>>precio;
		archivo<<ruc<<" "<<unidades<<" "
			<<precio<<" "<<producto<<endl;
		cout<<"RUC del cliente (X para terminar): ";
		cin>>ruc;	
	}
	archivo<<"X";
	archivo.close();
		
	return 0;                                              
} 
