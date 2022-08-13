#include <iostream>
#include <cstdlib> 
using namespace std;
//Define dimension mxn by editting n and m, setting random number by
//defining b(beginning) and e(ending)
int main()
{
    void RandomAry(int *p, int n, int m, int b, int e);
    void Display(int *a, int n, int m);
    int fac(int a);
	int m = 4;
    int n = m;
	int a[n][m]{};
	int *p = a[0];
	int e = 13;
	int b = 1;
    RandomAry(p, n, m, b, e);
    Display(p, n, m);
 	return 0;
}

void RandomAry(int *p, int n, int m, int b, int e)
{

	int *i = nullptr;
	for (i = p; i < p + n*m; i++)
	{
		*i = rand()%(e - b + 1) + b;
	}
}

void Display(int *a, int n, int m)
{
    int *i;
    int *j;
    for (i = a; i < a + (n - 1)*m; i+=m)
    {
        for (j = i; j < i + m; j++)
        {
            cout << *j << " ";
        }
        cout << endl;
    }

}
