#include <iostream>
using namespace std;

int a[20];        //Deklarasi array a dengan ukuran 20
int n;                //Deklarasi variable n untuk menyimpan banyaknya elemen pada array

void input() {                //prosedur untuk input
    while (true) {        //looping
        cout << "masukan banyaknya elemen pada array:"; // output ke layar
        cin >> n;                        //input dari pengguna
        if (n <= 20)                //jika n kurang dari atau samadengan 20
            break;                        //keluar dari lopp
        else {                                //jika n lebih dari 20
            cout << "\Array dapat mempunyai maksimal 20 elemen.\n";//output ke layar

        }
    }
    cout << endl;                        //output baris kosong
    cout << "=======================" << endl;//output ke layar
    cout << "masukan Elemen Array" << endl;//output ke layar
    cout << "=======================" << endl;//output ke layar

    for (int i = 0; i < n; i++) {        //looping dengan i dimulai dari 0 hingga n-1
        cout << "data ke-" << (i + 1) << ":"; //output ke layar
        cin >> a[i];// input dari pengguna
    }

}

void display() {  //prosedur untuk menampilkan hasil
    cout << endl;  //output baris kosong
    cout << "==========================" << endl;                //output ke layar
    cout << "element array yang telah tersusun" << endl; //output ke layar 
    cout << "===========================" << endl;                //output ke layar
    for (int j = 0; j < n; j++) {                        //looping dengan j dimulai dari o hingga n-1
        cout << a[j] << endl;                                //output ke layar
    }
    cout << endl;                                                        //output baris kosong
}
void bubbleSortArayy() {                                        //prosedur untuk mengurutkan array dengan denagn metode bubble sort
    for (int pass = 1; pass < n; pass++) {        //looping dengan i dimulai dari 0 hingga n-1
        for (int j = 0; j < n - 1; j++) {        /// Looping dengan j dimulai dari 0 hingga n-pass-1
            if (a[j] > a[j + 1]) {                        // Jika elemen ke-j lebih besar dari elemen ke-(j+1)
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    input();                                                                // Memanggil fungsi input untuk mengisi nilai array a
    bubbleSortArayy();                                                // Memanggil fungsi bubbleSortArray untuk mengurutkan array a
    display();                                                                // Memanggil fungsi display untuk menampilkan isi array a yang sudah diurutkan
    return 0;
}