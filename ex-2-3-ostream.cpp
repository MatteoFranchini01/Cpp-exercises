//
// Created by Matteo Franchini on 10/03/22.
//
#include "ostream"
#include <iostream>
#include "money.h"
using namespace std;

ostream& operator<<(ostream& os, Money m) {
    os << m.get_euros() << "." << m.get_cents();
    return os;
}
