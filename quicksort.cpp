#include<iostream>
#include<cstdlib>
#include<fstream>
#include<ctime>
#define C_P_S ((clock_t)10000)
int size=1000;

void quick(int *,int,int);
using namespace std;
int main()
{int a[size],l,u,i,j;
fstream fout;
fout.open("quicksort.txt");
for(i=0;i<size;i++)
   {

    //genrating random numbers
    a[i]=rand();
    fout<<a[i];
    }

cout<<"unsorted array is";
i=0;
while(i<size)
{
    cout<<a[i];i++;
}


l=0;
u=size;
float t1,t2;
t1=(float)clock();

quick(a,l,u);
t2=(float)clock();

float t3=(float)((t2-t1)/C_P_S);

cout <<"\n sorted elements";
for(i=0;i<size;i++)
cout << a[i] << " ";
cout<<endl<<"time:"<<t3;
}

void quick(int a[],int l,int u)
{int i,j;
   int p,temp;
   if(l<u)
   {
   p=a[l];
   i=l;
   j=u;
    while(i<j)
   {
      while(a[i] <= p && i<j )
	 i++;
      while(a[j]>p && i<=j )
	   j--;
      if(i<=j)
      {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;}
  }
  temp=a[j];
  a[j]=a[l];
  a[l]=temp;
  for(i=0;i<size;i++)
  quick(a,l,j-1);
  quick(a,j+1,u);
 }
}

