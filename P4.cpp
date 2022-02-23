/* Program to sort elements of an array in ascending order using insertion sort */
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
class sorting
{
    int a[100],i,j,n;
public:void getdata();
        void sort();
        void display();
};
void sorting::getdata()
{
    cout<<"Enter the number of elements of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
}
void sorting::sort()
{
    int t,j;
    for(i=1;i<n;i++)
    {
        j=i;
        while(j>=1)
        {
            if(a[j]<a[j-1])
            {
                t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;
                j--;
            }
        }
    }
}
void sorting::display()
{
    cout<<"The elements of the array in the sorted order are"<<endl;
    for(i=0;i<n;i++)
        cout<<a[i]<<setw(5);
}
void main()
{
    sorting s;
    clrscr();
    s.getdata();
    s.sort();
    s.display();
    getch();
}
