// Misol 140
#include<iostream>
using namespace std;
int main()
{
    int   m, n, p, q, i, j, k;
    cin >> m >> n;   int a[m][n];
        for (i = 0; i < m; ++i)
            for (j = 0; j < n; ++j)
                cin >> a[i][j];
    cin >> p >> q;    int b[p][q],c[m][q];
        for (i = 0; i < p; ++i)
            for (j = 0; j < q; ++j)
                cin >> b[i][j];
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < q; ++j)
            {
                c[i][j] = 0;
                for (k = 0; k < n; ++k)
                    c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
                cout << c[i][j] << " ";
            }
            cout << "\n";
        }
    return 0;
}
