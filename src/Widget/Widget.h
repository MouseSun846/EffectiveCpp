#include "bits/stdc++.h"
using namespace std;
class Widget{
public:
    Widget();
    Widget(int num, std::string name);
    ~Widget();
    Widget(const Widget& rhs);
    Widget& operator = (const Widget& rhs);
    friend ostream& operator<<(ostream &os, const Widget &rhs);

private:
    int m_num;
    std::string m_name;
};