#include <iostream>
#include <iomanip>
using namespace std;


void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){

    double balance = 100.69;
    int choice = 0;
    
    do{
    cout<< "*********************\n";
    cout<< "What can we help you? \n";
    cout<< "*********************\n";
    cout<< "1. Show Balance\n";
    cout<< "2. Deposit Money\n";
    cout<< "3. Withdraw Money\n";
    cout<< "4. Exit\n";
    cout<< "Enter your choice: ";
    cin>> choice;

    switch (choice)
    {
    case 1: showBalance(balance);
        break;
    case 2: balance += deposit();
        showBalance(balance);
        break;
    case 3: balance -= withdraw(balance);
        showBalance(balance);
        break;
    case 4: cout<< "Thanks for visiting!\n ";
        break;
    default: cout<< "Invalid choice\n";
        break;
    }
    }while(choice != 4);

    return 0;
}
void showBalance(double balance){
    cout<< "Your Balance is: $" << setprecision(2) << fixed << balance << '\n';
}
double deposit(){

    double amount = 0;
    cout<< "Enter amount to be deposited: ";
    cin>> amount;

    if(amount > 0){
        return amount ;
    }else{
        cout<< "That's not an invalid amount/n";
    }

    return 0;
}

double withdraw(double balance){

    double amount = 0;

    cout<< "Enter amount to be withdraw: ";
    cin>> amount;

    if (amount > balance ){
        cout<< "Insufficient funds\n";
        return 0;
    }

    return amount;
}
