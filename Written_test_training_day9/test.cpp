#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//另类加法
class UnusualAdd {
public:
    int addAB(int A, int B)
    {
        while (B != 0)
        {
            int x = A ^ B;
            B = (A & B) << 1;
            A = x;
        }
        return A;
    }
};

int main()
{
    UnusualAdd add;
    cout<<add.addAB(3, 5)<<endl;
    return 0;
}


//走方格的方案数
int step(int n, int m)
{
    if (n == 0 || m == 0)
        return 1;
    return step(n - 1, m) + step(n, m - 1);
}

int main()
{
    int m = 0;
    int n = 0;
    cin >> n >> m;
    int count = step(n, m);
    cout << count << endl;
    return 0;
}