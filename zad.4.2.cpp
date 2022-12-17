#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int size;

	cout << "Podaj wielkosc tablicy: ";
	cin >> size;

	vector<int> arr(size);

	for (int i=0; i<size; i++) {
		cout << "Podaj wartosc do tablicy: ";
		cin >> arr[i];
	}

	int maxCount = 0;
	int mostFreq = 0;
	for (int j=0; j < size; j++) {
		int count = 0;
		for (int k = 0; k < size; k++) {
			if (arr[j] == arr[k]) {
				count++;
			}
			if (count > maxCount) {
				maxCount = count;
				mostFreq = arr[j];
			}
		}
	}

	cout << "Najczesciej wystepujacy element tablicy to: " << mostFreq;

	return 0;
}
