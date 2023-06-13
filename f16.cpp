///A class has an integer data member 'i' and a function named 'printNum' to print the value of 'i'.
///Its subclass also has an integer data member 'j' and a function named 'printNum' to print t
///he value of 'j'. Make an object of the subclass and use it to assign
///a value to 'i' and to 'j'. Now call the function 'printNum' by this object.
#include<iostream>
using namespace std;

class mula
{
public:
    int i;
    void printNum()
    {
        cout << i << endl;
    }
};

class alo: public mula
{
public:
    int j;
    alo(int g,int p)
    {
        i=g;
        j=p;
    }
    virtual void printNum()
    {
        cout << j << endl;
    }
};

int main()
{
    alo obj(5,10);
    obj.printNum();
    return 0;
}

