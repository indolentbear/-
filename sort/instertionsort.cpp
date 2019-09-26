#include <bits/stdc++.h>
using namespace std;

int arr[1000],data[1000]={0};
int n;
void mergesort(int low, int high);
void mergetoget(int low, int high, int mid);

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    mergesort(0,n-1);
    for(int i=0;i<n;i++)
        cout<<data[i];
    return 0;
}
void mergesort(int low, int high)
{
    if(high ==low)
        return;
    int mid = (low + high)/2;

    if(high > low)
    {
        mergesort(low,mid);
        mergesort(mid+1,high);
        mergetoget(low,high,mid);
    }
}
void mergetoget(int low, int high, int mid)
{
    int i = low;
    int j = mid+1;
    for(int k=0;k<=high-low;k++)
    {
        if(i==mid+1)
        {
            data[k] = arr[j];
            j++;
        }
        else if(j==high+1)
        {
            data[k] = arr[i];
            i++;
        }
        else if(arr[i]<arr[j])
        {
            data[k] = arr[i];
            i++;
        }
        else
        {
            data[k] = arr[j];
            j++;
        }
    }
    for(int k=0,l=low;l<=high;k++,l++)
    {
        arr[l] = data[k];
    }
}
