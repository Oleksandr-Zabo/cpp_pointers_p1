#include <iostream>
#include <ctime>
using namespace std;

double* calc(double* number_1, double* number_2, char* act) {
    if (*act == '/') {
        return (*number_1 != 0 && *number_2 != 0) ? new double{ *number_1 / *number_2 } : nullptr;
    }
    else if (*act == '*') {
        return new double{ *number_1 * *number_2 };
    }
    else if (*act == '+') {
        return new double{ *number_1 + *number_2 };
    }
    else if (*act == '-') {
        return new double{ *number_1 - *number_2 };
    }
    /*else if (*act == '^') {
     
        double* temp = new double{ 1 };
        int* i = new int{ 0 };
        for (; *i < *number_2;)
        {
            *temp *= *number_1;
            *i += 1;
        }
    }*/
    else {
        return nullptr;
    } 
}

int main() {

    double* number_1 = new double;
    double* number_2 = new double;
    char* action = new char;
    double* result = nullptr;

    cout << "Enter the first number: ";
    cin >> *number_1;

    cout << "Enter the action: ";
    cin >> *action;

    cout << "Enter the second number: ";
    cin >> *number_2;
    

    result = calc(number_1, number_2, action);

    (result != nullptr) ? cout << "Result: " << *result << endl : cout << "The result value is null!" << endl;

    delete number_1;
    delete number_2;
    delete action;
    if (result != nullptr)
    {
        delete result;
    }
    return 0;
}