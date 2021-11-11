
     
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
 
int main() {
    int t;cin>>t;
    while(t--)
    {
        long long a,b,c=0,temp;
        cin>>a>>b;
        while(b!=0)
        {
            temp=abs(a-b);
            a=b;
            b=temp;
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
