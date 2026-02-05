#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

bool isPossible(vector<int>& A, int N, int M, int mid) {
    int students = 1;
    int pages = 0;

    for (int i = 0; i < N; i++) {
        if (pages + A[i] > mid) {
            students++;
            pages = A[i];
            if (students > M) return false;
        } else {
            pages += A[i];
        }
    }
    return true;
}

int findPages(vector<int>& A, int N, int M) {
    if (M > N) return -1;

    int low = *max_element(A.begin(), A.end());
    int high = accumulate(A.begin(), A.end(), 0);
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isPossible(A, N, M, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

#include <iostream>
using namespace std;

int main() {
    vector<int> A = {12, 34, 67, 90};
    int N = A.size();
    int M = 2;

    cout << findPages(A, N, M) << endl;
    return 0;
}

