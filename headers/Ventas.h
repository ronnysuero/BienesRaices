/*--------------------------
CABECERO DE LA CLASE VENTAS 
----------------------------*/

//Ventas.h
#include "BienesRaicesRonny.h"
//---------------------------------------------------------------------------
#ifndef VENTAS_H
#define VENTAS_H

class Ventas {

	private:
		Cliente comprador;
		Empleado vendedor;
		Propiedades laVenta;

	public:
		Ventas(void);
		Ventas(Cliente, Empleado, Propiedades);
		~Ventas(void);
		Cliente* getCliente(void);
		Empleado* getEmpleado(void);
		Propiedades* getPropiedades(void);
};
#endif
//---------------------------------------------------------------------------