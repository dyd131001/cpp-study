#include <iostream>
#include <vector>

using namespace std;
vector<vector<int> > S1;
vector<vector<int> > S2;
vector<vector<int> > S3;

void matrix(int n, int k, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < k; j++)
            for (int z = 0; z < m; z++)
            {
                S3[i][z] += S1[i][j] * S2[j][z];
            }
}

int main(void)
{
    int n, k, m;
    cin >> n;
    cin >> k;
    cin >> m;
    S1.assign(n, vector<int>(k, 0));
    S2.assign(k, vector<int>(m, 0));
    S3.assign(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < k; j++)
        {
            cin >> S1[i][j];
        }
    for (int i = 0; i < k; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> S2[i][j];
        }
    matrix(n, k, m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j == (m - 1))
            {
                cout << S3[i][j];
            }

            else
            {
                cout << S3[i][j] << " ";
            }
        }
        cout << endl;
    }
}