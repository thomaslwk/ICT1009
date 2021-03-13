#include <iostream> 

class Account {
    private: 
        int account_balance; 
    public: 
        Account(int);
        int debit(int);
        void credit(int);
        int getBalance();
};

Account::Account(int acc_bal){
    account_balance = acc_bal;
}

void Account::credit(int acc_bal){
    this->account_balance += acc_bal;
}

int Account::debit(int acc_withdraw){
    int new_balance = account_balance - acc_withdraw;
    if(new_balance > 0) {
        account_balance = new_balance;
    }
    else {
        std::cout << "\nError: Debit amount exceeds account balance.";
    }
    return 1;
}

int Account::getBalance(){
    return this->account_balance;
}

void DisplayBalance(Account user1, Account user2){
    std::cout << "\nAccount 1 Balance: " << user1.getBalance(); 
    std::cout << "\nAccount 2 Balance: " << user2.getBalance();
}

int main() {
    int withdrawamt;
    Account user1(600);
    Account user2(100);
    DisplayBalance(user1,user2);

    std::cout << "\nEnter withdraw amount (int) from Account 1: ";
    std::cin >> withdrawamt;
    std::cout << "\nAttempting to subtract " << withdrawamt << " from Account 1 balance "; 
    user1.debit(withdrawamt);
    DisplayBalance(user1,user2);

    std::cout << "\nEnter withdraw amount (int) from Account 2: ";
    std::cin >> withdrawamt;
    std::cout << "\nAttempting to subtract " << withdrawamt << " from Account 2 balance "; 
    user2.debit(withdrawamt);
    DisplayBalance(user1,user2); 
}