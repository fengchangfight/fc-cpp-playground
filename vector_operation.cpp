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

    // repeat vector same element
    std::vector<string> vec(5, "hell");
    for(auto & s: vec){
        cout<< s<< endl;
    }
    
   
    return 0;
}
