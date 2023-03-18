#include<bits/stdc++.h>
using namespace std;
class Average
{
public:
    int a,b,c;
    Average(double a,double b,double c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    friend void calc_avg(double a,double b,double c);
};
void calc_avg(double a,double b,double c)
    {
        cout << (a+b+c)/3 << endl;
    }
int main()
{
    int x,y,z;
    cin >> x >>y >>z;
    calc_avg(x,y,z);
}
