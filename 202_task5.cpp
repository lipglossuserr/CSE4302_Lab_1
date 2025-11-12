#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter initial geese count:";
    cin>>n;
    int g=n;
    int e,s,k;
    for(int i=1;i<=3;i++)
    {
        int e=g*13;
        int s=e/2;
        int k=e-s;
        g+=k;
        cout<<"Geese count after year "<<i<<":"<<" "<<g;
        

        
    }
    ;
    

}

