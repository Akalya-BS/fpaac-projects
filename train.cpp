#include <iostream>
using namespace std;

int availableSeats = 50;

void checkSeats() {
    cout << "Available Seats: " << availableSeats << endl;
}

void bookTicket(int seats) {
    if (seats <= availableSeats) {
        availableSeats -= seats;
        cout << seats << " ticket(s) booked successfully." << endl;
    } else {
        cout << "Not enough seats available!" << endl;
    }
}

void cancelTicket(int seats) {
    availableSeats += seats;
    cout << seats << " ticket(s) cancelled successfully." << endl;
}

int main() {
    int choice, seats;

    do {
        cout << "\n=== TRAIN BOOKING SYSTEM ===" << endl;
        cout << "1. Check Available Seats" << endl;
        cout << "2. Book Ticket" << endl;
        cout << "3. Cancel Ticket" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                checkSeats();
                break;

            case 2:
                cout << "Enter number of tickets to book: ";
                cin >> seats;
                bookTicket(seats);
                break;

            case 3:
                cout << "Enter number of tickets to cancel: ";
                cin >> seats;
                cancelTicket(seats);
                break;

            case 4:
                cout << "Thank you for using Train Booking System!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}