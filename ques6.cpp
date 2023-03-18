#include <bits/stdc++.h>
using namespace std;
class area
{
public:
    int len, bred;
    void setDim(int l, int b)
    {
        len = l;
        bred = b;
    }
    int getarea()
    {
        return len * bred;
    }
};
int main()
{
    area obj;
    int ll, bb;
    cin >> ll >> bb;
    obj.setDim(ll, bb);
    cout << obj.getarea() << endl;
}