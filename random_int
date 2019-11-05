/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h> 
using namespace std;
int randStringSameLength(std::string &origin)
{
    
    srand((unsigned)time(NULL));
    if (origin.length() < 1)
    {
        return 1;
    }
    for (int i = 0; i < origin.length(); i++)
    {
        if (rand()%2==0)
        {
            origin[i] = 'A' + rand()%24;
        }
    }

    return 0;
}

int main()
{
    std::string st = "Hello World";
    randStringSameLength(st);
    
    cout<< st<<endl;
    return 0;
}
