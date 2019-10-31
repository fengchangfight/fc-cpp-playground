#include <iostream>
#include <dirent.h>
#include <sys/types.h>
#include <string>
#include <vector>

using namespace std;
vector<string> list_dir(const char *path) {
   struct dirent *entry;
   DIR *dir = opendir(path);

   if (dir == NULL) {
      return {};
   }
   vector<string> filenames;
   while ((entry = readdir(dir)) != NULL) {
      string pp = entry->d_name;
      if(pp=="." || pp==".."){
         continue;
      }
      filenames.push_back(pp);
   }
   closedir(dir);
   return filenames;
}
bool has_suffix(const std::string &str, const std::string &suffix)
{
    return str.size() >= suffix.size() &&
           str.compare(str.size() - suffix.size(), suffix.size(), suffix) == 0;
}
int main() {
   vector<string> result = list_dir("/home/fcxie/test/c/p");
   for(auto &v: result){
     if(has_suffix(v, ".plan")){
       cout<<v<< endl;
     }
   }
}
