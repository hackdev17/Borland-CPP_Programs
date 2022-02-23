/* Program to find sum of the series using constructor */
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
class copy
{
    int x,n;
public:int calculate();
        copy(int xx,int nn)
        {
            x=xx;
            n=nn;
        }
};
int copy::calculate()
{
    int i,term,sum;
    sum=1;
    term=x;
    for(i=0;i<=n;i++)
    {
        sum=sum+term;
        term=term*x;
    }
    return(sum);
}
void main()
{
    int x,n;
    clrscr();
    cout<<"Enter the base and power value"<<endl;
    cin>>x>>n;
    copy obj(x,n);
    copy cpy=obj;
    cout<<"Object 1: sum of the series = "<<obj.calculate()<<endl;
    cout<<"Object 2: sum of the series = "<<cpy.calculate()<<endl;
    getch();
}
