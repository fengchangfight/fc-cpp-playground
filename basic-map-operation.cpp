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
    map<string,string> map1;
    map<string,string> map2;
    map2["love"]="hate";
    map2["same"]="different";
    for (auto &p : map2)
        {
            map1[std::move(p.first)]=std::move(p.second);
        }
        map2.clear();

    
    for(auto& entry: map1){
        cout<<entry.first<<","<<entry.second<<endl;
    }
    for(auto& entry: map2){
        cout<<entry.first<<","<<entry.second<<endl;
    }
    
    if(map2.find("lvoe") == map2.end()){
        cout<<"not exist";
    }else{
        cout<<"exist";
    }
  
    return 0;
}
