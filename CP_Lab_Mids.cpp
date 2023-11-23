#include <iostream>
using namespace std;

int main() {
	int loyalty_points = 0;
	double conversion_rate = 5.0; // 1 point for every 5 dollars spent
	double discount = 0;
	double purchase_amount;
	char choice;

	do {
		cout << "Enter the total amount of purchase: $";
		cin >> purchase_amount;
		loyalty_points += purchase_amount / conversion_rate;
		cout << "Loyalty points earned: " << loyalty_points << endl;
		cout << "Do you want to redeem points?(Y/N):";
		cin >> choice;
		if (choice == 'y' || choice == 'Y') {
			cout << "Enter the number of points to redeem: ";
			int redeem_points;
			cin >> redeem_points;
			loyalty_points = loyalty_points - redeem_points;
			discount = redeem_points * 0.2; // 2 dollars discount for redemption of 10 points
			cout << "Discount : $" << discount << endl;
		}
		cout << "Do you want to make another purchese?(Y/N): ";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');
	cout << "Thank you for visiting our store!" << endl;
	cout << "Your loyalty points are " << loyalty_points << endl;
	cout << "Your total bill is: $" << purchase_amount - discount << endl;
	return 0;
}