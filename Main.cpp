/*----------------------------
FUNCION PRINCIPAL DEL SISTEMA
------------------------------*/

//Main.cpp
#include "BienesRaicesRonny.h"

//---------------------------------------------------------------------------
int main(void) {
	BienesRaices *BienesRaicesRonnySA = new BienesRaices;
    BienesRaicesRonnySA -> iniciarSistema();

    delete BienesRaicesRonnySA;
    return 0;
}
//---------------------------------------------------------------------------
 