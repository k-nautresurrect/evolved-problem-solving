/**
 *
 * for n(2) print like this
 *           *
 *         * * *
 *         * * *
 *           *
 *
 *
 * */

#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int rows = 2 * n;
    int cols = 1;
    int spaces = 2*n;

    for (int row = 0; row < rows; row++) {
        if (row < n) {
            for (int space = 0; space < spaces; space++) cout << " ";
            spaces -= 2;
        } else {
            spaces += 2;
            for (int space = 0; space < spaces; space++) cout << " ";
        }
        for (int col = 0; col < cols; col++) {
            cout << "* ";
        }


        (row < n - 1) ? cols += 2 : ((row != n - 1) ? cols -= 2 : cols);
        cout << endl;
    }
}