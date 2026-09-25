#include <iostream>
#include <stack>
using namespace std;

int main() {
    system("cls");

    stack<float> tumpukan;
    float input;

    while (cin >> input) {
        tumpukan.push(input);
    }

    while (!tumpukan.empty()) {
        cout << tumpukan.top() << " ";
        tumpukan.pop();
    }

    cout << endl;
    system("pause");

    return 0;
}