// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int onefive(int n)
{
    if(n==0)
    {
        return -1;
    }
    onefive(n-1);
    cout<<n<<endl;
    
    
return 0;    
}
int main() {
int n=5;
onefive(n);
    return 0;
}
