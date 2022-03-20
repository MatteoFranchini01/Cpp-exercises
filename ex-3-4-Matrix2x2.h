//
// Created by Matteo Franchini on 18/03/22.
//

#ifndef ESERCITAZIONE_3_MATRIX2X2_H
#define ESERCITAZIONE_3_MATRIX2X2_H

#include <iostream>

using namespace std;
const int N = 2;

template <class T> class Matrix2x2 {
private:
    T m [N][N];
public:
    Matrix2x2(T m11, T m12, T m21, T m22) {
        m[0][0] = m11;
        m[0][1] = m12;
        m[1][0] = m21;
        m[1][1] = m22;
    };
    Matrix2x2() {};
    ~Matrix2x2() {};

    Matrix2x2<T> Add(Matrix2x2 x) {
        T y11; T y12; T y21; T y22;
        y11 = m[0][0] + x.m[0][0];
        y12 = m[0][1] + x.m[0][1];
        y21 = m[1][0] + x.m[1][0];
        y22 = m[1][1] + x.m[1][1];
        Matrix2x2<T> y (y11, y12, y21, y22);
        return y;
    }

    void get_values () {
        cout << m[0][0] << m[0][1] << m[1][0] << m[1][1] << endl;
    }
};

#endif //ESERCITAZIONE_3_MATRIX2X2_H
