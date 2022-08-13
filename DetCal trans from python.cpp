#include <iostream>
#include <cstdlib> 
using namespace std;

int main()
{
    void RandomAry(int *p, int n, int m, int b, int e);
    void Display(int *a, int n, int m);
    int fac(int a);
    void initls(int *ls, int m);
    void perm(int *ls, int start, int end);
	int m = 4;
    int n = m;
	int a[n][m]{};
	int *p = a[0];
	int e = 13;
	int b = 1;
    RandomAry(p, n, m, b, e);
    Display(p, n, m);
    int ls[m]{};
    int lr[fac(m)][m]{};
    int *op = lr[0];
    initls(ls, m);
    Display(ls, 1, m);
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
int fac(int a)
{
    int n;
    if (a == 1 | a == 0)
    {
       n = 1;
    }
    else
    {
        n = fac(a - 1) * a;
    }
    return n;
}
void initls(int *ls, int m)
{
    int i = 1;
    int *j = ls;
    for (j ; j< ls + m; j ++)
    {
        *j = i;
        i++;
    }
}
void perm(int *ls, int start, int end)
{
    int i;
    int *j = ls;
    if(start > end)
    {


    }
    else
    {

    }
}