#include<iostream>
#include<fstream>

using namespace std;

class person
{
protected:
    char name[80];
    int age;
public:
    void getdata()
    {

        cout<<"enter the name:"<<endl;
        cin>>name;
        cout<<"enter the age:"<<endl;
        cin>>age;
    }
    void showdata()
    {
        cout<<"name is:"<<name<<endl;
        cout<<"age is:"<<age<<endl;
    }
};
int main()
{ char ch;
    person pers;
    fstream file;

    file.open("g.dat", ios::app | ios::in | ios::out | ios::binary);
    do
    {
        cout<<"Enter persons data:"<<endl;
        pers.getdata();
        file.write(reinterpret_cast<char*>(&pers), sizeof(pers));
        cout<<"Enter choice y/n"<<endl;
        cin>>ch;
    }
    while(ch=='y');
    file.seekg(0);

        file.read(reinterpret_cast<char*>(&pers), sizeof(pers));
        while(!file.eof())
        {
            cout<<"\n persons data\n"<<endl;
            pers.showdata();
             file.read(reinterpret_cast<char*>(&pers), sizeof(pers));

        }
        cout<<endl;
    return 0;
}
