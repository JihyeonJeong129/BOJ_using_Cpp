#include <iostream>

int main()
{
    int x,y,w,h;

    std::cin >> x >> y >> w >> h;

    std::cout << std::min(std::min(w-x, x),std::min(h-y, y)) << std::endl;

    return 0;
}
