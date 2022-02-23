/* Program to search an element in an array */
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
class binarysearch
{
    int a[100],i,n,ele,pos;
public:void getdata();
        void search();
        void display();
};
void binarysearch::getdata()
{
    cout<<"Enter the number of elements of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the element to be searched"<<endl;
    cin>>ele;
}
void binarysearch::search()
{
    int b,e,mid;
    pos=-1;
    b=0;
    e=n-1;
    while(b<=e)
    {
        mid=(int) (b=e)/2;
        if(ele==a[mid])
        {
            pos=mid;
            break;
        }
        else
            if(ele<a[mid])
                e=mid-1;
            else
                b=mid+1;
    }
}
void binarysearch::display()
{
    if(pos>=0)
        cout<<ele<<" is found at "<<pos+1<<endl;
    else
        cout<<ele<<" is not found"<<endl;
}
void main()
{
    binarysearch bs;
    clrscr();
    bs.getdata();
    bs.search();
    bs.display();
    getch();
}
