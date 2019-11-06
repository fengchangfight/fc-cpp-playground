/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h> 
#include <map>
#include <regex>
using namespace std;




int main()
{
    string tablewithparts = "badgsgsgas_part2";
    
    string str = "badgsgsgas_part2"; 
    smatch result; 
    regex pattern("(.*)(_part\\d*)");	
    //匹配四个数字 //迭代器声明 
    string::const_iterator iterStart = str.begin(); 
    string::const_iterator iterEnd = str.end();
    string part1;
    string part2;
    regex_search(iterStart, iterEnd, result, pattern);
    part1 = result[1]; 
    part2 = result[2]; 
    cout<<part1<<endl;
    cout<<part2<<endl;


    return 0;
}
