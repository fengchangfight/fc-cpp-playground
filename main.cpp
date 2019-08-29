#include <iostream>
#include <vector>
#include <string>
#include <gflags/gflags.h>

using std::cout;
using std::vector;
using std::string;
using std::endl;

DEFINE_string(languages, "english,french,german","comma-separated list of languages to offer in the 'lang' menu");



int main(int argc, char *argv[])
{
    gflags::SetUsageMessage("some usage message");
    gflags::SetVersionString("1.0.0");
    gflags::ParseCommandLineFlags(&argc, &argv, true);
    cout<<"My language is:"<<FLAGS_languages<<endl;
    
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code!"};

    int a = 2;
    int b =1;
    int c = a+b;
    int e
    {
        5
    };

    msg.push_back("fuck");

    for (const string& word : msg)
    {
        cout << word << " ";
        cout << c;
    }
    cout <<"I\n";
    cout <<"love\n";
    cout <<"dogs\n";
    cout <<"cats\n";
    cout <<"miao\n";
    cout <<"horse\n";
    cout <<"tuck\n";
    cout <<"bitch\n";

    cout<<e<<"\n";

    return 0;
}