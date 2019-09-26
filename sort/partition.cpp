#include <bits/stdc++.h>
using namespace std;

int n;
int arr[1000],data[1000] = {0};


int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    my_partition(low,high,n);
    return 0;
}

void my_partition(int low, int high, int num)
{
    if(low == high)
        return;

    int i = low+1;
    int j = high;
    while(i<=j)
    {
        while(arr[i]<=a[low] && i<=j)
            i++;
        while(arr[j]>a[low])
            j--;

        if(i<j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    swap(data[low],data[i-1])
}
