#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int m, n, max, min, cnt = 0;
	cin >> m >> n;
	int mat[100][100];
	int temp = m;
	int j, i = 0, k, u;
	while (temp--) {
		for (j = 0; j < n; j++)
			cin >> mat[i][j]; i++; j = 0;
	}
	for (i = 0; i < m; i++) {
		u = 0;j=0;
		min = mat[i][0];
		for (j = 0; j < n; j++)
		{
			if (min > mat[i][j])
			{
				min = mat[i][j];
				u=j;
			}

		}
	
		k = 0;
		max = mat[0][u];
		for (k = 0; k < m; k++)
		{
			if (max < mat[k][u]) max = mat[k][u];
		}
		if (max == mat[i][u]) { cout << i << " " << u << " " << mat[i][u] << endl; cnt++; }

	}
	if (!cnt) cout << "no" << endl;
	return 0;
}
