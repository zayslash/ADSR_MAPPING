#include <iostream>
#include <vector>
#include <fstream>
#include <math.h>
#include <iomanip>

using namespace std;

template <class T>
T mathFunc(T x)
{
    return sin(x) + 3;
}

int main()
{
    ofstream file;
    file.open("envelope.txt");

    if (file.is_open())
    {
        for (double i = -20.0; i <= 20.0; i = i + 1.0)
        {
            file << (double)i << setw(15) << mathFunc(i) << "\n";
        }
    }
    return 0;
}