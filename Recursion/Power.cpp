#include <iostream>
using namespace std;
int power(int x, int n) {
    if(n==0)
    {
        return 1;
    }
    int smalloutput = power(x,n-1); 
    return x*smalloutput; // as x^(n-1) * x = x^n 
}
int main()
{
    int x,n;
    cin>>x>>n;
    cout<<power(x,n)<<endl;
}