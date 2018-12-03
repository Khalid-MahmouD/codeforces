#include<bits/stdc++.h>
using namespace std;
int n,a[1005],s;
int main() {
    cin>>n;
    for(int i=0 ; i<n ; i++){
      for(int j=0 ; j<3 ; j++){
        int x;
        cin >> x;
        a[i]+=x;
      }
    }
    for(int i=0 ; i<n ;i++){
      (a[i]>=2)?s++:s=s;
    }
    cout<<s<<endl;
  return 0;
}
