#include <iostream>
using namespace std;

int main() {
    system("cls");

    int n;

    cout << "Masukan Jumlah Data : ";
    cin >> n;

    int* arr = new int[n];

    cout << "Input data" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "\nData yang dimasukkan:" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Output data ke-" << i + 1 << " : " << arr[i] << endl;
    }

    delete[] arr;

    return 0;
}