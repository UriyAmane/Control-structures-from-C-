#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter Number: ";
    cin >> n;

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        for (int l = 1; l <= i; l++) {
            cout << i;
        }
        cout << endl;
    }

    
    int new_n = n % 5 + 5;
    cout << "When number of rows = " << new_n << endl;
    for (int i = 1; i <= new_n; i++) {
        for (int j = 1; j <= new_n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        for (int l = 1; l <= i; l++) {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}
