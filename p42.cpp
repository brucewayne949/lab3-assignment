#include <iostream>
using namespace std;

int main()
{
  int POW=1, EXP, BASE;
  cout<<"\nPROGRAM TO FIND POWER OF ANY NUMBER USING FOR LOOP";
  cout<<"\nENTER THE BASE NUMBER AND EXPONENT: ";
  cin>>BASE>>EXP;
  for(int i=1;i<=EXP;i++)
  {
   POW*=BASE;
  }
  cout<<"\n \nThe power of "<<BASE<<" raised to "<<EXP<<" is "<<POW;
  return 0;
}
