//��ά�������㣬��С�㣬��������
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
        for (int j = 0; j < m; j++) {//˫��ѭ������ߣ��ڲ��ж�
            // Check if p[i][j] is max in its row
            bool isMaxInRow = true;
            for (int k = 0; k < m; k++) {
                if (p[i][k] > p[i][j]) {
                    isMaxInRow = false;
                    break;
                }
            }//����ǰ���ֲ��Ǹ������ֵ��false

            // Check if p[i][j] is max in its column
            bool isMaxInCol = true;
            for (int k = 0; k < n; k++) {
                if (p[k][j] < p[i][j]) {
                    isMaxInCol = false;
                    break;
                }
            }
            //�������ֲ�����һ�����ֵfalse
//ֻ�е�ͬʱ�����������ſ������
//��Ч����������������
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

