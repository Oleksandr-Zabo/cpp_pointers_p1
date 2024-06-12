#include <iostream>
#include <ctime>
using namespace std;

template <typename T>
T* createArray(int size) {
    T* arr = new T[size];
    for (int* i = new int{ 0 }; *i < size; *i += 1) {
        arr[*i] = rand() % 255;
    }
    return arr;
}

template <typename T>
void printArray(T* arr, int size) {
    if (arr != nullptr) {
        for (int* i = new int{ 0 }; *i < size; *i += 1) {
            cout << *(arr + *i) << " ";
        }
        cout << endl;
    }
}

template <typename T>
void rewrite_array(T* p_1, T* p_2, int size) {
    if (p_1 != nullptr || p_2 != nullptr) {
        for (int* i = new int{ 0 }; *i < size; *i += 1) {
            p_2[*i] = p_1[*i];
        }
    }
}




int main() {
    srand(time(0));
    int* size = new int;
    cout << "Enter the size of the array: ";
    cin >> *size;
    int* arr_1 = createArray<int>(*size);
    int* arr_2 = createArray<int>(*size);
    cout << "Array 1:" << endl;
    printArray(arr_1, *size);
    cout << "Array 2:" << endl;
    printArray(arr_2, *size);

    int* to_arr_1 = &arr_1[0];
    int* to_arr_2 = &arr_2[0];

    rewrite_array(to_arr_1, to_arr_2, *size);
    cout << "Array 2 after:" << endl;
    printArray(arr_2, *size);

    delete[] arr_1, arr_2;
    delete size, to_arr_1, to_arr_2;

    return 0;
}