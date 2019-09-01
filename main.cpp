#include <iostream>
#include <vector>
#include <string>
#include <gflags/gflags.h>
#include <boost/tokenizer.hpp>
#include <boost/shared_ptr.hpp>
#include <openssl/opensslv.h>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int val = 1;

void vectorplay()
{
     // 移除重复元素
     std::vector<int> v{1, 2, 3, 1, 2, 3, 3, 4, 5, 4, 5, 6, 7};
     std::sort(v.begin(), v.end()); // 1 1 2 2 3 3 3 4 4 5 5 6 7
     auto last = std::unique(v.begin(), v.end());
     // v 现在保有 {1 2 3 4 5 6 7 x x x x x x} ，其中 x 不确定
     v.erase(last, v.end());
     for (int i : v)
          std::cout << i << " ";
     std::cout << "\n";
}

void swapplay()
{
     int x = 10, y = 20;
     cout << "before x:" << x << ",y:" << y << endl;
     std::swap(x, y);

     cout << "after x:" << x << ",y:" << y << endl;
}

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
     cout << sp1.use_count() << endl;
     std::cout << "After Reset sp1. The Sample now has " << sp2.use_count() << " references\n";

     sp2.reset();
     std::cout << "After Reset sp2.\n";
}

int main(int argc, char *argv[])
{
     swapplay();
     return 0;
}