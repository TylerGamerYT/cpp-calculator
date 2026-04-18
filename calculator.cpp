#include <iostream>
#include <cmath>
using namespace std;

bool isRad = true;

double convertTrig(double v) {
    return isRad ? v : v * M_PI / 180.0;
}

void menu() {
    cout << "\n=== SCIENTIFIC CALCULATOR ===\n";
    cout << "Mode: " << (isRad ? "RAD" : "DEG") << "\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "5. Power (x^y)\n6. Square root\n7. Sin\n8. Cos\n9. Tan\n";
    cout << "10. Toggle RAD/DEG\n0. Exit\n";
}

int main() {
    int choice;
    double a, b;

    while (true) {
        menu();
        cin >> choice;

        if (choice == 0) break;

        if (choice == 10) {
            isRad = !isRad;
            continue;
        }

        if (choice >= 1 && choice <= 5) {
            cout << "Enter first number: ";
            cin >> a;

            if (choice != 6) {
                cout << "Enter second number: ";
                cin >> b;
            }
        }

        switch (choice) {
            case 1: cout << a + b << endl; break;
            case 2: cout << a - b << endl; break;
            case 3: cout << a * b << endl; break;
            case 4: cout << a / b << endl; break;
            case 5: cout << pow(a, b) << endl; break;
            case 6:
                cout << sqrt(a) << endl;
                break;
            case 7:
                cout << sin(convertTrig(a)) << endl;
                break;
            case 8:
                cout << cos(convertTrig(a)) << endl;
                break;
            case 9:
                cout << tan(convertTrig(a)) << endl;
                break;
            default:
                cout << "Invalid option\n";
        }
    }

    return 0;
}
