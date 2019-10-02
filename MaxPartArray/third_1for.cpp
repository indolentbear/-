/*** 单循环，查找以i为起始的最大
值，当其小于零时重新开始计数 ***/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int maxnum=0;
    int accadd=0;
    for(int i=0;i<n-1;i++)
    {
        accadd += arr[i];
        if(accadd>maxnum)
            maxnum = accadd;
        else if(accadd<0)
            accadd = 0;
    }

    cout<<maxnum;
    return 0;
}

