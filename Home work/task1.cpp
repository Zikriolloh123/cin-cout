#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int V,S,a,b,c;
    cout<<" a = ";
    cin>>a;
    cout<<" b = ";
    cin>>b;
    cout<<" c = ";
    cin>>c;
    V=a*b*c;
    S=2*(a*b+b*c+a*c);
    cout<<" V = "<<V<<endl;
    cout<<" S = "<<S;
}
