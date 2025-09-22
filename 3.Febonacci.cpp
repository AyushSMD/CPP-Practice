#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1, c;
    for (int i = 0; i < 5; i++) {
        cout << a << " ";
        c = a + b;
        b = a;
        a = c;
    }
    return 0;
}