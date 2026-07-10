#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortOddEven(vector<int>& arr) {
    int n = arr.size();

  
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            arr[i] = -arr[i];
        }
    }

   
    sort(arr.begin(), arr.end());

   
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] = -arr[i];
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 5, 7, 4, 10};

    sortOddEven(arr);

    for (int x : arr)
        cout << x << " ";

    return 0;
}