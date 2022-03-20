#include <iostream>
#include "Matrix2x2.h"

using namespace std;

int main () {
    Matrix2x2<int> m (1, 2, 3, 4);
    Matrix2x2<int> n (4,3,2,1);
    Matrix2x2<int> sum;
    m.get_values();
    n.get_values();
    sum = m.Add(n);
    sum.get_values();
    return 0;
}
