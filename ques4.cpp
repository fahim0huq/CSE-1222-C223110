#include<bits/stdc++.h>
using namespace std;
class triangle
{
public:
    int a,b,c;
    triangle(int p,int q,int r)
    {
         a=p;
         b=q;
         c=r;
    }

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
    ~triangle()
    {
    }
};
int main()
{
    triangle f_peri(3,4,5),f_area(3,4,5);
    cout<<f_peri.perimeter()<<endl;
    cout<<f_area.area()<<endl;
}


