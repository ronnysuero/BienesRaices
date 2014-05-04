/*-----------------------------------------------------------------
DEFINICION DEL CONSTRUCTOR Y LA FUNCION MIEMBRO DE LA CLASE VENTAS
-------------------------------------------------------------------*/

//FuncionesMiembrosDeVentas.h
#include "Ventas.h"

//---------------------------------------------------------------------------
//CONSTRUCTOR POR DEFECTO
Ventas::Ventas(void) { /**/ }

//CONSTRUCTOR POR ARGUMENTOS
Ventas::Ventas(Cliente unCliente, Empleado unEmpleado, Propiedades unaPropiedad) :
	comprador(unCliente),
    vendedor(unEmpleado),
    laVenta(unaPropiedad)
{ /**/ }

//DESTRUCTOR
Ventas::~Ventas(void) {/**/}

//DEFINICIONES DE LA FUNCIONES MIEMBROS
Cliente* Ventas::getCliente(void) { return &comprador; }

Empleado* Ventas::getEmpleado(void) { return &vendedor; }

Propiedades* Ventas::getPropiedades(void) { return &laVenta; }

//---------------------------------------------------------------------------