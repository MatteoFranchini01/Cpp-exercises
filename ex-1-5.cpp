#include <iostream>
#include <cmath>
using namespace std;
const float pi = 3.14;

float area (float r) {
    float a;
    return a = pow(r,2) * pi;
}
int main () {
    float r;
    cout << "Inserire il raggio: " << endl;
    cin >> r;
    cout << area(r) << endl;

}
