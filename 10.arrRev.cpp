#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 4};
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    cout << "array is: " << endl;
    for (int x:arr) {cout << x << " ";}
    return 0;
}