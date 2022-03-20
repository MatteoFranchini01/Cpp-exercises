//
// Created by Matteo Franchini on 17/03/22.
//

#ifndef ESERCITAZIONE_3_TEMPLATE_CLASS_H
#define ESERCITAZIONE_3_TEMPLATE_CLASS_H

#include <iostream>

using namespace std;

template<class T>class Pair {
private:
    T first;
    T second;
public:
    Pair(T f, T s) {
        first = f;
        second = s;
    }

    ~Pair() {};

    void set_elemnt(int position, T value) {
        if (position == 1) {
            first = value;
        } else if (position == 2) {
            second = value;
        } else {
            cout << "Valori possibili 1 o 2" << endl;
        }
    }

    T get_element(int position) const {
        if (position == 1) {
            return first;
        }
        else if (position == 2) {
            return second;
        }
    }
    void add_up (const Pair<T>& the_pair) {
        /*const e & servono perché altrimenti mi creerebbe un'altra classe e invece
        vado a chiamare direttamente la classe che ho creato*/
        T first_p; T second_p;
        first_p = the_pair.get_element(1);
        second_p = the_pair.get_element(2);
        set_elemnt(1, (first+first_p));
        set_elemnt(2, (second+second_p));
    }
};

#endif //ESERCITAZIONE_3_TEMPLATE_CLASS_H
