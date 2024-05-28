#include<bits/stdc++.h>
using namespace std;
void Merge(vector<int>& arr, int low, int mid, int high) {
    int h = low, i = low, j = mid + 1;
    vector<int> b(high - low + 1);
    while (h <= mid && j <= high) {
        if (arr[h] <= arr[j])
            b[i++] = arr[h++];
        else
            b[i++] = arr[j++];
    }
    while (h <= mid)
        b[i++] = arr[h++];
    while (j <= high)
        b[i++] = arr[j++];
    for (int k = low; k <= high; k++)
        arr[k] = b[k];
}
void MergeSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);
        Merge(arr, low, mid, high);
    }
}
int main() {
    vector<int> arr = {9, 3, 7, 5, 6, 4, 8, 2};
    int n = arr.size();
    cout << "Our Original Array is - \n";
    for (auto itr : arr)
        cout << itr << " ";
    cout << "\nNow Sorted Array is - \n";
    MergeSort(arr, 0, n - 1);
    for (auto itr : arr)
        cout << itr << " ";
    return 0;
}
