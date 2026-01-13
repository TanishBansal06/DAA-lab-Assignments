#include <iostream>
using namespace std;
int binarySearch(int arr[], int l, int h, int tar) {
    if (l > h) {
        return -1;
    }
    int mid = l + (h - l) / 2;
    if (arr[mid] == tar)
        return mid;
    else if (arr[mid] > tar)
        return binarySearch(arr, l, mid - 1, tar);
    else
        return binarySearch(arr, mid + 1, h, tar);
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int tar;
    cin >> tar;
    int result = binarySearch(arr, 0, n - 1, tar);
    if (result != -1)
        cout << result << endl;
    else
        cout << -1 << endl;
    return 0;
}
