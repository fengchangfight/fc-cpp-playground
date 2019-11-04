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


int main()
{
    
    // repeat vector same element
    std::vector<string> vec{"I", "hell", "what","think", "make"};
    int batch_size = 2;
    
    int total_size = vec.size();
    
    int num_of_batch = (vec.size() - 1) / batch_size + 1;
    
    for(int i =0;i<num_of_batch;i++){
        int start_index = batch_size * i;
        int end_index = std::min(batch_size * (i + 1), total_size);
        auto first = vec.cbegin() + start_index;
        auto last = vec.cbegin() + end_index;
        vector<string> key_group(first, last);
        for(auto &i: key_group){
           cout<< i <<",";
        }
        cout<< "============="<<endl;
    }
    
    return 0;
}
