//
// Created by Matteo Franchini on 10/03/22.
//
#include "money.h"

Money operator+(Money m5, Money m6) {
    int sum_e; int sum_c; int resto; Money totale;
    sum_e = m5.get_euros() + m6.get_euros();
    sum_c = m5.get_cents() + m6.get_cents();
    if (sum_c >= 100) {
        resto = sum_c - 100;
        sum_e += 1;}
    else {
        resto = sum_c;
    }
    totale.set_euros(sum_e); totale.set_cents(resto);
    return totale;
}
