#include <iostream>
using namespace std;


void leftRotate(int arr[], int r, int n) {
    for (int i = 0; i < r; i++) {
        int temp = arr[0], j;
        for (j = 0; j < n - 1; j++)
            arr[j] = arr[j + 1];
        arr[j] = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
   
    int n = 5;

    int r = 2;

   
    leftRotate(arr, r, n);

   
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
