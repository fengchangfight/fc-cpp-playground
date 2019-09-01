#include <iostream>
#include <vector>
#include <string>
#include <gflags/gflags.h>
#include <boost/tokenizer.hpp>
#include <boost/shared_ptr.hpp>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int val = 1;

class implementation
{
public:
     ~implementation() { std::cout << "destroying implementation\n"; }
     void do_something() { std::cout << "did something\n"; }
};

void boostshareptrtest()
{
     boost::shared_ptr<implementation> sp1(new implementation());
     std::cout << "The Sample now has " << sp1.use_count() << " references\n";

     boost::shared_ptr<implementation> sp2 = sp1;
     std::cout << "The Sample now has " << sp2.use_count() << " references\n";

     sp1.reset();
     std::cout << "After Reset sp1. The Sample now has " << sp2.use_count() << " references\n";

     sp2.reset();
     std::cout << "After Reset sp2.\n";
}

int main(int argc, char *argv[])
{
     boostshareptrtest();
     return 0;
}