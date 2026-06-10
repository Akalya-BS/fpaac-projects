#include <iostream>
using namespace std;

float calculateBill(int units) {
    float bill;

    if (units <= 100) {
        bill = units * 1.5;
    }
    else if (units <= 200) {
        bill = (100 * 1.5) + ((units - 100) * 2.5);
    }
    else if (units <= 300) {
        bill = (100 * 1.5) + (100 * 2.5) + ((units - 200) * 4);
    }
    else {
        bill = (100 * 1.5) + (100 * 2.5) + (100 * 4) + ((units - 300) * 6);
    }

    return bill;
}

void displayBill() {
    int units;
    cout << "Enter units consumed: ";
    cin >> units;

    float amount = calculateBill(units);

    cout << "\n----- ELECTRICITY BILL -----" << endl;
    cout << "Units Consumed : " << units << endl;
    cout << "Total Bill     : Rs. " << amount << endl;
}

int main() {
    int choice;

    do {
        cout << "\n=== ELECTRICITY BILL SYSTEM ===" << endl;
        cout << "1. Generate Bill" << endl;
        cout << "2. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                displayBill();
                break;

            case 2:
                cout << "Thank You!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 2);

    return 0;
}