#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
public:
    int len, bred;
    Rectangle(int l, int b)
    {
        len = l;
        bred = b;
    }
    int Area()
    {
        return len * bred;
    }
};
int main()
{
    Rectangle rec1(4, 5),rec2(5,8);
    cout << rec1.Area() << endl;

    cout << rec2.Area() << endl;
    return 0;
}

