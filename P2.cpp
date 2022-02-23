/* Program to insert an element at a given position in an array */
#include<conio.h>
#include<iomanip.h>
#include<iostream.h>
#include<stdlib.h>
class insertion
{
private: int a[100],i,n,ele,p;
public: void getdata();
        void insert();
        void display();
};
void insertion::getdata()
{
    cout<<"Enter the number of elements of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the element to be inserted"<<endl;
    cin>>ele;
    cout<<"Enter the position of the element to be inserted"<<endl;
    cin>>p;
}
void insertion::insert()
{
    if(p>n)
        {
            cout<<"Invalid position "<<p;
            exit(0);
        }
    else
        {
            for(i=n-1;i>=p;i--)
                a[i+1]=a[i];
            a[p]=ele;
            n=n+1;
            cout<<ele<<" is inserted at position "<<p<<endl;
        }
}
void insertion::display()
{
    cout<<"The array elements after insertion are "<<endl;
             for(i=0;i<n;i++)
                 cout<<a[i]<<setw(5);
}
void main()
{
    insertion in;
    clrscr();
    in.getdata();
    in.insert();
    in.display();
    getch();
}
