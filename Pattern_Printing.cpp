// Print Pattern using single loop 
*
**
***
****
*****


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int curr_star=0;
    int curr_line=1;
    
    for(curr_line=1;curr_line<=n;)
    {
        if(curr_star<curr_line)
        {
            cout<<"*";
            curr_star++;
            continue;
        }
        if(curr_star==curr_line)
        {
            cout<<"\n";
            curr_line++;
            curr_star=0;
        }
    }
   
}
