#include <bits/stdc++.h>
using namespace std;
class Volume
{
public:
    int ln, br, hg;
    Volume(int a, int b, int c) : ln(a), br(b), hg(c) {}
    void print()
    {
        cout << ln * br * hg << endl;
    }
};

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    Volume obj(a, b, c);
    obj.print();
}
