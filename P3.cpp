/* Program to delete an element from a given position in an array */
#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
#include<stdlib.h>
class deletion
{
    int a[100],i,n,ele,p;
public:void getdata();
        void remove();
        void display();
};
void deletion::getdata()
{
    cout<<"Enter the number of elements of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the position of the element to be removed"<<endl;
    cin>>p;
}
void deletion::remove()
{
    if(p>n-1)
    {
        cout<<"Inavalid position "<<p;
        exit(0);
    }
    else
    {
        ele=a[p];
        for(i=p;i<n;i++)
            a[i]=a[i+1];
        n=n-1;
        cout<<ele<<" is successfully removed from position "<<p<<endl;
    }
}
void deletion::display()
{
    cout<<"The elements of the array after deletion are "<<endl;
    for(i=0;i<n;i++)
        cout<<a[i]<<setw(5);
}
void main()
{
    deletion d;
    clrscr();
    d.getdata();
    d.remove();
    d.display();
    getch();
}
