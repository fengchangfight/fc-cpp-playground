#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
   
    vector<string> vec;
    vec.push_back("love");
    vec.push_back("you");
    
    for(auto& x: vec){
    	std::cout << x << '\n';        
    }

    return 0;
}
