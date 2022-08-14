#include <iostream>
#include <cstdlib> 
using namespace std;

int main()
{
	const int n = 6;
	const int m = 6;
	int a[n][m]{};
	int *p = a[0];
	int e = 10;
	int b = 1;
	int ls[m]{1, 3, 2, 4};
	int lr[m][m]{};
	
	//bool DetCal(float x);
	void RandomAry(int *p, int n, int m, int b, int e);
	bool OaED(int *b, int m);
	RandomAry(p, n, m, b, e);
	bool An = OaED(ls, m);
	//float C = DetCal(D);
	cout << An;
	return 0;
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
			if(*i - *j < 0)
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

void RandomAry(int *p, int n, int m, int b, int e)
{

	int *i = nullptr;
	for (i = p; i < p + n*m; i++)
	{
		*i = rand()%(e - b + 1) + b;
	}
}

float DetCal (int *h, int m)
{
	int D;
	return D;
}
