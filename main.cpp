#include <iostream>
#include <ctime>
using namespace std;

template <typename T>
T* createArray(int size) {
    T* arr = new T[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 255;
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
T* sum_Array(T* arr, int size, T* sum = new T{0}) {
    if (arr != nullptr) {
        for (int* i = new int{ 0 }; *i < size; *i += 1) {
            *sum += *(arr + *i);
        }
        return sum;
        delete sum;
    }
}


int main() {
    srand(time(0));
    int* size = new int;
    cout << "Enter the size of the array: ";
    cin >> *size;
    int* arr = createArray<int>(*size);
    printArray(arr, *size);
    int* sum = sum_Array<int>(arr, *size);;
    cout << "Sum of array : " << *sum << endl;
    delete[] arr;
    delete size,sum;

    return 0;
}