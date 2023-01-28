#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        int roll_no;
        string phn_no;
        string name,adress;
};
int main()
{
    student shofi,jamshed;
    shofi.roll_no=1;
    shofi.name="shofi";
    shofi.adress="cox'sbazar,bangladesh";
    shofi.phn_no="01886046918";

    jamshed.roll_no=2;
    jamshed.name="jamshed";
    jamshed.adress="bohaddarhat,chittagong,bangladesh";
    jamshed.phn_no="01718224688";


    cout<< shofi.roll_no << endl;
    cout << shofi.name << endl;
    cout<< shofi.adress << endl;
    cout<< shofi.phn_no << endl << endl;

    cout<< jamshed.roll_no << endl;
    cout << jamshed.name << endl;
    cout << jamshed.adress << endl;
    cout << jamshed.phn_no << endl;


    return 0;
}


