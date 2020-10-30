#include <iostream>
#include<cmath>
#include "Helpers.h"

const int n = 10;

void print()
{
    std::cout << "Hellow Skillbox!\n";
}

void printNums(bool even, int n) {

    for (int i = even ? 2 : 1; i <= n; i+=2)
    {
         std::cout << i << "\n";
    }
}

class TestClass 
{
    private: 
    std::string test1 = "test 1";
    std::string test2 = "test 2";

    public:
    void PrintTests()
    {
        std::cout << test1 << "\n";
        std::cout << test2 << "\n";
    }

};

class Vector
{
    public:
    Vector() : x(0), y(0), z(0)
    {}
    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
    {}
    void Show()
    {
        std::cout << x << ' ' << y << ' ' << z << "\n";
    }
    double GetVectorLength()
    {
        double Length = sqrt(pow(x, 2) + pow(y, 2) + pow(x, 2));
        std::cout << Length;
        return Length;
    }
    private:
    double x;
    double y;
    double z;

};

int main()
{
    int x = 100;
    int y = x + 100;
    int mult = x * y;

    int b = 0;
    b = b + 2;

    int test;
    test = 100500;

    int test2 = 1005001;

    int random = 97968576;

    std::cout << random;
    sqrSum(x, y);

    std::string greeting = "Good evening";

    std::cout << greeting << "\n";
    std::cout << greeting.length() << "\n";
    std::cout << greeting[0]  << "\n";
    std::cout << greeting[greeting.length() - 1]  << "\n";


    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << i << "\n";
        }
    }

    std::cout << "Print numbers \n";
    printNums(true, 10);

    int array[5][5];


    std::cout << "Unit 16\n";

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++) 
        {
            array[i][j] = i + j;
            std::cout << array[i][j] << ' ';
        }
    }

    std::cout << "\n" << "Today is the 21 of October, so...\n";

    int today = 21;
    int arrayLength = 5;
    int index = 21 % 5;
    int sum = 0;

    for (int i = 0; i < arrayLength; i++)
    {
        sum += array[index][i];
    }
    std::cout << sum << "\n";

    TestClass TClass;
    TClass.PrintTests();

    Vector TVector(2, 2, 2);
    TVector.GetVectorLength();

    return 0;
};

