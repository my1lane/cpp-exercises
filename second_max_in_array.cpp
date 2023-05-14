#include <iostream>

using namespace std;

int func(int* arr, int size) {
    int first_max_arr = *arr;
    int second_max_arr = *(arr + 1);
    for (int i = 0; i < size; i++) {
        if (first_max_arr < arr[i]) {
            second_max_arr = first_max_arr;
            first_max_arr = arr[i];
        }
        else if ((second_max_arr < arr[i]) && (arr[i] != first_max_arr)) {
            second_max_arr = arr[i];
        }
    }
    return second_max_arr;
}

int main() {
    int arr[] = {11, 7, 3, 9, 5 };
    int size = 5;
    cout << func(arr, size) << endl;
    return 0;
}

