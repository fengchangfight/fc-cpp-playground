#include <iostream>
#include <vector>
#include <string>
#include <gflags/gflags.h>
#include <boost/tokenizer.hpp>
#include <boost/shared_ptr.hpp>
#include <openssl/opensslv.h>
#include <memory>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int val = 1;
namespace n1
{
int f = 10;
}
namespace n2
{
int f = 5;
}

using namespace n1;
using namespace n2;

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

void printvector()
{
     /* Set up vector to hold chars a-z */
     std::vector<char> path;
     for (int ch = 'a'; ch <= 'z'; ++ch)
          path.push_back(ch);

     /* Print path vector to console */
     std::copy(path.begin(), path.end(), std::ostream_iterator<char>(std::cout, " "));
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

class Box
{
public:
     double length;  // 长度
     double breadth; // 宽度
     double height;  // 高度
     Box(double l, double b, double h)
     {
          this->length = l;
          this->breadth = b;
          this->height = h;
     }
     void showHeight()
     {
          cout << "my height is: " << height << endl;
     }
};

int main(int argc, char *argv[])
{
     //printvector();
     //cout << n1::f << endl;

     std::shared_ptr<Box> pSA(new Box(1, 2, 3));

     pSA->showHeight();

     return 0;
}