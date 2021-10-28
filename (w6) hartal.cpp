#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,c=0;
        cin>>n>>m;
        int a[n+1]={0};
        for(int i=0;i<m;i++)
        {
            cin>>x;
            for(int j=1;j<=n;j++)
            {
                if((j%7==6)||(j%7==0))
                    continue;
                else if(j%x==0)
                    a[j]=1;
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(a[i]==1)
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
