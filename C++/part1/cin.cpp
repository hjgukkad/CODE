#include <iostream>
#include <string>
using namespace std;

int main(){
    string ms;
    cout << "输入中文:" << endl;
    cin >> ms;
    cout << ms << endl;   // 你读进来了但没输出，加上这句才能看到结果
    return 0;
}