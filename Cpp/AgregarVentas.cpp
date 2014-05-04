/*----------------------------------------------------------
MODULO QUE REALIZA UNA VENTA UTILIZANDO TODOS LOS REGISTROS
------------------------------------------------------------*/
//AgregarVentas.cpp
#include "modulos.h"
//---------------------------------------------------------------------------
void agregarVentas(void) {
	
	char respuesta;
	do {
		system( "cls" );
		
		vector <Cliente> vCliente;
		vector <Empleado> vEmpleado;
		vector <Propiedades> vPropiedades;
		
	    leerRegistro(vCliente, "cliente.bin");
	    leerRegistro(vEmpleado, "empleado.bin");
	    leerRegistro(vPropiedades, "propiedades.bin");

		unsigned int indiceEmp, indiceCli, indiceProp, opcion;	
		string unID, unaCedula, status("Vendida"), otroID;
		
		gotoxy(3, 7);
		cprintf( "ID DEL EMPLEADO: " );
		gotoxy(3, 10);
		cprintf( "CEDULA DEL CLIENTE: " );
		gotoxy(3, 13);
		cprintf( "ID DE LA PROPIEDAD: " );
        gotoxy(21, 7);
		getline(cin, unID);
        gotoxy(24, 10);
		getline(cin, unaCedula);
		gotoxy(24, 13);
		getline(cin, otroID);		
		
		//VERIFICA QUE LOS DATOS SEAN CORRECTOS Y QUE LA PROPIEDAD NO ESTE VENDIDA
		if( buscarID(indiceEmp, vEmpleado, unID) == false || 
			buscarID(indiceProp, vPropiedades, otroID) == false ||
			buscarCedula(indiceCli, vCliente, unaCedula) == false ||
		    vPropiedades.at(indiceProp).getStatus() == status ) { 		

		      system( "cls" );
			  cout << "\n\n\n\nLA VENTA NO SE PUDO COMPLETAR, ESTO SE DEBE A:\n\n\n"
				   << " 1- LOS DATO(S) INTRODUCIDOS NO SE ENCUENTRA EN EL REGISTRO."
				   << " \n\n2- UNO O VARIOS DATOS FUERON INTRODUCIDOS ERRONEAMENTE.\n\n"
				   << " 3- LA PROPIEDAD YA SE ENCUENTRA VENDIDA.\n\n";
			  system( "pause" );
		}
		
		else {
			cout << "\n\n\nCONFIRMANDO DATOS:\n\n"
				 << "DATOS DE EMPLEADO: "
				 << vEmpleado.at(indiceEmp).getNombre() << " " 
			     << vEmpleado.at(indiceEmp).getApellido() << "\n\n"
				 << "DATOS DEL CLIENTE: "
				 << vCliente.at(indiceCli).getNombre() << " "
				 << vCliente.at(indiceCli).getApellido() << "\n\n" 
				 << "DATOS DE LA PROPIEDAD:\n\n"
				 << "UBICACION: " << vPropiedades.at(indiceProp).getLocalizacion()
			     << "\n\nTIPO DE PROPIEDAD: " 
				 << vPropiedades.at(indiceProp).getTipoDePropiedad()
			     << "\n\nPRECIO: " << vPropiedades.at(indiceProp).getPrecio() 
				 << ".00\n\n\n" << "PRESIONE:\n\n 1- PARA CONTINUAR VENTA.\n"
				 << " 2- PARA CANCELAR.\n\nESPERANDO RESPUESTA:";
			
			cin >> opcion;
			
			while (opcion > 2 || opcion < 1) {
				cout << "OPCION NO VALIDA VUELVA A INTENTAR:\n";
				cin >> opcion;
			}
			
			if(opcion == 2){ break; }
			
			else {
				Ventas *unaVentaX = new Ventas(vCliente.at(indiceCli), 
											   vEmpleado.at(indiceEmp), 
										       vPropiedades.at(indiceProp));
		
				guardarRegistro(unaVentaX, "ventas.bin");
				delete unaVentaX;
				
				//CAMBIA EL STATUS DE LA PROPIEDAD A "VENDIDA"
				vPropiedades.at(indiceProp).setStatus(status);						   
			
				modificarRegistro (vPropiedades, "propiedades.bin");

				cout << "\n\nVENTA REALIZADA EXITOSAMENTE, GRACIAS POR SU COMPRA.\n\n";
			}
		}
		cout << "\n\nDESEA REALIZAR OTRA VENTA? S/N: ";
		cin >> respuesta;
	}while(respuesta == 's' || respuesta == 'S');
}	
//---------------------------------------------------------------------------