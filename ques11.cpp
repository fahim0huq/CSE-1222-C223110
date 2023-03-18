#include <bits/stdc++.h>
using namespace std;
class Employee
{
public:
    string name, adrss;
    int join;
};
void print()
{
    cout << "Name"<< "  "<< "Year of joining"<< "  "<< "Adress" << endl;
}
int main()
{
    Employee shamsu, soleman, kalam;

    shamsu.name = "shamsu";
    shamsu.join = 1992;
    shamsu.adrss = "Chittagong";

    soleman.name = "soleman";
    soleman.join = 1994;
    soleman.adrss = "Chittagong";

    kalam.name = "Kalam";
    kalam.join = 1990;
    kalam.adrss = "Dhaka";
    print();
    cout << shamsu.name << "   " << shamsu.join << "    " << shamsu.adrss << endl;
    cout << soleman.name << "  " << soleman.join << "    " << soleman.adrss << endl;
    cout << kalam.name << "    " << kalam.join << "    " << kalam.adrss << endl;
}