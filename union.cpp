#include<iostream>
using namespace std;
union Employee{
    int id;
    char name[20];
    float salary;
};
int main(){
    int n;
    cout<<"Enter the number of employees: ";
    cin>>n;
    Employee e[n];
    for(int i=0;i<n;i++){
        cout<<"Enter details of employee "<<i+1<<endl;
        cout<<"Enter Employee ID: ";
        cin>>e[i].id;
        cout<<"Employee ID: "<<e[i].id<<endl;
        cout<<"Enter Employee Name: ";
        cin>>e[i].name;
        cout<<"Employee Name: "<<e[i].name<<endl;
        cout<<"Enter Employee Salary: ";
        cin>>e[i].salary;
        cout<<"Employee Salary: "<<e[i].salary<<endl;
    }
}