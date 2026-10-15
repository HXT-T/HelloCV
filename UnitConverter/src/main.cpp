
#include <iostream>
#include "unitlib.h"
using namespace std;

int main() {
    int choice;
    double value, result;

    while (true) {
        cout << "\n===== 单位转换器 =====" << endl;
        cout << "1. 摄氏度 → 华氏度" << endl;
        cout << "2. 华氏度 → 摄氏度" << endl;
        cout << "3. 米 → 英尺" << endl;
        cout << "4. 英尺 → 米" << endl;
        cout << "5. 千克 → 磅" << endl;
        cout << "6. 磅 → 千克" << endl;
        cout << "0. 退出程序" << endl;
        cout << "请选择：";

        if (!(cin >> choice)) {
            cout << "输入错误！" << endl;
            return 1;
        }

        if (choice == 0) {
            cout << "程序结束！" << endl;
            break;
        }

        if (choice < 1 || choice > 6) {
            cout << "无效选项，请重新选择！" << endl;
            continue;
        }

        cout << "请输入数值：";
        if (!(cin >> value)) {
            cout << "输入错误！" << endl;
            return 1;
        }

        switch (choice) {
            case 1: result = cToF(value); break;
            case 2: result = fToC(value); break;
            case 3: result = mToFt(value); break;
            case 4: result = ftToM(value); break;
            case 5: result = kgToLb(value); break;
            case 6: result = lbToKg(value); break;
        }

        cout << "转换结果：" << result << endl;
    }

    return 0;
}
