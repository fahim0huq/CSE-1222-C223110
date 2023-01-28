#include<bits/stdc++.h>
using namespace std;
class triangle
{
public:
    int a=3,b=4,c=5;
    int perimeter()
    {
        int p=a+b+c;
        return p;
    }
    int area()
    {
        int s=((a+b+c)/2);
        int ar=sqrt(s*(s-a)*(s-b)*(s-c));
        return ar;
    }
};
int main()
{
    triangle f_peri,f_area;
    cout<<f_peri.perimeter()<<endl;
    cout<<f_area.area()<<endl;


}

