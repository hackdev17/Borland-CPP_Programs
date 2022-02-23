/* Area of the Square, Rectangle & Triangle by function overloading */
#include<iomanip.h>
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<process.h>
class funoverload
{
    float s;
public:double area(double a)
    {
        return(a*a);
    }
    double area(double a,double b)
    {
        return(a*b);
    }
    double area(double a,double b,double c)
    {
        s=(a+b+c)/2.0;
        return(sqrt(s*(s-a)*(s-b)*(s-c)));
    }
};
void main()
{
    funoverload f;
    double x,y,z;
    int choice;
    clrscr();
    cout<<"Enter the choice of the user"<<endl;
    cin>>choice;
    if(choice==1)
        {
            cout<<"Enter a side of the Square"<<endl;
            cin>>x;
            cout<<"Area of Square is = "<<f.area(x);
        }
    else
        if(choice==2)
        {
            cout<<"Enter 2 sides of the Rectangle"<<endl;
            cin>>x>>y;
            cout<<"Area of Rectangle is = "<<f.area(x,y);
        }
    else
        if(choice==3)
        {
            cout<<"Enter 3 sides of the Triangle"<<endl;
            cin>>x>>y>>z;
            cout<<"Area of Triangle is = "<<f.area(x,y,z);
        }
    else
        {
            cout<<"Invalid Choice"<<endl;
            exit(0);
        }
getch();
}
