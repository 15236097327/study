#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int num1 = s1.length();
    int num2 = s2.length();
    int max_len = max(num1, num2);
    vector<int> p(max_len + 1, 0); 
    for (int i = 0; i < num1; i++) {
        p[i] = s1[num1 - 1 - i] - '0'; 
    }
    for (int i = 0; i < num2; i++) {
        p[i] += s2[num2 - 1 - i] - '0'; 
        if (p[i] >= 10) {
            p[i] %= 10;
            p[i + 1]++;
        }
    }
    for (int i = max_len; i >= 0; i--) {
        if (p[i] >= 10) {
            p[i] %= 10;
            p[i + 1]++;
        }
        else if (i == max_len && p[i] == 0) { 
            max_len--;
        }
        else {
            break;
        }
    }
    for (int i = max_len; i >= 0; i--) {
        cout << p[i];
    }
    return 0;
}