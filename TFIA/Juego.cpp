#include "Juego.h"

CJuego::CJuego()
{
}


CJuego::~CJuego()
{
}

CJuego::CJuego(string a, string b, string c, string d)
{
	Nombre = a;
	Genero = b;
	SubGen = c;
	Plataforma = d;
}

string CJuego::getNombre()
{
	return Nombre;
}

string CJuego::getGenero()
{
	return Genero;
}
string CJuego::getSubGen()
{
	return SubGen;
}
string CJuego::getPlataforma()
{
	return Plataforma;
}