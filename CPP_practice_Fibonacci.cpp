#include <iostream>
using namespace std;
int fab();
int main()
{
    int n = 40;
    int m = 1;
    int p = 1;
    int q = 1;
    cout<<"1"<<endl<<"1"<<endl;
    for (int i = 1; i < n - 1; i++)
    {
        q = p;
        p = m;
        m = p + q;
        cout<<m<<endl;
    }
    
}