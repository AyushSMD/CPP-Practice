#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {1,2,3,4,5};
    int mx = *max_element(arr.begin(),arr.end());
    int mn = *min_element(arr.begin(),arr.end());
    cout << mn << " " << mx << endl;
    return 0;
}