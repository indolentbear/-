/*** 动态规划 ***/
#include <bits/stdc++.h>
using namespace std;

int maxsumrec(int a[],int ilow,int ihigh);

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int maxsum = maxsumrec(arr,0,n-1);
    cout<<maxsum;
    return 0;
}
int maxsumrec(int a[],int ilow,int ihigh)
{
    if(ilow==ihigh)
        if(a[ilow]>0)
            return a[ilow];
        else
            return 0;

    int mid = (ilow + ihigh)/2;
    int leftmaxsum = maxsumrec(a,ilow,mid);
    int rightmaxsum = maxsumrec(a,mid+1,ihigh);

    int mid2lsum=0,mid2lcsum=0;
    
    int mid2rsum=0,mid2rcsum=0;

    for(int i=mid;i>=ilow;i--)
    {
        mid2lcsum += a[i];
        if(mid2lcsum > mid2lsum)
            mid2lsum = mid2lcsum;
    }

    for(int i=mid+1;i<=ihigh;i++)
    {
        mid2rcsum += a[i];
        if(mid2rcsum > mid2rsum)
            mid2rsum = mid2rcsum;
    }
    return max( max(leftmaxsum, rightmaxsum),
	        mid2lsum + mid2rsum );//
}
