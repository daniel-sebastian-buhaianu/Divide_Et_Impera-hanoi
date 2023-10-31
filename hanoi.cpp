#include <fstream>
#include <iostream>
using namespace std;
ofstream fout("hanoi.out");
void mutaDiscuri(int, int, int);
int main()
{
	int n;
	cout << "n = "; cin >> n;
	mutaDiscuri(n, 1, 2);
	fout.close();
	return 0;
}
void mutaDiscuri(int x, int i, int j)
{
	// functia muta x discuri de pe tija i pe tija j
	// folosind tija de manevra k
	if (x == 1)
	{
		fout << i << " -> " << j << '\n';
	}
	else
	{
		int k = 6-i-j;
		mutaDiscuri(x-1, i, k);
		fout << i << " -> " << j << '\n';
		mutaDiscuri(x-1, k, j); 
	}
}
