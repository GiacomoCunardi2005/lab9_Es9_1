#include <iostream>
#include "iscrizione.h"

using namespace std;

int main () {
    typeSTR_elem* L;

    FX_v_Init(L);
    FX_v_Print(L);

    FX_v_Add(L, "mario.bianchi", 24);
    FX_v_Add(L, "sergio.rossi", 6);
    FX_v_Add(L, "sergio.rossi", 4);
    FX_v_Add(L, "gianni.verdi", 32);
    FX_v_Add(L, "luigi.neri", 6);

    FX_v_Print(L);
    return 0;
}
