//
// Created by Giacomo Cunardi on 23/11/2024.
//
#include "iscrizione.h"
#include <iostream>
#include <cstring>

using namespace std;

struct typeSTR_elem {
    char c_arr_name[31];
    int i_RaceNum;
    typeSTR_elem* STR_p_next;
};

void FX_v_Init(typeSTR_elem* STR_p) {
    STR_p = nullptr;
}

void FX_v_Print(typeSTR_elem* STR_p) {
    cout << "ATLETI ISCRITTI:" << endl;
    while (STR_p != nullptr) {
        cout << STR_p->c_arr_name << ", " << STR_p->i_RaceNum << endl;
    }
}

bool FX_v_Add(typeSTR_elem* STR_p_elemento, char c_arr_name[31], int i_RaceNum) {
    if(strlen(STR_p_elemento->c_arr_name) > 30) {
        return false;
    }

    typeSTR_elem *STR_p_uno, *STR_p_due, *STR_p_tre;

    for(STR_p_due = STR_p_elemento; STR_p_due != nullptr; STR_p_due = STR_p_due->STR_p_next) {
        if((STR_p_due->i_RaceNum, i_RaceNum) == 0) {
            return false;
        }
    }

    for(STR_p_due = STR_p_elemento; STR_p_due != nullptr; STR_p_due = STR_p_due->STR_p_next) {
        STR_p_uno = STR_p_due;
    }

    STR_p_tre = new typeSTR_elem;
    strcpy(STR_p_tre->c_arr_name, c_arr_name);
    STR_p_tre->i_RaceNum = i_RaceNum;
    STR_p_tre->STR_p_next = STR_p_elemento;

    if(STR_p_due == STR_p_elemento) {
        STR_p_elemento = STR_p_tre;
    }
    else {
        STR_p_uno->STR_p_next = STR_p_tre;
    }


}
