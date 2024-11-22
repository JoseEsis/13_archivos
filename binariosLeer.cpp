#include <iostream>
#include <fstream>

using namespace std;
const int MAX = 80;
struct tRegistro{
	int codigo;
	char item[MAX];
	double valor;
};
int SIZE = sizeof(tRegistro);

int main(){
	tRegistro registro;
	fstream archivo;
	archivo.open("bd.dat", ios::in | ios::binary);
	archivo.read((char *) &registro, SIZE);
	int cuantos = archivo.gcount();
	while (cuantos ==SIZE)
	{
		mostrar(registro);
		archivo.read((char *)) &registro, SIZE);
		cuantos = archio.gcount();
	}
	archivo.close();
	return 0;
}
