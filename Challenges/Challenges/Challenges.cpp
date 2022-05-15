#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

int feeAmount = 0;
int months = 0;
float bankAccount = 0.0;
double deposit = 0.0, withdraw = 0.0, interest = 0.006;
double gain = 0.0, total = 0.0;

const double depositingFee = 0.3;

float RoundHundreth(float total)
{
    float money = floor(total * 100 + .5) / 100;
    return money;
}


void Deposit() {
    cout << "How much money would you like to deposit?\n";
    cin >> deposit;
    feeAmount = deposit / 100;
    bankAccount = (bankAccount + deposit) - (depositingFee * (floor(feeAmount)));
    cout << "Your bank account is now: $" << bankAccount << ".\n";
}

void Withdraw() {
    cout << "How much money would you like to withdraw?\n";
    cin >> withdraw;
    bankAccount = bankAccount - withdraw;
    cout << "Your bank account is now: $" << bankAccount << ".\n";    
}

void Wait() {
    cout << "How many months would you like to wait?\n";
    cin >> months;
    for (int i = 0; i < months; i++)
    {
        total = bankAccount * interest;
        gain += RoundHundreth(total);
        bankAccount += RoundHundreth(total);
    }
    cout << "Your bank account is now: $" << bankAccount << ". You made $" << gain << fixed << setprecision(2) << " from interest.\n";
    gain = 0;
}

int main()
{
    int age = 0;
    bool running = true;
    char middleInitial = 'a';
    string fName = "", lName = "",fullName = "";
    string input = "";

    cout << "Hello, what is your first name, middle initial and last name\n";
    cin >> fName >> middleInitial >> lName;
    fullName = fName + middleInitial + lName;

    cout << "How old are you?\n";
    cin >> age;
    if (age == 21 || age > 21)
    {
        cout << "You are old enough to have a bank account.\n";
    }
    else if (age <= 20)
    {
        cout << "You are not old enough to make a bank account.\n";
    }
    else
    {
        cout << "Please provide and age.\n";
    }

    cout << "Your account username is " << fullName << ".\n";
    lName[0] = 'J';
    cout << "Your account password is " << fName.length() << fName[2] << lName + ".\n";
    
    while (running == true) {
        cout << "What would you like to do?\nDeposit | Withdraw | Wait | Quit\n";
        cin >> input;
        if (input == "Deposit")
        {
            Deposit();
        }
        else if (input == "Withdraw")
        {
            Withdraw();
        }
        else if (input == "Wait")
        {
            Wait();
        }
        else if (input == "Quit")
        {
            running = false;
        }
        else
        {
            cout << "Please input a valid command.\n";
        }
    }
    return 0;
}
