/*** 三层循环，遍历 ***/
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
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        {
            int accadd = 0;
            for(int k=i;k<j;k++)
            {
                accadd += arr[k];
                if(accadd>maxnum)
                    maxnum = accadd;
            }
        }

    cout<<maxnum;
    return 0;
}

