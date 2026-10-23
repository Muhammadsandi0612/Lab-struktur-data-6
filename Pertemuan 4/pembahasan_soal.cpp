#include <iostream>
using namespace std;

int main() {
	const int layer = 2;
	const int baris = 3;
	const int kolom = 4;
	int array3D[layer][baris][kolom];

	for (int i = 0; i < layer; i++) {
		for (int j = 0; j < baris; j++) {
			for (int k = 0; k < kolom; k++) {
				cout << "Data [" << i << "][" << j << "][" << k << "]: ";
				cin >> array3D[i][j][k];
			}
		}
	}

	cout << "\nIsi array 3D:\n";
	for (int i = 0; i < layer; i++) {
		cout << "Layer " << i + 1 << ":\n";
		for (int j = 0; j < baris; j++) { 
			for (int k = 0; k < kolom; k++) {
				cout << array3D[i][j][k] << " ";
			}
			cout << '\n';
		}
		cout << '\n';
	}
}