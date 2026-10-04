#include<iostream>
using namespace std;
int main()
{
    float m1,m2,m3,m4,m5;
    float total,percentage;
    char grade;

    cout<<"\nEnter The marks of (0-100) sub 1:";
    cin>>m1;
    cout<<"\nEnter The marks of (0-100) sub 2:";
    cin>>m2;
    cout<<"\nEnter The marks of (0-100) sub 3:";
    cin>>m3;
    cout<<"\nEnter The marks of (0-100) sub 4:";
    cin>>m4;
    cout<<"\nEnter The marks of (0-100) sub 5:";
    cin>>m5;
    total=m1+m2+m3+m4+m5;
    cout<<"\nThe total="<<total;
    percentage=total/5;
    cout<<"\nThe Percentage="<<percentage;


    if(percentage>=90)
    {
        cout<<"\ngrade=A";
    }
    else if(percentage>=80)
    {
        cout<<"\ngrade=B";
    }
    else if(percentage>=70)
    {
        cout<<"\ngrade=C";
    }
    else if(percentage>=60)
    {
        cout<<"\ngrade=D";
    }
    else if(percentage>=50)
    {
        cout<<"\ngrade=E";
    }
    else if(percentage>=40)
    {
        cout<<"\ngrade=F";
    }
    else
    {
        cout<<"\nInvalid Input";
    }
    cout<<"\nYou have got "<<percentage<<" percentage";
    if(percentage>=35)
    {
        cout<<"\npass\n";
    }
    else
    {
        cout<<"\nFail\n";
    }
    return 0;
    
}