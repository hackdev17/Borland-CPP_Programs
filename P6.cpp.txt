/* Program to calculate Simple Interest */
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class simpleinterest
{
    float p,t,r,si;
public:void getdata();
        void  interest();
        void dispaly();
};
void simpleinterest::getdata()
{
    cout<<"Enter the Principle amount, Time and Rate of interest"<<endl;
    cin>>p>>t>>r;
}
void simpleinterest::interest()
{
    si=(p*t*r)/100;
}
void simpleinterest::dispaly()
{
    cout<<"Principle amount = "<<p<<endl;
    cout<<"Time = "<<t<<endl;
    cout<<"Rate of interest = "<<r<<endl;
    cout<<"Simple Interest = "<<si<<endl;
}
void main()
{
    simpleinterest s;
    clrscr();
    s.getdata();
    s.interest();
    s.dispaly();
    getch();
}
