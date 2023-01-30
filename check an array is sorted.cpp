#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[i-1]) {
      return false;
    }
  }
  return true;
}

int main() {
    int arr[] = { 20, 23, 23, 45, 78, 88 };
    int n = sizeof(arr) / sizeof(arr[0]);
    if (isSorted(arr, n))
        cout << "Yes, the array is sorted." << endl;
    else
        cout<<"No, the array is not sorted." << endl;
    return 0;
}
