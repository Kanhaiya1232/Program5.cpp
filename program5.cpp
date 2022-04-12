#include<iostream>
using namespace std;
class A
{
private:
    char name[15];
    int age;
    long int mobile;
public:
    void get_data()
    {
        cout<<"Enter name";
        cin>>name;
        cout<<"Age";
        cin>>age;
        cout<<"Mobile";
        cin>>mobile;
    }
    void put_data()
    { 
        cout<<"name"<<name<<endl;
        cout<<"age"<<age<<endl;
        cout<<"mobile"<<mobile<<endl;
    }
};
int main()
{
    A emp,emp1,emp2;
    emp.get_data();
    emp1.get_data();
    emp2.get_data();
    emp.put_data();
    emp1.put_data();
    emp2.put_data();
    return 0;
}