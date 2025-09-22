#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s1 = "hello" ,s2 = "world";
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    cout << (s1 == s2 ? "anagram" : "not anagram") << endl;
}