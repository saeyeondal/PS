#include <iostream>
using namespace std;

int main(){
 
 
 string s;
 cin >> s;
 int count = 0;
 for(int i=0;i<s.length();i++){
  if(s[i]=='c'){
   if((s[i+1]=='=')||(s[i+1]=='-')){
    i++;
    count++;
    continue;
   }
  }
  else if(s[i]=='d'){
   if(s[i+1]=='z')
    if(s[i+2]=='='){
     i += 2;
     count++;
     continue;
    }
   if(s[i+1]=='-'){
    i++;
    count++;
    continue;
   }
  }
  else if(s[i]=='l'){
   if((s[i+1]=='j')){
    i++;
    count++;
    continue;
   }
  }
  else if(s[i]=='n'){
   if((s[i+1]=='j')){
    i++;
    count++;
    continue;
   }
  }
  else if(s[i]=='s'){
   if((s[i+1]=='=')){
    i++;
    count++;
    continue;
   }
  }
  else if(s[i]=='z'){
   if((s[i+1]=='=')){
    i++;
    count++;
    continue;
   }
  }
  count++;
 }
 
 cout << count++ ;
 
 
 return 0;
}
