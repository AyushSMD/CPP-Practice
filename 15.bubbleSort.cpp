#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {5, 2, 9, 1};
    int n = arr.size();
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j+1]<arr[j]){swap(arr[j],arr[j+1]);}
        }
    }
    cout << "sorted array :";
    for (int i : arr){cout << i << " ";}
    return 0;
}