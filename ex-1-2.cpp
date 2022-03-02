#include <iostream>
using namespace std;
const int N = 31;

int main () {
    int val, i, j;
    int d1 [31] = {0};
    int d2 [31] = {0};
    cout << "Insrire i giorni di disponibilità (utente 1)" << endl;
    do {
    cin >> val;
    if (val == 0) break;
    d1[val-1] = 1;
    }
    while (val != 0);
    cout << "Insrire i giorni di disponibilità (utente 2)" << endl;
    do {
        cin >> val;
        if (val == 0) break;
        d2[val-1] = 1;
    } while (val != 0);
    for (j = 0; j<N;j++) {
        if (d1[j] == 1 and d2[j] == 1) cout << "Disponibile nel giorno: " << j+1 << endl;
    }
}
