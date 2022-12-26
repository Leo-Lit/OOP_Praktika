#include <iostream>
using namespace std;
template <typename tip>
class calculator {
public:
    tip a, b;
    calculator() { a = 0; b = 0; };
    void slozh(tip a, tip b) {
        cout << a + b << endl;
    }
    void umnozh(tip a, tip b) {
        cout << a * b << endl;
    }
    void minus(tip a, tip b) {
        cout << a - b << endl;
    }
};

int main() {
    calculator <int> oper;
    int a, b;
    cout << "A:";
    cin >> a;
    cout << "B:";
    cin >> b;
    int var;
    cout << "Operation:" << endl << "1)+ 2)- 3)*" << endl;
    cin >> var;
    switch (var) {
    case 1:
        cout << "result:";
        oper.slozh(a, b);
        break;
    case 2:
        cout << "result:";
        oper.minus(a, b);
        break;
    case 3:
        cout << "result:";
        oper.umnozh(a, b);
        break;
    default:
        cout << "cringe";
        break;
    }
    return 0;
};