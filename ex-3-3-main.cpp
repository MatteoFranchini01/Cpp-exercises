#include <iostream>
#include "template_class.h"

using namespace std;

int main () {
    int a_1 = 20; int a_2 = 10; int b_1 = 200; int b_2 = 100; char c_1 = 'a'; char c_2 = 'b'; char d_1 = 'c'; char d_2 = 'd';
    Pair<int> a (a_1, a_2);
    Pair<int> b (b_1, b_2);
    Pair<char> c (c_1, c_2);
    Pair<char> d (d_1, d_2);
    a.set_elemnt(1, 10); a.set_elemnt(2,20);
    b.set_elemnt(1, 100); b.set_elemnt(2, 200);
    a.add_up(b);
    cout << "1 " << a.get_element(1) << " 2 " << a.get_element(2) << endl;
    c.add_up(d);
    cout << "1 " << c.get_element(1) << " 2 " << c.get_element(2) << endl;
    return 0;
}
