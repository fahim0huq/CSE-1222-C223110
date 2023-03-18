#include <bits/stdc++.h>
using namespace std;
class area
{
public:
    int len, bred;
    area(int l, int b)
    {
        len = l;
        bred = b;
    }
    int returnarea()
    {
        return len * bred;
    }
};
int main()
{
    int ll, bb;
    cin >> ll >> bb;
    area obj(ll, bb);
    cout << obj.returnarea() << endl;
}