#pragma once
#include <string>
using namespace std;
class CJuego
{
	string Nombre;
	string Genero;
	string SubGen;
	string Plataforma;
public:
	CJuego();
	CJuego(string, string,string,string);
	~CJuego();
	string getNombre();
	string getGenero();
	string getSubGen();
	string getPlataforma();
};

