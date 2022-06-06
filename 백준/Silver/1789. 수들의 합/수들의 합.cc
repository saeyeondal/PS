#include <iostream>
 using namespace std;
 
int main(){
   long long S, sum=0, i;
   int cnt=0;
   cin>>S;
   for(i=1; ; i++){
      sum+=i;
      cnt++;
      if(sum>S) {
         cnt--; break;
     }
   }
   cout<<cnt;
   return 0;
}