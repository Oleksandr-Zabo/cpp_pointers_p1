#include <iostream>
using namespace std;

int main()
{
	int* number_1 = new int;
    int* number_2 = new int;
    int* temp = new int;

    cout << "Enter the first number: ";
    cin >> *number_1;
    cout << "Enter the second number: ";
    cin >> *number_2;
    *temp = *number_1;
    *number_1 = *number_2;
    *number_2 = *temp;
    cout << "First number: " << *number_1 << endl
        << "Second number: " << *number_2 << endl;

	cout << "The end" << endl;
    delete number_1;
    delete number_2;
    delete temp;
	system("pause");
	return 0;
}