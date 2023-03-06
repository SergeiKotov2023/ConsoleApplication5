#include <iostream>
#include <stdio.h>
#include <iostream>
using namespace std;
void print(int** log, int strok, int stolb) {
	cout << strok << stolb << endl;
	for (int i = 0; i < strok; i++) {
		for (int j = 0; j < stolb; j++) {
			cout << log[i][j] << " ";
		}
		cout << endl;
	}
}
void adStroki(int**& log, int& strok, int& stolb) {
	int* newMass = new int[stolb] {};
	int** newLog = new int* [strok + 1] {};
	for (int i = 0; i < strok; i++)newLog[i] = log[i];
	newLog[strok] = newMass;
	delete[]log;
	log = newLog;
	strok++;
}
int main() {
	int** massMass;
	int row = 3;
	int col = 10;
	massMass = new int* [row];
	for (int i = 0; i < row; i++)
		massMass[i] = new int[col];
	int a = 555;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			massMass[i][j] = a;
			a++;
		}
	}
	print(massMass, row, col);
	adStroki(massMass, row, col);
	print(massMass, row, col);
	for (int i = 0; i < row; i++)
		delete [] massMass[i];
	delete[] massMass;

}
