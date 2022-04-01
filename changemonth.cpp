#include<bits/stdc++.h>
using namespace std;
int main()
{
 int dd,mm,yyyy;
 cin>>dd;
 cin>>mm;
 cin>>yyyy;
 int ne;
 cin>>ne;
 int mm2[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
 int i,k=0,p,a;
 for(i=0;i<mm;i++)
  k=k+mm2[i];
 k=k+dd+ne;
 if(k<=365)
 {
  for(i=0;i<13;i++)
  {
   p=k-mm2[i];
   if(p<=mm2[i+1])
   {
    a=i+1;
    break;
   }
   else
    k=p;
  }
  cout<<yyyy<<a<<p<<endl;
 }
 else
 {
  k=k-365;
   for(i=0;i<13;i++)
    {
     p=k-mm2[i];
     if(p<=mm2[i+1])
     {
       a=i+1;
       break;
     }
     else
      k=p;
    }
  cout<<yyyy+1<<a<<p<<endl;
 }
 if(a==2 || a==3 || a==5 || a==7 || a==11){
  cout<<"Yes"<<ne;
 }
}