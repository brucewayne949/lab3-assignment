#include <iostream>
using namespace std;
 int main()
 {int n,m,sum=0;
 cout<<"Enter a number: ";
 cin>>n;
 while(n>0)
 {m=n%10;
 sum+=m;
 n=n/10;
 }
 cout<<"\nsum of digits is "<<sum;
 return 0;
 }
