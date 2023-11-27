// Author    Angel Zaldivar
// Goal      Giving the best possible change amount
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    // Variable declerations

    int change_amount, total_change;

    //input

    cout << "Enter change amount(less then one euro): ";
    cin >> change_amount;
    total_change = 0;

    //process - output

    if (change_amount >= 100)
        cout << "It must be less then a euro or 100 cents!";
    else {
        if ((change_amount / 50) > .99)
        {
            cout << "50 cents coins ... " << round(change_amount / 50) << endl;
            total_change = round(change_amount / 50);
            change_amount -= 50;
        }
        else {
            cout << "50 cents coins ... 0" << endl;
            total_change = 0;
        }
        if ((change_amount / 20) > .96)
        {
            cout << "20 cents coins ... " << round(change_amount / 20) << endl;
            total_change += round(change_amount / 20);
            change_amount -= 20 * round(change_amount / 20);
        }
        else {
            cout << "20 cents coins ... 0" << endl;
            change_amount -= 20 * round(change_amount / 20);
        }
        if ((change_amount / 10) > .99)
        {
            cout << "10 cents coins ... " << round(change_amount / 10) << endl;
            total_change += round(change_amount / 10);
            change_amount -= 10 * round(change_amount / 10);
        }
        else {
            cout << "10 cents coins ... 0" << endl;
            change_amount -= 10 * round(change_amount / 10);
        }
        if ((change_amount / 5) > .99)
        {
            cout << "5 cents coins ... " << round(change_amount / 5) << endl;
            total_change += round(change_amount / 5);
            change_amount -= 5 * round(change_amount / 5);
        }
        else {
            cout << "5 cents coins ... 0" << endl;
            change_amount -= 5 * round(change_amount / 5);
        }
        if ((change_amount / 2) > .99)
        {
            cout << "2 cents coins ... " << round(change_amount / 2) << endl;
            total_change += round(change_amount / 2);
            change_amount -= 2 * round(change_amount / 2);
        }
        else {
            cout << "2 cent coins ... 0" << endl;
            change_amount -= 2 * round(change_amount / 2);
        }
        if (change_amount == 1)
        {
            cout << "1 cents coins ... " << change_amount << endl;
            total_change += 1;
        }
        else {
            cout << "0 cents coins ... " << change_amount << endl;
        }
        cout << "total change consists of " << total_change << endl;
    }
}
