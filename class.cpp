#include<iostream>
using namespace std;
class Student{
	
	public:
		int age;
		char name[50];
		float marks;
		Student(){
			cout<<"constructor called"<<endl;
		};
	public:	
		void input(){
			cout<<"enter age: "<<endl;
			cin>>age;
			cout<<"name: "<<endl;
			cin>>name;
			cout<<"marks: "<<endl;
			cin>>marks;
		}
		void output(){
			cout<<age<<" " <<name<<" "<<marks<<endl;
		}
				
};
int main(){
	Student S1,S2;
	
	S1.input();
	S1.output();

	S2.input();
	S2.output();
};