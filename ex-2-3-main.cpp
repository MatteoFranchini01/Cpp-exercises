#include <iostream>
#include "money.h"
#include "credit_card.h"
#include <fstream>
#include "ostream.h"

using namespace std;

ostream& operator<<(ostream& os, Money m);

int main () {
    string item; int e; int c; Money total;
    Credit_Card credit ("Matteo", "1234");
    ifstream myfile ("spesa.txt");
    if (myfile.is_open()) {
        while(myfile >> item >> e >> c) {
            credit.charge(item, e, c);
            total = credit.get_totalcharges();
            cout << total.get_euros() << "." << total.get_cents() << endl;
        }
    myfile.close();}
    else cout << "Unable to open file" << endl;
    return 0;

}
