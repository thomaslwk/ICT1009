#include <cstring>
#include <iostream> 

using namespace std; 

class Account {
    private: 
        // int acc = 2;
        int accBalance[2];
        // int withdrawamt[2];
    public: 
        Account(int[], int[], int);
        int debit(int, int, int);
        void setdebit(int, int);
        int getdebit(int);
        int credit(int, int);
        void getBalance(int);
};

Account::Account(int accbal[], 
int accdeposit[], int ACC) {
    int withdrawamt[ACC], accBal_arr[ACC];
    memset(accBal_arr, 0, ACC*sizeof(ACC));
    memset(withdrawamt, 0, ACC*sizeof(ACC));
    //-- Loop to input values. 
    for(int i=0; i<ACC; i++){
        //-- Credit depoit into user account. 
        accbal[i] = credit(accbal[i], 0);
        cout << "\nEnter withdraw amount (int) from Account " << i+1 << ": ";
        cin >> withdrawamt[i];
        accbal[i] = debit(accbal[i], i, withdrawamt[i]);
        cout << "\nAttempting to subtract " << withdrawamt[i] << " from Account " << i+1 << " balance";
        getBalance(withdrawamt[i]);
    }
}

int Account::credit(int accbal, int accdeposit){
    accbal += accdeposit;
    return accbal;
}
void Account::getBalance(int withdrawamt){
    for(int i=0; i<2; i++){
        cout << "\nAccount " << i+1 << " Balance : " << getdebit(i);
    }
}

int Account::debit(int accbal, int ACC, int withdrawamt){
    if(accbal >= 0){
        accbal -= withdrawamt;
        setdebit(accbal, ACC);
    }
    else{
        cout << "\nError: debit amount exceeds account balance.";
    }
    return accbal;
}
void Account::setdebit(int accbal, int ACC){
    this->accBalance[ACC] = accbal;
}
int Account::getdebit(int ACC){
    return accBalance[ACC];
}

int main(){
    const int ACC = 2;
    int accbal[ACC], accdeposit[ACC];
    memset(accbal, 0, ACC*sizeof(int));
    memset(accdeposit, 0, ACC*sizeof(int));
    Account user(accbal, accdeposit, ACC);
    for(int i=0; i<ACC; i++){
        cout << "\nAccount " << (i+1) << " Balance :";
        cin >> accbal[i];
        user.setdebit(accbal[0], 0);
    }
    return 0;
}