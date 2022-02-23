/* Program to find roots of Quadratic equation */
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<math.h>
#include<stdlib.h>
#include<process.h>
class quadratic
{
    double a,b,c,d,r1,r2;
public:void getdata();
        void compute();
        void display();
};
void quadratic::getdata()
{
    cout<<"Enter the coefficients of the Quadratic equation"<<endl;
    cin>>a>>b>>c;
}
void quadratic::compute()
{
    d=(b*b)-(4*a*c);
    if(d==0)
    {
        cout<<"The roots are equal"<<endl;
        r1=-b/(2*a);
        r2=r1;
    }
    else
        if(d>0)
        {
            cout<<"The roots are real"<<endl;
            r1=(-b+sqrt(d))/(2*a);
            r2=(-b-sqrt(d))/(2*a);
        }
        else
        {
            cout<<"The roots are imaginary"<<endl;
            exit(0);
        }
}
void quadratic::display()
{
    cout<<"root 1 = "<<r1<<endl;
    cout<<"root 2 = "<<r2<<endl;
}
void main()
{
    quadratic q;
    clrscr();
    q.getdata();
    q.compute();
    q.display();
    getch();
}
