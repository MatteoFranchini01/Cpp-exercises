#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
    string nome;
    string cognome;
    int anni;
public:
    Persona(string nome, string cognome, int anni) {
        this->nome = nome;
        this->cognome = cognome;
        this->anni = anni;
    }
    void getInformation() {
        cout << this->nome.substr(0,1) << "." << this->cognome << "," << " " << this->anni << endl;
    }
    void setCognome (string c) {
        this->cognome = c;
    }
    ~Persona() {}
};

int main () {
    Persona p1 ("Mario", "Rossi", 21);
    Persona p2 ("Alessia", "Verdi", 50);
    Persona p3 ("Ubaldo", "Verdi", 49);
    Persona *ptr1 = &p1; Persona *ptr2 = &p2; Persona *ptr3 = &p3;
    cout << "p1 " << endl;
    p1.getInformation();
    cout << "p2" << endl;
    p2.getInformation();
    cout << "p3" << endl;
    p3.getInformation();
    Persona *A[3] = {&p1, &p2, &p3}; //Quando creo un array di puntatori devo usare *
    for (int i = 0; i < 3; i++) {
        A[i]->setCognome("Bianchi");
    }
    cout << "p1 " << endl;
    p1.getInformation();
    cout << "p2" << endl;
    p2.getInformation();
    cout << "p3" << endl;
    p3.getInformation();
    return 0;
}
