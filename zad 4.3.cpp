#include <iostream>

using namespace std;

int main()
{
	int dataArr[10][10];

	for (int i = 0; i < 10; i++) {
			dataArr[i][0] = i;
			dataArr[i][1] = i + i;
			dataArr[i][2] = i * i;
			dataArr[i][3] = i + 3;
			dataArr[i][4] = i - 4;
			for (int h = 5; h < 10; h++) {
				dataArr[i][h] = 0;
			}
	}

	for (int k = 0; k < 10; k++) {
		for (int l = 0; l < 10; l++) {
			cout << dataArr[k][l] << " ";
		}
		cout << endl;
	}
}

