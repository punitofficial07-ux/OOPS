#include<iostream>
using namespace std;
class Payment {
    public :
    virtual void pay(){
        cout<<"Payment is Processing...."<<endl;
    }
};
class GPay : public Payment{
    public :
    void pay() override{
        cout<<"The Payment is pay with GPay"<<endl;
    }
};
class CreditCard : public Payment{
    public :
    void pay() override{
        cout<<"The Payment is pay with Credit Card"<<endl;
    }
};
int main(){
    Payment base;
    Payment* p;
    p = &base;
    p->pay();
    GPay g;
    p = &g;
    p->pay();
    CreditCard c;
    p = &c;
    p->pay();
    return 0;
}