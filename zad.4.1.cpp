#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int size, maxValue;

	cout << "Podaj wielkosc tablicy: ";
	cin >> size;

	vector<int> arr(size);

	for (int i=0; i<size; i++) {
		cout << "Podaj wartosc do tablicy: ";
		cin >> arr[i];
	}

	maxValue = arr[0];
	for (int j=0; j<size; j++) {
		if (arr[j] > maxValue) {
			maxValue = arr[j];
		}
	}

	cout << "Najwiêksza wartosc w tablicy to: " << maxValue;

	return 0;
}
