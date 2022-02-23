/* Program to find frequency of presence of an element in an array */
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
class frequency
{
    int m[100],i,n,ele,freq;
public:void getdata();
    void findfreq();
    void display();
};
void frequency::getdata()
{
    cout<<"Enter the number of elements of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
        cin>>m[i];
    cout<<"Enter the element to be searched"<<endl;
    cin>>ele;
}
void frequency::findfreq()
{
    freq=0;
    for(i=0;i<n;i++)
        if(m[i]==ele)
            freq++;
}
void frequency::display()
{
    if(freq>0)
        cout<<ele<<" is found "<<freq<<" times";
    else
        cout<<ele<<" is not found ";
};
void main()
{
    frequency f;
    clrscr();
    f.getdata();
    f.findfreq();
    f.display();
    getch();
}
