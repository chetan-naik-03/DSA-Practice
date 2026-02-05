#include <iostream>
#include <vector>
using namespace std;

int recBinarySearch(const vector<int>& arr, int tar, int st, int end) {
    // base case
    if (st > end) {
        return -1;
    }

    int mid = st + (end - st) / 2;

    if (arr[mid] == tar) {
        return mid;
    }
    else if (tar > arr[mid]) { // search right half
        return recBinarySearch(arr, tar, mid + 1, end);
    }
    else { // search left half
        return recBinarySearch(arr, tar, st, mid - 1);
    }
}

int main() {
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; // odd size
    int tar1 = 12;

    cout << recBinarySearch(arr1, tar1, 0, arr1.size() - 1) << endl;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12}; // even size
    int tar2 = 0;

    cout << recBinarySearch(arr2, tar2, 0, arr2.size() - 1) << endl;

    return 0;
}
