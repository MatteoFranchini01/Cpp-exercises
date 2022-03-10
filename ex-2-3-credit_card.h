//
// Created by Matteo Franchini on 10/03/22.
//

#ifndef ESERCITAZIONI_CREDIT_CARD_H
#define ESERCITAZIONI_CREDIT_CARD_H

#include <iostream>
#include <string>
#include "money.h"

using namespace std;

class Credit_Card {
private:
    string name;
    string number;
    Money tot;
public:
    Credit_Card(string name, string number) {
        this->name = name;
        this->number = number;
    }
    void print () {
        cout << "Name " << this->name << "Number " << this->number << endl;
    }
    Money get_totalcharges () {
        return tot;
    }
    void charge (string item, int e, int c) {
        Money m1;
        m1.set_euros(e); m1.set_cents(c);
        tot = operator+(tot, m1);
    }
    ~Credit_Card() {};
};
#endif //ESERCITAZIONI_CREDIT_CARD_H
