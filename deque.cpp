使用之前必须包含头文件<deque>
#include <deque>
在一下情形最好使用deque
需要在两端安插和移除元素
无需引用(refer to)容器内的元素
Deques的操作函数
//构造函数和析构函数
deque<Elem> c 产生一个空的deque
deque<Elem> c1(c2) 产生一个副本
deque<Elem> c(n) 产生一个大小为n的缺省的deque
deque<Elem> c(n,elem) ...以elem填充
deque<Elem> c(beg,end) ...
c.~deque<Elem>() 销毁所有的元素，释放内存
//非变动性操作
c.size()
c.empty()
c.max_size()
c1 == c2
c1 != c2
c1 < c2
c1 > c2
c1 <= c2
c1 >= c2
c.at(idx)
c[idx]
c.front()
c.back()
c.begin()
c.rbegin()
c.rend()
//变动性操作
c1 = c2
c.assign(beg,end)
c.assign(beg,end)
c1.swap(c2)
swap(c1,c2)
c.insert(pos,elem)
c.insert(pos,n,elem)
c.insert(pos,beg,end)
c.push_back(elem)
c.pop_back()
c.push_front(elem)
c.pop_front()
c.erase(pos)
c.erase(beg,end)
c.resize(num)
c.resize(num,elem)
c.clear()
deques和vectors不同
1:deques不提供容量操作（capacity()和reserve())
2:deques直接提供函数，用于头部的安插和删除操作


