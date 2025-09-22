#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {5,2,4,3,1};
    sort(arr.begin(),arr.end());
    cout << "Second largest element is: " << arr[arr.size()-2] << endl;
    return 0;
}