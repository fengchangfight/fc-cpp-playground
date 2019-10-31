/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

map<string,string> vector2stringmap(vector<string> v, string value){
std::map<std::string, string> m;
std::transform(v.begin(), v.end(), std::inserter(m, m.end()),
               [&](const std::string &s) { return std::make_pair(s, value); });
return m;
    
}

int main()
{
    std::pair <std::string,double> product;          // copy constructor
    product = std::make_pair(std::string("lightbulbs"),0.99);   // using make_pair (move)

    cout<<product.first<<","<<product.second;
    return 0;
}
