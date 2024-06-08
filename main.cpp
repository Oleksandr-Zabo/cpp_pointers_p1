#include <iostream>
using namespace std;

int max_num(int* number_1, int* number_2) {
	if (number_1 != nullptr && number_1 != nullptr) {
		return (*number_1 > *number_2) ? *number_1 : *number_2;
	}
}


int main()
{
	int* num_1 = new int;
	cout << "Enter the first number: ";
	cin >> *num_1;

	int* num_2 = new int;
	cout << "Enter the second number: ";
	cin >> *num_2;

	cout << "Max number: " << max_num(num_1, num_2)<<endl;
	cout << "The end" << endl;
	delete num_1;
	delete num_2;
	system("pause");
	return 0;
}
