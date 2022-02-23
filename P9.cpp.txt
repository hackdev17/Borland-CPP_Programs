/* Program to find a cube of a number using inline function */
#include<conio.h>
#include<iomanip.h>
#include<iostream.h>
inline int cube(int a)
{
    return(a*a*a);
}
void main()
{
    int x,y;
    clrscr();
    cout<<"Enter a number"<<endl;
    cin>>x;
    y=cube(x);
    cout<<"The Cube of the number is "<<y<<endl;
    getch();
}
