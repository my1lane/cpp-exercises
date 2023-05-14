#include <iostream>

using namespace std;

int func(int* arr, int size) {
    int max_arr = *arr;
    for (int i = 0; i < size; i++) {
        if (max_arr < arr[i]) {
            max_arr = arr[i];
        }
    }
    return max_arr;
}

int main() {
    int arr[] = {7, 3, 9, 5};
    int size = 4;
    cout << func(arr, size) << endl;
    return 0;
}
