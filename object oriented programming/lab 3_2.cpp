#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
int a,b;
cout<<"enter a numbers";
cin>>a;
cout<<"enter a numbers";
cin>>b;
swap(a,b);
}
void swap(int &a,int &b)
{
    int c;
c=a;
a=b;
b=c;
cout<<a;
cout<<b;
}

