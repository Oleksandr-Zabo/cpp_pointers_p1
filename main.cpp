#include <iostream>
using namespace std;
//

void num_sign(int* number_1) {
	if (number_1 != nullptr) {
		int sign = (*number_1 != 0) ? 1 : 0;
		if (*number_1 == 0) {
			cout << "Your number is 0" << endl;
		}
		else {
			(*number_1 > 0) ? cout << "Your number is positive" << endl : cout << "Your number is negative" << endl;
		}
	}
}



int main()
{
	int* num_1 = new int;
	cout << "Enter the first number: ";
	cin >> *num_1;

	num_sign(num_1);
	cout << "The end" << endl;
	delete num_1;
	system("pause");
	return 0;
}

