#include <iostream>
using namespace std;

int main() {
    system("cls");

    int m1[2][3][3];

    // Input data
    for (int i = 0; i < 2; i++) {
        cout << "Mahasiswa Ke-" << i + 1 << endl;

        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cin >> m1[i][j][k];
            }
        }

        cout << "\n";
    }

    // Output data
    for (int i = 0; i < 2; i++) {
        cout << "Mahasiswa Ke-" << i + 1 << endl;

        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cout << m1[i][j][k] << " ";
            }

            cout << endl;
        }

        cout << "\n";
    }

    return 0;
}