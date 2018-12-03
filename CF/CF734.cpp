#include<bits/stdc++.h>
using namespace std;
int n,t1,t2;string s;
int main(){
  scanf("%d\n",&n);
  cin>>s;
  for(int i=0 ; i<s.length() ; i++){
    if(s[i]=='A')t1++;
    else t2++;
  }
  if(t1==t2){
    cout<<"Friendship"<<endl;
    return 0;
  }
  printf("%s\n",t1>t2?"Anton":"Danik");
}
