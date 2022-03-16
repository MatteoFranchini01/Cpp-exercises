#include <iostream>

using namespace std;

template <class T> T max2(T primo, T secondo) {
    if (primo > secondo) return primo;
    else if (primo == secondo) cout << "i due numeri sono uguali" << endl;
    else return secondo;
}

template <class T> T max3(T primo, T secondo, T terzo) {
    if (primo == secondo == terzo) cout << "i tre numeri sono uguali" << endl;
    return max2(max2(primo, secondo),terzo);
}

int main () {
    cout << max2<int> (6,7) << max2<int>(100, 10) << endl;
    cout << max3<int> (7, 10, 21) << max3<int> (100, 20, 50) << endl;
    return 0;
    };
