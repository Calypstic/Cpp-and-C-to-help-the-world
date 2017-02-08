#include<iostream>
#include<cstdlib>
#include<fstream>
#include<ctime>
#define C_P_S ((clock_t)10000)

void binary(int[],int,int);
float t=clock();
using namespace std;
int size=15000;
int main()
{ 
int a[size],i,j,key;
  for(i=0;i<size;i++)
  a[i]=rand();
  cout<<"unsorted array is: "<<endl;
  for(i=0;i<size;i++)
    cout<<a[i]<<"";
   
    t=clock();
int temp;
 for(i=1;i<size;++i)
    {
        for(j=0;j<(size-i);++j)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }
    
    cout<<endl<<endl<<endl<<"Array after bubble sort:"<<endl;
    for(i=0;i<size;++i)
        cout<<" "<<a[i];
        
        
        int first,last,mid;
        
        first=a[0];
        last=a[size-1];
        mid=a[(size/2)];
        cout<<endl<<endl;
    //calling the binary function now
    //best case
    float t2,t3,t4,t5,t6,x,b;
    t2=(float)clock();
    cout<<"searching middle element for best case"<<endl<<endl;
    binary(a,size,mid);
    t3=(float)clock();
   b=(t3-t2/C_P_S);
    cout<<"the time take is "<<b<<endl<<endl<<endl;
    //worst case
     t4=(float)clock();
    cout<<"searching middle element for worst case"<<endl<<endl;
    binary(a,size,last);
     t5=(float)clock();
	x=(t5-t4/C_P_S);
  cout<<"the time take is "<<x<<endl;
    return 0;
}





void binary(int a[],int s,int ele)
{s=size;
int location=-5;
int mid;
int initial;
int final;
initial=0;
final=size;
mid=((initial+final)/2);



while(initial<=final)
{
mid=(initial+final)/2;
if(a[mid]==ele)
{
location=mid;
break;
}
if(ele<a[mid])
final=mid-1;
if(ele>a[mid])
initial=mid+1;
}
if(location==-5)
cout<<" Required number not found "<<endl;
else
cout<<" Required number is found at index "<<location<<endl;
}
