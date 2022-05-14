#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    char middleInitial = 'a';
    int age = 0;
    int feeAmount = 0;
    float bankAccount = 0.0;
    double deposit = 0.0;
    bool overTwentyOne = false;
    string fName = "", lName = "",fullName = "";

    const float depositingFee = 0.3;

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
    
    /*
    Depositing money below;
    */
    cout << "How much money would you like to deposit?\n";
    cin >> deposit;
    feeAmount = deposit / 100;
    bankAccount = (bankAccount + deposit) - (depositingFee * (floor(feeAmount)));
    cout << "Your bank account is now: $" << bankAccount << ".\n";
}
