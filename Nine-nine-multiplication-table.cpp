// 九九乘法表.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>

using namespace std;
string shu[10] = { "十","一","二" ,"三" ,"四" ,"五" ,"六" ,"七" ,"八" ,"九" };

string turn(int i)
{
    if (i < 10) return "得" + shu[i];
    if (i < 20) return "十" + shu[i - 10];
    if (!i % 10) return shu[i / 10] + shu[i % 10];
    return shu[i / 10] + shu[0] + shu[i % 10];

}

int main()
{
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
            cout << shu[(i < j) ? i : j] << shu[(i > j) ? i : j] << turn(i * j) << "  ";
        cout << "\n";
    }
}
