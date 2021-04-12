#pragma once
#include "algumalex.h"
#include"Token.h"
#include <fstream>
#include <iostream>

using namespace std;

class LectorArchivos 
{
	public:
		ifstream archivo_leer;
		string texto;
		LectorArchivos(string archivo) //RUTA DEL ARCHIVO
		{
			archivo_leer.open(archivo);
			
			while (getline(archivo_leer, texto)) {};

		}
		int leerProximoCaracter()
		{
			try
			{
				int ret = archivo_leer.peek();
				cout << (char)ret << endl;

			}
			catch (const std::exception& )
			{
				
				return -1;
			}

		}

};
