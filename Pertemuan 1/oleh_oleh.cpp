#include <iostream>
using namespace std;

int main() {
  // Deklarasi array 3 dimensi berukuran [3][3][4]
  int arr[3][3][4];
    
  // Variabel untuk menghasilkan pola bilangan dari 2
  int current_value = 2;
  bool isi_ganjil = false; // Flag untuk menentukan perubahan pola

    // Mengisi array dengan pola bilangan
    for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
    for (int k = 0; k < 4; k++) {
      arr[i][j][k] = current_value;
                
    // Menghitung angka berikutnya berdasarkan pola
    if (!isi_ganjil) {
      current_value -= 1; // Kurang 1
      isi_ganjil = true;
    } else {
      current_value += 2; // Tambah 2
      isi_ganjil = false;
                }
            }
        }
    }

    // Menampilkan isi array dalam format 3 lapis tabel (3x4)
    for (int i = 0; i < 3; i++) {
      cout << "Lapis Tabel ke-" << (i + 1) << " :" << endl;
      cout << "-------" << endl;
        
    for (int j = 0; j < 3; j++) {
     for (int k = 0; k < 4; k++) {
    // Menampilkan angka dengan spasi agar seperti tabel
      cout << arr[i][j][k] << "\t";
            }
      cout << endl; 
        }
      cout << endl; 
    }
return 0;
}
