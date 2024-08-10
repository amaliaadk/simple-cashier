#include <iostream>
#include <string>
using namespace std;

// function showMenu
void showMenu() {
    cout << "Menu List : " << endl;
    // menu2nya
    cout << "1. Boba Sundae Rp18000" << endl;
    cout << "2. Chocolate Lucky Sundae Rp18000" << endl;
    cout << "3. Mango Smoothies Rp18000" << endl;
    cout << "4. Kiwi Smoothies Rp18000" << endl;
    cout << "5. Ice Cream Jasmine Tea Rp18000" << endl;
    cout << endl;
}

// function change
// non void
int payment(int money1, int money2) {
    // return calculation formula
    int change = money1 - money2;
    return (change);
}

// main
int main() {
    char order;
    string menu[5] = { "Boba Sundae", "Chocolate Lucky Sundae", "Mango Smoothies", "Kiwi Smoothies", "Ice Cream Jasmine Tea" };
    int price[5] = { 18000, 18000, 18000, 18000, 18000 };
    int choose, total = 0, pay = 0, returned = 0;
    
    cout << "            MIXUE           " << endl;
    cout << "since 1997 - ice cream & tea" << endl;
    cout << "============================" << endl << endl;
    
    // looping menu
    do {
        cout << endl;
        showMenu();
        
        cout << "Choose Menu (1-5): ";
        cin >> choose;
        
        // user choose the menu
        if (choose >= 1 && choose <= 5) {
            // Displays the selected menu options
            cout << "Your Order : " << menu[choose - 1] << endl;
            // Displays the price of the selected menu
            cout << "Price : Rp" << price[choose - 1] << endl;
            // calculate the total price
            total += price[choose - 1];
        } else {
            cout << "Options not available!" << endl;
        }
        
        cout << "\nWould you like to choose another menu?\n[type 'Y' or 'y' if you want to order the menu again] : ";
        cin >> order;
    } while (order == 'y' || order == 'Y');
    
    // displays total price, amount paid and change
    cout << "\nAmount of Price : Rp" << total << endl;
    cout << "Cash : Rp";
    cin >> pay;
    
    // payment validation
    while (pay < total) {
    	cout << "\nSorry, the amount you entered is not enough!\nPlease enter the correct amount : Rp";
    	cin >> pay;
	}
    
    returned = payment(pay, total);
    cout << "\nAmount of Change : Rp" << returned << endl;

    return 0;
}

