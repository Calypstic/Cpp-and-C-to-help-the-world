#include<ctype.h>
#include<cstdlib>
#include <iostream>
#include<ctime>
using namespace std;
int size=100;
void merge(int *,int, int , int );
void mergesort(int *a, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,high,mid);
    }
    return;
}
void merge(int *a, int low, int high, int mid)
{
    int i, j, k, c[size];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        a[i] = c[i];
    }
}
int main()
{
    int a[size], i, b[20];
    for(i=0;i<size;i++)
    {
        a[i]=rand();
    }
    cout<<"before sorting"<<endl;
    for(i=0;i<size;i++)
        cout<<a[i];

float t1=(float)clock();
    mergesort(a, 0, size-1);float t2=(float)clock();

    cout<<"sorted array\n";
    for (i = 0;i < size; i++)
    {
        cout<<a[i]<<endl;
    }
    float z;
    z=float)t2-t1;
    cout<<"time taken for average case"<<z;

}
