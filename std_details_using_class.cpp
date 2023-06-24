#include<iostream>
using namespace std;
class student
{
    public:
    int rno;
    char *name;
    
    void getData()
    {
        cout<<"Enter roll no: "<<endl;
        cin>>rno;
        cout<<"Enter name: "<<endl;
        name=new char();
        cin>>name;
    }
    void putData()
    {
        cout<<"\nRoll no:"<<rno<<endl<<"Name: "<<name;
    }
};
int main()
{
    student s1,s2;
    s1.getData();
    s2.getData();
    s1.putData();
    s2.putData();
    return (0);
}