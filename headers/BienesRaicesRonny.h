/* +---------------------------------------+
   | Nombre: Proyecto Final - INF-512 C++  |
   | Santo Domingo, R.D. 2011              |
   | Autor: Ronny Z. Suero                 |
   | Compilador: Borland C++ Builder 6     |
   +---------------------------------------+ */

/*-----------------------------
CABECERO PRINCIPAL DEL SISTEMA
------------------------------*/

// BienesRaicesRonny.h
#ifndef BIENESRAICESRONNY_H
#define BIENESRAICESRONNY_H

//---------------------------------------------------------------------------
// LIBRERIAS
#include <conio>
#include <fstream>
#include <iostream> //AUNQUE <fstream> LO INCLUYE EL COMPILADOR UTILIZADO LO REQUIERE
#include <vector>
using namespace std;

//---------------------------------------------------------------------------
//CLASES
#include "BienesRaices.h"
#include "Cliente.h"
#include "Empleado.h"
#include "Persona.h"
#include "Propiedades.h"
#include "Ventas.h"

//---------------------------------------------------------------------------
//PLANTILLAS
#include "leerRegistro.h"
#include "guardarRegistro.h"
#include "reemplazarRegistro.h"
#include "buscarID.h"

//---------------------------------------------------------------------------
/* CABECEROS DE FUNCIONES NO MIEMBROS, 
   MENUS Y LOS MODULOS DEL SISTEMA  */
#include "funciones.h"
#include "menus.h"
#include "modulos.h"

#endif
//---------------------------------------------------------------------------