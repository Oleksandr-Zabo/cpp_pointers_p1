#include <iostream>
using namespace std;
//
int max_num(int* number_1, int* number_2) {
	return (*number_1 > *number_2) ?  *number_1 : *number_2;
}


int main()
{
	int* num_1 = new int;
	cout << "Enter the first number: ";
	cin >> *num_1;

	int* num_2 = new int;
	cout << "Enter he second number: ";
	cin >> *num_2;

	cout << "Max number: " << max_num(num_1, num_2)<<endl;
	cout << "The end" << endl;
	delete num_1;
	delete num_2;
	system("pause");
	return 0;
}


//#include <iostream>
//#include <ctime>
//using namespace std;
//
//double* div(double* number_1, double* number_2) {
//    return (*number_1 != 0 && *number_2 != 0) ? new double{ *number_1 / *number_2 } : nullptr;
//}
//
//int main() {
//
//    double* number_1 = new double;
//    double* number_2 = new double;
//    double* result = nullptr;
//
//    cout << "Enter the first number: ";
//    cin >> *number_1;
//    cout << "Enter the second number: ";
//    cin >> *number_2;
//    result = div(number_1, number_2);
//    (result != nullptr) ? cout << "Result: " << *result << endl : cout << "The result value is null!" << endl;
//
//    delete number_1;
//    delete number_2;
//    if (result != nullptr)
//    {
//        delete result;
//    }
//    return 0;
//}