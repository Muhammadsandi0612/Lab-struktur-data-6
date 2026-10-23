#include <iostream>
using namespace std;

void adddata(int* &arr, int& n, int nilai) {
    int* newArr = new int[n + 1]; 
    for (int i = 0; i < n; i++) {
        newArr[i] = arr[i]; 
    }
    newArr[n] = nilai;
    delete[] arr;
    arr = newArr;
    n++;
}

void deletedata(int* &arr, int& n, int index) {
    if (n == 0) {
        cout << "Array sudah kosong." << endl;
        return;
    }

    if (n == 1) {
        delete[] arr;
        arr = nullptr;
        n = 0;
        cout << "Array sudah dikosong." << endl;
        return;
    }

    int* newArr = new int[n - 1];
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (i != index) {
            newArr[j] = arr[i];
            j++;
        }
    }

    delete[] arr;
    arr = newArr;
    n--;
    cout << "Data pada index " << index << " sudah dihapus." << endl;   
}

int searchdata(int* arr, int n, int nilai) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == nilai) {
            return i;
        }
    }
    return -1;
}
            

void display (int* arr, int n) {
    if (n == 0) {
        cout << "Array kosong." << endl;
        return;
    }

    cout << "Isi array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    system("cls");
}