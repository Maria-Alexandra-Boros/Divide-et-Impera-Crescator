#include<fstream>
using namespace std;
ifstream fin ("date.in");
ofstream fout ("date.out");
int n, a[1001],k;
void citire()
{
    fin>>n>>k;
    for(int i=1; i<=n; i++)
        fin>>a[i];
}
int d_i(int s, int d,int k, int a[1001])
{
    int mij=(s+d)/2;
    if(s>d)
        return -1;
    else
    {
        if(a[mij]==k)
            return mij;
        else if(k<a[mij])
            return d_i(s,mij-1,k,a);
        else
            return d_i(mij+1,d,k,a);

    }

}
int main ()
{
    citire();
    fout<<d_i(1,n,k,a);
    fin.close();
    fout.close();
    return 0;
}
