#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
const int MAX = 80;
struct tRegistro{
	int cod;
	char item[MAX];
	double val;
};
int SIZE = sizeof(tRegistro);

void mostrar(const tRegistro& registro) {
    
    cout << registro.cod << " - " << registro.item 
         << " - " << fixed << setprecision(2) 
         << registro.val << " euros" << endl;
}
int main(){
	tRegistro registro;
	fstream archivo;
	archivo.open("bd.dat", ios::in | ios::binary);
	archivo.read((char *) &registro, SIZE);
	int cuantos = archivo.gcount();
	while (cuantos ==SIZE)
	{
		mostrar(registro);
		archivo.read((char *) &registro, SIZE);
		cuantos = archivo.gcount();
	}
	archivo.close();
	return 0;
}
