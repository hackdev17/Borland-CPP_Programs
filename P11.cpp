/* Program to read and write member functions for class student and marks using the concept of single level inheritance */
#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
class student
{
    int regno;
    char name[20];
public:void read()
    {
        cout<<"Enter the register number and the name of the student"<<endl;
        cin>>regno>>name;
    }
    void display()
    {
        cout<<"Register number is "<<regno<<endl;
        cout<<"Name is "<<name<<endl;
    }
};
class marks:public student
{
    int m1,m2,tot;
public:void read1()
    {
        cout<<"Enter the marks of any two subjects of the student"<<endl;
        cin>>m1>>m2;
        tot=m1+m2;
    }
    void display1()
    {
        cout<<"Mark first paper is "<<m1<<endl;
        cout<<"Mark second paper is "<<m2<<endl;
        cout<<"Total is "<<tot<<endl;
    }
};
void main()
{
    marks m;
    clrscr();
    m.read();
    m.read1();
    m.display();
    m.display1();
    getch();
}
