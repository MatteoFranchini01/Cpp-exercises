//
// Created by Matteo Franchini on 10/03/22.
//

#ifndef ESERCITAZIONI_MONEY_H
#define ESERCITAZIONI_MONEY_H
#include <iostream>

using namespace std;

class Money {
private:
    int euros; int cents;
public:
    Money() {
        euros = 0;
        cents = 0;
    }
    int get_euros() {return euros;}
    void set_euros (int e) {euros = e;}
    int get_cents () {return cents;}
    void set_cents (int c) {cents = c;}
    ~Money() {};
};

Money operator+(Money, Money);


#endif //ESERCITAZIONI_MONEY_H
