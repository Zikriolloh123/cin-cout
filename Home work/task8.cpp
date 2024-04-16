#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float S1,S2,S3,r1,r2,p=3.14;
    cout<<" r1 = ";
    cin>>r1;
    cout<<" r2 = ";
    cin>>r2;
    S1=p*pow(r1,2);
    S2=p*pow(r2,2);
    S3=S1-S2;
    cout<<" S1 = "<<S1<<endl;
    cout<<" S2 = "<<S2<<endl;
    cout<<" S3 = "<<S3<<endl;
}
