//============================================================================
// Name        : ej104.cpp
// Author      : Pablo Weremczuk
// Version     :
// Copyright   : Use at your own risk
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "includes\aye.h"

int main()
{
	int dia, mes, anio;
	long int fecha;

	writeLnString("ingrese la fecha en formato AAAAMMDD");
	readLong(fecha);

	anio = fecha/10000;

	fecha -= anio * 10000;

	mes = fecha/100;

	fecha -= mes * 100;

	dia = fecha;

	writeString("La Fecha es ");

	writeInteger(dia);
	writeString("/");
	writeInteger(mes);
	writeString("/");
	writeInteger(anio);

	return 0;
}
