#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x1, y1, x2, y2;

    // Ввод координат двух клеток
    cout << "Enter the coordinates of the first cell (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second cell (x2 y2): ";
    cin >> x2 >> y2;

    // Проверка, может ли ферзь перейти за один ход
    if (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
