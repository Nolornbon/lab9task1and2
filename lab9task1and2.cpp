#include <iostream>
#include <Windows.h>
#include <cmath>     
using namespace std;

int main() {
    int n;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Enter task number: ";
    cin >> n;

    switch (n) {
    case 1: {
        cout << "Task 1" << endl << "Знайти суму квадратів всіх натуральних чисел від 10 до 100. " << endl;
        int s, i;
        s = 0;
        for (i = 10; i <= 100; ++i) {
            s += i * i;
        }
        cout << "Sum: " << s << endl;
        
        return 0;

    }
    case 2: {
        cout << "Task 2" << endl << "Протабулювати задану функцію y = pow(3, fabs(sin(x * x - 1))) на відрізку [a;b], а = -2, b = 5.2, \nв точках x(i-те) = a + i * h, де h = (b - a)/k, k - задане натуральне число." << endl;
        double a, b, i, h, x, k, y;
        cout << "Enter k: ";
        cin >> k;

        a = -2;
        b = 5.2;
        h = (b - a) / k;

        for (i = 0; i <= k; ++i) {
            x = a + i * h;
            y = pow(3, fabs(sin(x * x - 1)));
            cout << "x = " << x << ";" << " " << "  y = " << y << ";" << endl;
        }
        return 0;
    }
    default:
        cout << "Error" << endl;
        break;
    }
}
