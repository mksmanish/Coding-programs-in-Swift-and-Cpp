#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n;
   cin>>n;
   while(n--)
   {

       long long int k;
       cin>>k;
       int i;
       int a[1001];
       int c[1001];
       int b[1001]={0};
       for(i=0;i<k;i++)
       {
           cin>>a[i];
       }
       int h,p=0;
       for(i=0;i<k;i++)
       {
          h=abs(a[i]);
          c[p]=h;
          p++;

       }
       for(i=0;i<k;i++)
       {
           b[c[i]]++;
       }
       int count=0;
       for(i=0;i<1001;i++)
       {
           if(b[i]==2)
           {
               cout<<"-"<<i<<" "<<i<<" ";
               count++;
           }
       }
       if(count==0)
       {
           cout<<"0"<<"\n";
       }

       cout<<"\n";

   }
}
