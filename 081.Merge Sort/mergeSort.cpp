// Program to implement merge sort algorithm.
#include<iostream>
using namespace std;

void merge(int arr[],int f,int mid,int l)
{
       int n1 = mid-f+1;
       int n2 = l-mid;

       int a[n1];
       int b[n2];

       for(int i=0;i<n1;i++)
       {
            a[i]=arr[f+i];
       }

       for(int i=0;i<n2;i++)
       {
            b[i]=arr[mid+1+i];
       }

       int i=0,j=0,k=f;

       while(i<n1 && j<n2)
       {
            if(a[i]<b[j])
            {
                arr[k]=a[i];
                k++;i++;
            }
            else
            {
                arr[k]=b[j];
                k++;j++;
            }
       }

       while(i<n1)
       {
            arr[k]=a[i];
            k++;i++;
       }

       while(j<n2)
       {
            arr[k]=b[j];
            k++;j++;
       }
}

void mergeSort(int arr[],int f,int l)
{
    if(f<l)
    {
        int mid = (f+l)/2;
        mergeSort(arr,f,mid);
        mergeSort(arr,mid+1,l);
        merge(arr,f,mid,l);
    }
}

int main()
{
    int a[5]={4,9,2,4,1};
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    mergeSort(a,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
