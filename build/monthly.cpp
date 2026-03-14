#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float income;

    cout << "Enter monthly income: ";
    cin >> income;

    float rent, utilities;

    cout << "Enter rent expense: ";
    cin >> rent;

    cout << "Enter utilities expense: ";
    cin >> utilities;

    float fixed_total = rent + utilities;

    float variable_total = 0;
    int num;

    cout << "Number of variable expenses: ";
    cin >> num;

    for (int i = 0; i < num; i++) {
        float expense;
        cout << "Enter variable expense: ";
        cin >> expense;
        variable_total += expense;
    }

    float total_expenses = fixed_total + variable_total;
    float remaining = income - total_expenses;

    if (remaining > 0) {
        cout << "Remaining budget: " << remaining << endl;
    } else {
        cout << "You exceeded your budget by " << fabs(remaining) << endl;
    }

    cout << "\nPress Enter to exit...";
    cin.ignore();
    cin.get();

    return 0;
}
