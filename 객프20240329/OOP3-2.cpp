#include <iostream>
using namespace std;


int big(int a, int b) {
    int maxVal = (a > b) ? a : b;
    return (maxVal > 100) ? 100 : maxVal;
}


int big(int a, int b, int maxLimit) {
    int maxVal = (a > b) ? a : b;
    return (maxVal > maxLimit) ? maxLimit : maxVal;
}

int main() {
    int x = big(3, 5); // 5
    int y = big(300, 60); // 100
    int z = big(30, 60, 50); // 50
    cout << x << ' ' << y << ' ' << z << endl;
}
