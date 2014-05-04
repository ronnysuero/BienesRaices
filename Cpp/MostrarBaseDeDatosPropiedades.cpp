/*---------------------------------------------------------------------
MODULO QUE IMPRIME EN PANTALLA TODOS LOS REGISTROS DE "propiedades.bin"
-----------------------------------------------------------------------*/

//MostrarBaseDeDatosPropiedades.cpp
#include "modulos.h"

//---------------------------------------------------------------------------
void mostrarBaseDeDatosPropiedades(void) {
  
	system( "cls" );
    
	int k(1);
	vector <Propiedades> vPropiedades;
	leerRegistro(vPropiedades, "propiedades.bin"); 
	
	for(unsigned int i(0); i < vPropiedades.size(); i++) {
		cout << "\nPROPIEDAD # " << k << "\n\n\n"
		     << "ID -> " << vPropiedades.at(i).getID() << "\n\n"
             << "LOCALIZACION -> " << vPropiedades.at(i).getLocalizacion() << "\n\n"
			 << "TIPO DE PROPIEDAD -> " << vPropiedades.at(i).getTipoDePropiedad()
		     << "\n\nSTATUS -> " << vPropiedades.at(i).getStatus() << "\n\n"
             << "PRECIO RD$ -> " << vPropiedades.at(i).getPrecio() << ".00\n" 
			 << "----------------------------------------------------------\n\n";		
		k++;//ENUMERA EN ORDEN LAS PROPIEDADES
	}
	
	cout << "\n\n";
	system("pause");
}
//---------------------------------------------------------------------------