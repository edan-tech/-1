#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main(void)
{
   string s;
   while(cin>>s)
    {
        for(int i=s.length()-1; i>=0;i--)
         cout<<s[i];
        cout<<" ";
    }




}
