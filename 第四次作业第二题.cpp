//二维数组最大点，最小点，鞍点问题
#include<iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int** p = new int* [n];
    for (int i = 0; i < n; i++) {
        p[i] = new int[m];
    }

    int x;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> x;
            p[i][j] = x;
        }
    }

    // Loop through each element in the matrix
    bool hasAnswer = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {//双层循环在外边，内部判断
            // Check if p[i][j] is max in its row
            bool isMaxInRow = true;
            for (int k = 0; k < m; k++) {
                if (p[i][k] > p[i][j]) {
                    isMaxInRow = false;
                    break;
                }
            }//当当前数字不是该行最大值，false

            // Check if p[i][j] is max in its column
            bool isMaxInCol = true;
            for (int k = 0; k < n; k++) {
                if (p[k][j] < p[i][j]) {
                    isMaxInCol = false;
                    break;
                }
            }
            //该行数字不是这一列最大值false
//只有当同时满足条件，才可以输出
//有效解决了相等数字问题
            if (isMaxInRow && isMaxInCol) {
                cout << p[i][j] << " " << i + 1 << " " << j + 1 << endl;
                hasAnswer = true;
            }
        }
    }

    if (!hasAnswer) {
        cout << "No answer";
    }

    // Free memory
    for (int i = 0; i < n; i++) {
        delete[] p[i];
    }
    delete[] p;

    return 0;
}

