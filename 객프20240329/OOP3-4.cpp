#include <iostream>
using namespace std;

template <typename R>
void reverseArray(R array[], int size) {
    for (int i = 0; i < size / 2; i++) {
        R temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }
}

int main() {
    int x[] = { 1, 10, 100, 5, 4 };
    reverseArray(x, 5); 


    for (int i = 0; i < 5; i++)
        cout << x[i] << ' '; 
    cout << endl;
}
