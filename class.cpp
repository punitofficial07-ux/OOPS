#include<iostream>
using namespace std;
class Student{
	private :
		int age;
		char name[20];
		float marks;
	public:
		Student(){
			cout<<"constructor called"<<endl;
		};

		void input(){
			cout<<"enter age :";
			cin>>age;
			cout<<"name :";
			cin>>name;
			cout<<"marks :";
			cin>>marks;
		}
		void output(){
			cout<<"Age :"<<age<<endl;
			cout<<"Name :"<<name<<endl;
			cout<<"Marks :"<<marks<<endl;
		}
				
};
int main(){
	Student S1,S2;

	S1.input();
	S1.output();

	S2.input();
	S2.output();
};