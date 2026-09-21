#include<iostream>
#include<cstring>
using namespace std;
int main(){
     string p = "hello";
    string  s = "hello";
    cout<<"比较结果:"<<(s==p)<<endl;   // 注意：strcmp(s,p) 比较的是 s 和 p
    return 0;
}
