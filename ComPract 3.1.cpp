

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float t = 103;                       // нижня ланка
    cout << fixed << setprecision(10);
    cout << "t(103) = " << t << endl;

    for (int k = 101; k >= 1; k -= 2) {   // k = 101, 99, 97, ..., 1
        t = k + 1.0 / t;                  // ланка: k + 1/(нижня частина)
        cout << "t(" << k << ") = " << t << endl;
    }

    float y = 1.0 / t;                   // зовнішня риска
    cout << "y = " << y << endl;
    return 0;
}

