#include<iostream>
using namespace std;
class BankAccount{
    private :
        double balance;
    public :
        void deposit(double amount){
            balance = balance + amount;
        }
        double getBalance(){
            return balance;
        }
};
int main(){
    BankAccount b1;
    b1.deposit(2000);
    b1.deposit(5000);
    cout<<b1.getBalance();
    return 0;
}