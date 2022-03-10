#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    int small = 10001;
    int large = 0;
    cin >> n;
    vector<int> S;
    S.assign(n, 0);
    for (int i = 0; i < n; i++)
        cin >> S[i];
    for (int i = 0; i < n; i++)
    {
        if (small > S[i])
        {
            small = S[i];
        }
        if (large < S[i])
        {
            large = S[i];
        }
    }
    cout << small << endl;
    cout << large;
}