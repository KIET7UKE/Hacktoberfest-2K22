#include <iostream>
using namespace std;

int main() {
  int tx;
  cin>>tx;
  while(tx--) 
  {
      int count1=0,count0=0;
       int nx;
      cin>>nx;
       string str;
       cin>>str;
       for(int i=0;i<nx;i++) 
       {
           if(str[i]=='0')
             count0++;
           else if(str[i]=='1')
             count1++;
             
       }
      if(count1==count0)
       cout<<count0+count1<<endl;
       else
       {
        int minn=min(count1,count0);
      cout<<minn+(minn+1)<<endl;
       }
  }
  return 0;
}