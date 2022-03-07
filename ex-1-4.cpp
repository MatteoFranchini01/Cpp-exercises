#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;
const int N = 5;
const int P = 201;

struct Libro {
    string titolo;
    string autore;
    int annoedizione;
    int prezzo;
};

int main() {
    int p_med = 0; int tot = 0; int p_max = 0; int old = 3000; string old_title; string max_title;
    srand((unsigned)time(NULL));
    Libro x[N];
    for (int f = 0; f < N; f++) {
        cout << "Autore " << endl;
        cin >> x[f].autore;
        cout << "Titolo " << endl;
        cin >> x[f].titolo;
        cout << "Anno " << endl;
        cin >> x[f].annoedizione;
        x[f].prezzo = rand()%P;
        cout << f << " " << x[f].autore << " " << x[f].titolo << " " << x[f].annoedizione << " " << x[f].prezzo << endl;
    }
    for (int i = 0; i < N; i++) {
        tot += x[i].prezzo;
        if (x[i].prezzo >= p_max) {p_max = x[i].prezzo; max_title = x[i].titolo;}
        if (x[i].annoedizione <= old) {old_title = x[i].titolo; old = x[i].annoedizione;}
    }
    p_med = tot/N;
    cout << "Prezzo medio " << p_med << " Più costoso " << max_title << " Più vecchio " << old_title << endl;
    return 0;
}
