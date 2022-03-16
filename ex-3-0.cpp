#include <iostream>

using namespace std;

class Mobile {
private:
    int altezza;
    int larghezza;
public:
    Mobile() {
        altezza = 0;
        larghezza = 0;
    }
    ~Mobile() {};
    void set_larghezza (int l) {larghezza = l;}
    void set_altezza (int a) {altezza = a;}
    int get_larghezza () {return larghezza;}
    int get_altezza () {return altezza;}
};

class Armadio : public Mobile {
private:
    int ante;
public:
    Armadio() {
        ante = 0;
    }
    ~Armadio() {};
    void set_ante (int n) {ante = n;}
    int get_ante () {return ante;}
};

int main () {
    Mobile m;
    m.set_altezza(10); m.set_larghezza(20);
    cout << "a" << m.get_altezza() << "l" <<  m.get_larghezza() << endl;
    m.set_altezza(20); m.set_larghezza(40);
    cout << "a" << m.get_altezza() << "l" << m.get_larghezza() << endl;
    Armadio a;
    a.set_altezza(60); a.set_larghezza(80); a.set_ante(4);
    cout << "ante" << a.get_ante() << "l" << a.get_larghezza() << "a" << a.get_altezza() << endl;
    return 0;
}
