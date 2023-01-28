#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        int roll_no;
        string name;
};
int main()
{
    student object;
    object.roll_no=2;
    object.name="jamshed";
    cout<< object.roll_no << endl;
    cout << object.name << endl;

    return 0;
}
