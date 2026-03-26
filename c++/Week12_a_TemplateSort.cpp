#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
void sortList(T arr[], int n) {
    sort(arr, arr + n);
}

int main() {
    int iArr[] = {50, 10, 30};
    sortList(iArr, 3);
    for(int i: iArr) cout << i << " ";
    return 0;
}
