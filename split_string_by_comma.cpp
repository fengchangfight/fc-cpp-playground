/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

vector<string> split(string st,  const char delimiter){
    std::stringstream ss(st);
    std::vector<std::string> vect;
    
    while(ss.good()) {
      string substr;
      getline(ss, substr, delimiter); //get first string delimited by comma
      vect.push_back(substr);
   }
   
   return vect;
}

int main()
{
    std::string st = "Hello,World,bitch";
    
    vector<string> vect = split(st, ',');
   
    cout<<vect.size()<<endl;
    for(int i =0 ;i< vect.size(); i++){
        
        cout<< vect[i]<<endl;
    }
    return 0;
}
