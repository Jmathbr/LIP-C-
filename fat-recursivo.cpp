#include <iostream>

using namespace std;

int fat(int x)
{
    if(x == 1 || x == 0)
    {
        return 1;
    }else
    {
        return x*fat(x-1);
    }
}

int main()
{

    cout << fat(4) << endl;
    return 0;
}