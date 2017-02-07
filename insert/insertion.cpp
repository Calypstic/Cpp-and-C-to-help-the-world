
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void insertion_sort(int x[],int length)
{
  int key,i;
  for(int j=1;j<length;j++)
  {
	 key=x[j];
	 i=j-1;
	 while(x[i]>key && i>=0)
	 {
			   x[i+1]=x[i];
		 i--;
	 }
	 x[i+1]=key;
  }
}
int main () {
  string line;
  ifstream myfile ("inputfile.txt");
  if (myfile.is_open())
  {
	while (! myfile.eof() )
	{
	  getline (myfile,line);
	  cout << line << endl;
	}
	myfile.close();
  }

  else cout << "Unable to open file";
{

  int x;

  cout<<"NON SORTED LIST:"<<endl;
  for(x=0;x<ELEMENTS;x++)
  {
	   cout<<A[x]<<endl;
  }
  insertion_sort(A,ELEMENTS);
  cout<<endl<<"SORTED LIST"<<endl;
  for(x=0;x<ELEMENTS;x++)
  {
	   cout<<A[x]<<endl;
  }

  return 0;
}
}

