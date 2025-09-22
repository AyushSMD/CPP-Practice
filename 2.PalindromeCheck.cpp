#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n = 1331;
    int org = n;
    int rev = 0;
    while (n>0) {
        rev = rev*10 + (n%10);
        n /= 10;
    }
    cout << (rev==org ?"palindrome":"not palindrome") << endl;
}