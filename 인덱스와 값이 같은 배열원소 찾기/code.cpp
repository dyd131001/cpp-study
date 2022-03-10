#include <iostream>
#include <vector>

using namespace std;

vector<int> S;
int n;
int c = 0;
int binsearch(int, int); //재귀 이용

int main(void)
{
    int index;
    cin >> n;
    S.assign(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> S[i];
    index = binsearch(1, n);
    cout << index << endl;
    cout << c << endl;
}
int binsearch(int low, int high)
{
    int mid;

    if (low > high) // 종료 조건
        return -1;
    else
    {
        mid = (low + high) / 2;
        if (mid - 1 == S[mid])
        {
            c++;
            return mid - 1;
        }
        else if (mid - 1 < S[mid])
        {
            c++;
            return binsearch(low, mid - 1);
        }
        else
        { // if(x > s[mid])
            c++;
            return binsearch(mid + 1, high);
        }
    }
}
