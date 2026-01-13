#include <iostream>
#include <vector>
using namespace std;
int pivot(vector<int> &arr, int st, int end) {
    int piv = arr[end];
    int idx = st - 1;
    for (int i = st; i < end; i++) {
        if (arr[i] < piv) {
            idx++;
            swap(arr[idx], arr[i]);
        }
    }
    idx++;
    swap(arr[idx], arr[end]);
    return idx;
}
void quicksort(vector<int> &arr, int st, int end) {
    if (st < end) {
        int piv = pivot(arr, st, end);
        quicksort(arr, st, piv - 1);
        quicksort(arr, piv + 1, end);
    }
}
int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    quicksort(arr, 0, arr.size() - 1);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
}
