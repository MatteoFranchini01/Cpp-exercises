#include <iostream>
using namespace std;
const int N = 5;

int main() {
    int f1, f2, sum, k;
    int i  = 0;
    int j = 0;
    int b [N] = {0, -3, 6, -9, 12};
    int a [N], c[N], d[N];
    while (i<5) {
        cout << "Inserire in posizione: " << i << endl;
        cin >> a[i];
        i++;
    }
    f1 = 0; f2 = N;
    while (j<N) {
        sum = a[f1] + b[f2];
        c[j] = sum;
        f1++; f2--; j++;
        sum = 0;
    }
    for (k=0; k<N; k++) {
        if (a[k] > b[k]) d[k] = 1;
        if (a[k] == b[k]) d[k] = 0;
        else d[k] = -1;
        cout << "a "<< a[k] << " b " << b[k] << " c " << c[k] <<" d "<< d[k] << endl;
    }

}
