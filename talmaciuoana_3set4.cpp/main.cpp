#include <iostream>
using namespace std;
int n,d,s=1;
int main()
{
    cout<<"n=";cin>>n;
    for(d=2;d<=n/2;d++)
        if(n%d==0)
        s=s+d;
    if(n<s)
        cout<<"numarl este supraaglomerat";
    else
        cout<<"numarl nu este supraaglomerat";
    return 0;
}
