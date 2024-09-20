#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main() {

    SetConsoleOutputCP(CP_UTF8);

    float Radius, C, S, a_res, b_res, x, y, z;


    // 3.7A


    cout << "Введіть R:";
    cin >> Radius;

    C = Radius * 3.14 * 2;
    S = 3.14 * pow(Radius, 2);

    cout << "Радіус кола: " << C << endl;
    cout << "Площа кола: " << S << endl;


    // 3.7B(1)


    cout << "Введіть зімнну x: " << endl;
    cin >> x;

    cout << "Введіть зімнну y: " << endl;
    cin >> y;

    cout << "Введіть зімнну z: " << endl;
    cin >> z;

    cout << "Приклад 1: ";

    a_res = log(abs(y - sqrt(abs(x)) * x - y / (z + pow(x, 2) / 4)));

    cout << a_res << endl;


    // 3.7B(2)


    cout << "Приклад 2: ";

    b_res = x - pow(x, 3) / 3 + pow(x, 5) / 5;

    cout << b_res << endl;


    // 3.7С


    int number;
    cout << "Введіть тризначне число: ";
    cin >> number;

    if (number < 100 || number > 999) {
        cout << "Число має бути тризначним!" << endl;
        return 0;
    }

    int last_digit = number % 10;
    int remaining_number = number / 10;

    int new_number = last_digit * 100 + remaining_number;

    cout << "Одержане число: " << new_number << endl;
    
    return 0;
}