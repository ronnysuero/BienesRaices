/*-----------------------------------------------------------------------
DEFINICION DEL CONSTRUCTOR Y LA FUNCION MIEMBRO DE LA CLASE BIENESRAICES
-------------------------------------------------------------------------*/

//FuncionesMiembrosDeBienesRaices.h
#include "BienesRaices.h"

//CONSTRUCTOR POR DEFECTO
BienesRaices::BienesRaices(void) : option(false) { /**/ }

//DESTRUCTOR
BienesRaices::~BienesRaices(void){ /**/ }

//DEFINICION DE LA FUNCION MIEMBRO
void BienesRaices::iniciarSistema(void) {

	int switchOption;
	option=false;

	do{
		menuPrincipal( switchOption );

		switch ( switchOption ) {

			case 1:
				do{ /**/ } while( menuDeClientes() );
				break;
			
			case 2:
				do{ /**/ } while( menuDeEmpleados() );
				break;
			
			case 3:
				do { /**/ } while( menuDePropiedades() );
				break;
           
		   case 4:
                do { /**/ } while( menuDeVentas() );
                break;
			
			case 5:
				option=true;
				break;
		}  
	} while ( option == false );
}
//---------------------------------------------------------------------------