#include <algorithm>        // 标准算法头文件
#include <iostream>
#include <string>
#include <vector>
#include <functional>
using namespace std;

void print01(int val)
{
    cout << val << endl;
}

class print02
{
    public:
        void operator()(int val)
        {
            cout << val << endl;
        }
};
ssss
void func()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    for_each(v.begin(), v.begin()+3, print01);      // 使用普通函数

}

int main()
{
    func();
}
