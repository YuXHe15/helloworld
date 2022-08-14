#include <iostream>
#include <cstdlib> 
using namespace std;
void RandomAry(int *p, int n, int m, int b, int e);
void Display(int *a, int n, int m);
int fac(int a);
void initls(int *ls, int m);
void perm(int *lr, int *ls, int start, int end, int q);
void swap(int *c, int a, int b);
void record(int *a, int *b, int m, int q);
bool OaED(int *b, int m);
int DetCal(int *D, int *lr, int od, int m, int q);
void DispCout(int a);
int main()
{

	int m = 8;
    int n = m;
	int a[n][m]{};
	int *p = a[0];
	int e = 13;
	int b = 1;
    int q;
    int i;
    int od = fac(m);
    int Ans;
    if(od%m == 0)
    {
        q = od/m;
    }
    else q = od/m + 1;
    RandomAry(p, n, m, b, e);
//    Display(p, n, m);
    int ls[m]{};
    int lr[od+q][m]{};
    int *op = lr[0];
    initls(ls, m);
//    Display(ls, 1, m);
    perm(op, ls, 0, m-1, q);
    record(op, ls, m, q);
//    Display(op, od+q, m);
    Ans = DetCal(p, op, od, m, q);
    DispCout(Ans);
 //   DispCout(OaED(op + 5, m));
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
    if(n == 1)
    {
        for (i = a; i < a + m; i++)
        {
            cout << *i << " ";
        }
    }
    else
    {
            for (i = a; i < a + (n)*m; i+=m)
        {
            for (j = i; j < i + m; j++)
            {
                cout << *j << " ";
            }
            cout << endl;
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
void swap(int *c, int a, int b)
{
    int d;
    d = *(c + a);
    *(c + a) = *(c + b); 
    *(c + b) = d;
}
void perm(int *lr, int *ls, int start, int end, int q)
{
    int i;
    int *j = ls;
    if(start > end)
    {
        record(lr, ls, end+1, q);
    }
    else
    {
        for (i = start; i < end + 1; i++)
        {
            swap(ls, start, i );
            perm(lr, ls, start + 1, end, q);
            swap(ls, start, i );
        }
    }
}
void record(int *a, int *b, int m, int q)
//a, 2d array, b, ls, m, 2nd dimension
{
    int *i;
    int count = 0;
    int *j;
    int *k;
    int l = 0;
    for (i = a; i < a + fac(m); i ++)
    {
        if (*i == 0)
        {
            *i = 1;
            break;
        } 
        else count++;
    }
    for (j = a + (q+count)*m; j < m*(count + 1 + q) + a; j++)
    {
        *j = *(b + l);
        l++;
    }
    i = a;
    *(i + count) = 1;
}

bool OaED(int *b, int m)
{
	bool O = false;
	int *i = nullptr;
	int *j = nullptr;
	int p = 0;
	for (i = b; i < b + m; i ++ )
	{
		for(j = i; j < b + m; j ++ )
		{
			if(*j - *i < 0)
			{
				p += 1;
			}
		}
		
	}
	if(p%2 == 0)
	{
		O = true;
	}
	return O;
}

int DetCal(int *D, int *lr, int od, int m, int q)
{
    int x = 0;
    int y = q;
    int p = 1;
    int po = 0;
    int ne = 0;
    for (y ; y < od + q ; y++)
    {
        p = 1;
        x = 0;
        for (x; x < m; x++)
        {
            p = p * (*(D + (*(lr + y*m + x) - 1) + m*x));
        }
        if (OaED(lr + y*m, m) == true)
        {
            po += p;
        }
        else ne += p;
    }
    int B = po - ne;
    return B;
}

void DispCout(int a)
{
    cout << a<<endl;
}