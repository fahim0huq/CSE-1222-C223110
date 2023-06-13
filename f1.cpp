#include<iostream>
using namespace std;
class parent{
public:
    void display()
    {
        cout <<"This is parent class"<<endl;
    }

};
class derived:public parent
{
public:
    void print()
    {
        cout <<"this is child class" <<endl;
    }
};
int main()
{
    parent m;
    m.display();
    derived obj;
    obj.print();
    obj.display();
    return 0;
}
