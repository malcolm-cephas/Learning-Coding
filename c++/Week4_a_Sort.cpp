#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, arr[100];
    cout << "Enter total elements: "; cin >> n;
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    cout << "Sorted list: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}
