#include <iostream>
#include <string> 
using namespace std;

int main() {
    string s="aeioucbd123";
    int c = 0, v = 0;
    for (char ch : s) {
        ch = tolower(ch);
        if (isalpha(ch)){
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                v++;
            } else {
                c++;
            }
        }
    }

    cout << "Vowels " << v << " Consonant " << c << endl;
}