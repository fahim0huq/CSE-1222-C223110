#include <bits/stdc++.h>
using namespace std;
class Employee
{
public:
    int sal, noh;
    void getInfo()
    {
        cin >> sal >> noh;
    }
    void AddSal()
    {
        sal = sal + 10;
    }
    void AddWork()
    {
        sal = sal + 5;
    }
};
int main()
{
    Employee Fahim;
    Fahim.getInfo();
    if (Fahim.sal < 500)
    {
        Fahim.AddSal();
    }
    if (Fahim.noh > 6)
    {
        Fahim.AddWork();
    }
    cout << "FInal Salary is: " << Fahim.sal << endl;
}