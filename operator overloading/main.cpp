#include<iostream>
using namespace std;
class student
{
int a,b;
public:
void set()
{
cout<<"enter real&imag\n";
cin>>a>>b;
}
friend student operator+(student,student);
void display()
{
cout<<"the sum is "<<a<<"+i"<<b;
    cout<<"\n";
}
};
student operator+(student s1,student s2)
{
student temp;
temp.a=s1.a+s2.b;
temp.b=s1.b+s2.b;
return(temp);
}
int main()
{
student s1,s2;
s1.set();
s2.set();
s1=s1+s2;
s1.display();
return(0);
}
