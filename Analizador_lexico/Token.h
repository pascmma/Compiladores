#pragma once
#include "algumalex.h"
#include <string>

using namespace std;

class Token 
{
	public:
		TipoToken nombre;
		string lexema;
		Token(TipoToken nombre, string lexema)
		{
			this->nombre = nombre;
			this->lexema = lexema;
		}

		string to_string()
		{
			string coma = ",";
			return "<" + nombre + coma + lexema + ">";

		}

};
