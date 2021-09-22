#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int m;
    cin>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        arr[i]=0;
    }
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        for(int i=a-1;i<b;i++){
            arr[i]+=1;
        }
    }
    int k;
    cin>>k;
    while(k--){
        int t;
    cin>>t;
        int ans=0;
        for(int i=0;i<m;i++){
            if(arr[i]>=t){
                ans+=1;
            }
    }
        cout<<ans<<"\n";
    }
 
    return 0;
}
