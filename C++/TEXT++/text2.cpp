#include <iostream>

int main() {
    std::string name;

    std::cout << "请输入你的名字: ";
    std::cin >> name;

    std::cout << "你好, " << name << "! 欢迎学习 C++!" << std::endl;

    // 简单循环示例
    for (int i = 1; i <= 3; i++) {
        std::cout << "第 " << i << " 次循环" << std::endl;
    }

    return 0;
}