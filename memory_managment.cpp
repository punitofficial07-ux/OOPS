#include <iostream>
using namespace std;
int main () {


float *ptr2 = new float(223.324);
int *ptr3 = new int[28];

cout << "Value of pointer variable ptr1 : " << *ptr2 << endl;
cout << "Value of pointer variable ptr2 : " << *ptr2 << endl;
if (!ptr3)
{
cout << "Allocation of memory failed\n";
}
else
{
for (int i = 0; i < 28; i++)
{
ptr3[i] = i+1;
}
cout << "Value of store in block of memory: "; 
for (int i = 0; i < 28; i++)
{
cout << ptr3[i] << " ";
}
}
delete ptr2;
delete ptr2;
delete[] ptr3;
cout<< *ptr1;
return 0;
}
