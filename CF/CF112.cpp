#include<bits/stdc++.h>
using namespace std;
string s1,s2;
 int main() {
    cin>>s1>>s2;
    int n = s1.length();
    for(int i=0 ; i < n ;i++){
      if(!islower(s1[i]))s1[i]+=32;
      if(!islower(s2[i]))s2[i]+=32;
    }
    if(s1<s2){
      cout<< -1 << endl;
      return 0;
    }
    printf("%d\n",(s1>s2)?1:0);
}
