#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

void genArray(int arr[], const int size)
{
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % (53 - (-17) + 1) + (-17);
	}
}

void Print(const int arr[], const int size)
{
	for (int i = 0; i < size; i++) {
		cout << setw(4) << arr[i];
	}
	cout << endl;
}

int Count(const int arr[], const int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0 && arr[i] % 3 != 0) {
			count++;
		}
	}

	return count;
}

int Sum(const int arr[], const int n) // ітераційний спосіб
{
	int s = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] < 0 && arr[i] % 3 != 0) {
			s += arr[i];
		}
	}

	return s;
}

void Replace(int arr[], const int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0 && arr[i] % 3 != 0) {
			arr[i] = 0;
		}
	}
}

int main() {
	srand(time(0));
	int arr[24]; // 24 - array size

	genArray(arr, 24);
	cout << "Array: " << endl;
	Print(arr, 24);

	int count = Count(arr, 24);
	int sum = Sum(arr, 24);

	Replace(arr, 24);

	cout << "Count:" << endl;
		cout << count << endl;
		cout << "Sum:" << endl;
		cout << sum << endl;

	cout << "New Array:" << endl;
	Print(arr, 24);

	return 0;
}
