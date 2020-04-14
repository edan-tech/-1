#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    int counter=0;
    for(int i=1;i<=n;i++)
        {
            if(i%3==0&&i%5==0)
                {
                    counter++;
                }
            else if (i%3==0)
                {
                    continue;
                }
            else if(i%5==0)
                {
                    continue;
                }
            else
                {
                 counter++;
                }

        }
        cout<<"Output: "<<counter;




}
