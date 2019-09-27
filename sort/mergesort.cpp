#include <bits/stdc++.h>
using namespace std;

int arr[1005],data[1005] = {0};
void mergesort(int low,int high);
void mergeall(int low,int high,int mid);

int main()
{
    /*** 数据读入 ***/
    int n;
    cin>>n;
    for(int i =0;i<n;i++)
        cin>>arr[i];
    /*** 合并排序 ***/
    mergesort(0,n-1);
    /*** 打印输出 ***/
    for(int i=0;i<n;i++)
        cout<<data[i];
    return 0;
}
void mergesort(int low,int high)
{
    if(low==high)
        return;
    int mid = (low+high)/2;
    if(low<high)
    {
        mergesort(low,mid);
        mergesort(mid+1,high);
        mergeall(low,high,mid);
    }
}
void mergeall(int low,int high,int mid)
{
    for(int i=low;i<high;i++)
    {
        if(low==mid+1)
        {
            data[i]=arr[mid+1];
            mid++;
        }
        else if(mid==high+1)
        {
            data[i]=arr[low];
            low++;
        }
        else if(arr[low]<arr[mid+1])
        {
            data[i]=arr[low];
            low++;
        }
        else
        {
            data[i]=arr[mid+1];
            mid++;
        }
    }
}




