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