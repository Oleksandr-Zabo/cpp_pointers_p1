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
void rewrite_array(T* p_1, int size) {
    if (p_1 != nullptr) {
        T* arr = new T[size];
        for (int* i = new int{ 0 }; *i < size; *i += 1) {
            arr[*i] = p_1[*i];
        }
        for (int* i = new int{ 0 }; *i < size; *i += 1) {
            p_1[*i] = arr[size - 1 - (*i)];
        }
        delete[] arr;
    }
}




int main() {
    srand(time(0));
    int* size = new int;
    cout << "Enter the size of the array: ";
    cin >> *size;
    int* arr_1 = createArray<int>(*size);
    cout << "Array 1:" << endl;
    printArray(arr_1, *size);

    int* to_arr_1 = &arr_1[0];

    rewrite_array(to_arr_1, *size);

    cout << "Array 1 after:" << endl;
    printArray(arr_1, *size);

    delete[] arr_1;
    delete size, to_arr_1;

    return 0;
}