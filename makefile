#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
 int num1, num2;
 cout<<"Enter two integers:";
 cin>>num1>>num2;
 
 if(num1%num2==0)
 cout<<num1<<" is a multiple of the "<<num2<<endl;
 
 if(num1%num2!=0)
 cout<<num1<<" is not a multiple of the "<<num2<<endl;
 
 return 0;
}