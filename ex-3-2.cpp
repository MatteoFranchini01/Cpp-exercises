#include <iostream>

using namespace std;

template <typename T> T most_common (T *A, int size) {
    int freq = 0; int c; T winner;
    for (int i; i <= size; i++) {
        for (int j; j <= size; j++) {
            int c = 0;
            if (A[i] == A[j]) c ++;
        }
        if (c>freq) {
            freq = c;
            winner = A[i];
        }
    }
    return winner;
}

int main () {
    int int_array[10]={1,2,3,4,3,6,7,3,9,10};
    string string_array[6] = { "pippo", "topolino", "minni", "paperino", "pippo", "pippo" };
    cout << "most common int_array[10]={1,2,3,4,3,6,7,3,9,10}= " << most_common<int>(int_array,10) << endl;
    cout << "most common string_array[6] = { \"pippo\", \"topolino\", \"minni\", \"paperino\", \"pippo\", \"pippo\" }= " << most_common<string>(string_array, 6) << endl;
    return 0;
}
