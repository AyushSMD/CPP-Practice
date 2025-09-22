#include <iostream>
using namespace std;

int main() {
    int n = 14;

    if (n<=1){cout << "not a prime" << endl;}
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) {
            cout << "not a prime" << endl; 
            return 0;
        }
    }
    cout << "prime" << endl;
    return 0;
}