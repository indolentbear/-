/*** 两层循环，遍历 ***/
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
    for(int i=0;i<n;i++)
    {
        int accadd=arr[i];
        for(int j=i+1;j<n;j++)
        {
            accadd += arr[j];
            if(accadd>maxnum)
                maxnum = accadd;
        }
    }

    cout<<maxnum;
    return 0;
}
