#include<iostream>
using namespace std;
struct Student{
	int roll;
	char name[20];
	float marks;
};
int main(){
	int n;
	cout<<"Enter the number of students: ";
	cin>>n;
	Student s[n];
	for(int i=0;i<n;i++){
		cout<<"Enter details of student "<<i+1<<endl;
		cout<<"Enter roll number: ";
		cin>>s[i].roll;
		cout<<"Enter name: ";
		cin>>s[i].name;
		cout<<"Enter marks: ";
		cin>>s[i].marks;
	}
	for(int i=0;i<n;i++){
		cout<<"Details of student "<<i+1<<endl;
		cout<<"Roll Number: "<<s[i].roll<<endl;
		cout<<"Name: "<<s[i].name<<endl;
		cout<<"Marks: "<<s[i].marks<<endl;
	}
	
}
