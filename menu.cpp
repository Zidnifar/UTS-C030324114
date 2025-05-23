#include <iostream>
#include <conio.h>
using namespace std;

const int MAX_SIZE = 100; // Ukuran maksimum array
int arr[MAX_SIZE]; // Array untuk menyimpan data
int n = 0; // Jumlah elemen yang dimasukkan

void dMenu() {
    system("cls");
    cout << "Aplikasi Sorting Bubble" << "\n";       
    cout << "1. Memasukkan data" << "\n";            
    cout << "2. Menampilkan data" << "\n";            
    cout << "3. Sorting" << "\n";           
    cout << "4. Sepatah Kata" << "\n";            
    cout << "5. Exit" << "\n";           
    cout << "Masukan angka :";        
}

void inputData() {
  system("cls");
    cout << "Masukkan jumlah elemen array (max " << MAX_SIZE << "): ";
    cin >> n;

    if (n > MAX_SIZE || n <= 0) {
        cout << "Jumlah elemen tidak valid!" << endl;
        getch(); // Tunggu input dari pengguna
        return;
    }

    cout << "Masukkan " << n << " elemen array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

void outputData() {
    system("cls");
    cout << "Data array yang dimasukkan:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    getch(); // Tunggu input dari pengguna
}

void bubbleSorting() {
  system("cls");
  // Melakukan bubble sort
  for (int i = 0; i < n - 1; ++i) {
      for (int j = 0; j < n - i - 1; ++j) {
          if (arr[j] > arr[j + 1]) {
              int temp = arr[j];
              arr[j] = arr[j + 1];
              arr[j + 1] = temp;
          }
      }
  }

  cout << "Array setelah diurutkan: ";
  for (int i = 0; i < n; ++i) {
      cout << arr[i];
      if (i != n - 1) cout << ", "; 
  }
  getch();
}

void sepatahKata() {
    system("cls");
    cout << "Sabar, bentar lagi pulang\n @Farah25";
    getch();
}

int main() {
    char pl;
    do {
        dMenu();
        pl = getch();
        switch (pl) {
            case '1':
                inputData(); // Memanggil fungsi untuk memasukkan data
                break;
            case '2':
                outputData(); // Memanggil fungsi untuk menampilkan data
                break;  
            case '3':
                bubbleSorting(); // Memanggil fungsi untuk sorting
                getch(); // Tunggu input dari pengguna
                break;  
            case '4':
                sepatahKata();
                break;  
            case '5':
                break;
            default:
                system("cls");
                cout << "Pilihan Tidak Tersedia";
                getch();
                break;
        }
    } while (pl != '5');
    
    return 0;
}
