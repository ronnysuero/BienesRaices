/*---------------------------------------------
MODULO QUE MUESTRA TODAS LAS VENTAS REALIZADAS
-----------------------------------------------*/

//VerVentasVentas.cpp
#include "modulos.h"

//---------------------------------------------------------------------------
void verVentasRealizadas(void) {
	
	system( "cls" );
	
	vector <Ventas> vVentasX;
	leerRegistro(vVentasX, "ventas.bin");
	
	gotoxy(40, 6);
	cprintf ( "BIENES RAICES RONNY, S.A." );
	gotoxy(30, 10);
	cout << "LISTA DE VENTAS REGISTRADAS EN ESTE SISTEMA\n\n\n"	;
	
	for(unsigned int i(0); i < vVentasX.size(); i++) {	
		
		cout << "VENTA #" << (i+1) << ":\n\n\nREALIZADA POR EL EMPLEADO:\n\n";
		Empleado *unEmpleadoX( vVentasX.at(i).getEmpleado() );
		
		cout << "NOMBRE COMPLETO: " << unEmpleadoX -> getNombre() << " " 
			 << unEmpleadoX -> getApellido() << "\n\n\n"
			 << "DATOS DEL CLIENTE:\n\n";
			 
		Cliente *unClienteX( vVentasX.at(i).getCliente() );
		
		cout << "NOMBRE COMPLETO: " << unClienteX -> getNombre() << " "
			 << unClienteX -> getApellido() << "\n"
			 << "CEDULA: " << unClienteX -> getCedula() << "\n\n\n"
			 << "DATOS DE LA PROPIEDAD VENDIDA:\n\n";
		
		Propiedades *unaPropiedadX( vVentasX.at(i).getPropiedades() );
 	
		cout << "UBICACION: " << unaPropiedadX -> getLocalizacion() << "\n"
			 << "TIPO DE PROPIEDAD: " << unaPropiedadX -> getTipoDePropiedad() << "\n"
			 << "PRECIO: " << unaPropiedadX -> getPrecio() << ".00\n"
			 << "-------------------------------------------------------------------"
			 << "\n\n";
	}
	cout << "\n\n";
	system( "pause" );
}
//---------------------------------------------------------------------------