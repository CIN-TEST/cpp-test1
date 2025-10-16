#include <iostream>
using namespace std;

int main() {
    // 第一段：印出星星三角形
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;  // 分隔線

    // 第二段：九九乘法表
    int i = 1;
    while (i <= 9) {
        int j = 1;
        while (j <= 9) {
            cout << i << " * " << j << " = " << i * j << "\t";
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    return 0;
}
