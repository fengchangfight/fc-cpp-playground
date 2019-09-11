#include <iostream>

using namespace std;
#include <thread>

void red()
{
    for(int i=0;i<100;i++){
        std::cout << "red" << std::endl;
    }
}
void green()
{
   for(int i=0;i<100;i++){
        std::cout << "green" << std::endl;
   }
}
void yellow()
{
   for(int i=0;i<100;i++){
        std::cout << "yellow" << std::endl;
   }
}
int main()
{
    std::thread r(red);
    std::thread g(green);
    std::thread y(yellow);
    r.join();
    g.join();
    y.join();

    std::cout<<"===final line"<<std::endl;
    return 0;
}
