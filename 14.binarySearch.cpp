#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1,3,5,7,9};
    int key = 7, l = 0, r = arr.size()-1;
    while(r >= l){
        int mid = (l+r)/2;
        if (arr[mid] == key) {
            cout << "found at index " << mid << endl;
            return 0;
        }
        else if (arr[mid] > key) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    cout << "not found" << endl;
    return 0;
}