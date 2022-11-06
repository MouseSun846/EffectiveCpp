#include "Widget.h" 
#include <ostream>
ostream& operator<<(ostream &os, const Widget &rhs)
{
    os<<"m_num: "<<rhs.m_num<<" m_name: "<< rhs.m_name<<endl;
    return os;
}

Widget::Widget()
{

}

Widget::Widget(int num, std::string name):m_num(num),m_name(name){} 

Widget::~Widget()
{

}

Widget::Widget(const Widget& rhs)
{
    m_num = rhs.m_num;
    m_name = rhs.m_name;
}

Widget& Widget::operator = (const Widget& rhs)
{
    m_num = rhs.m_num;
    m_name = rhs.m_name;
    return *this;
}