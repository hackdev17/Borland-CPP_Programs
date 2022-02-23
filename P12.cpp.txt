/* Program to read display and data by using the concept of pointer to objects */
#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
class student
{
    int regno;
    char name[20];
    float fees;
public:void read();
    void display();
};
void student::read()
{
    cout<<"Enter the Name, Register number and the Fees of the student"<<endl;
    cin>>name>>regno>>fees;
}
void student::display()
{
    cout<<"Name is "<<name<<endl;
    cout<<"Register number is "<<regno<<endl;
    cout<<"Fees are "<<fees<<endl;
}
void main()
{
    student s,*sptr;
    sptr=&s;
    clrscr();
    sptr->read();
    sptr->display();
    getch();
}
