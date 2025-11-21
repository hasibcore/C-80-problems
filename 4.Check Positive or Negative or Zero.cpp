/*4. Check Positive/Negative/Zero
Input: -10
Output: The number is Negative. */
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the Number : "<<endl;
    cin>>x;
    if(x>0)
    {
        cout<<x<<" is positive."<<endl;
    }
    else if (x<0)
    {
        cout<<x<<" is negative."<<endl;
    }
    else
    {
        cout<<x<<" is zero."<<endl;
    }
}
