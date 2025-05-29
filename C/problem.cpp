
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t != 0) {
        int row, col;
        cin >> row >> col;

        vector<vector<int>> array(row, vector<int>(col));

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cin >> array[i][j];
            }
        }

        // The commented code can be restructured and uncommented if needed
        /*
        int row1 = 0, row2 = 0, col1 = 0, col2 = 0, count = 0, count2 = 0, total = 0, t2;

        for (int i = 0; i < row; i++) {
            count2 = 0;
            for (int j = 0; j < col; j++) {
                if (array[i][j] == '#') { // Assuming you meant a character comparison
                    ++count2;
                    if (count == 0) {
                        row1 = i;
                    } else {
                        row2 = i;
                    }
                    if (count2 > total) {
                        total = count2;
                        t2 = i;
                    }
                }
            }
        }

        int count3 = 0;
        for (int j = 0; j < col; j++) {
            if (array[t2][j] == '#' && count3 == 0) {
                col1 = j;
            } else if (array[t2][j] == '#') {
                col2 = j;
            }
        }

        cout << row1 << " " << row2 << " " << col1 << " " << col2 << endl;
        */

        t--;
    }

    return 0;
}
