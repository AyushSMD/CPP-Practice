#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 123,org = n, digit = to_string(n).size(), sum = 0;
    while (n>0) {
        sum += pow(n%10,digit);
        n/=10;
    }

    cout << (org == sum ? "armstrong" : "nope");
    return 0;
}
