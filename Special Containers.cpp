容器配接器
1：stack(堆栈):先进后出
引入头文件<stack>
#include <stack>
核心接口
push()
top()
pop()

2：Queues(队列):先进先出
#include <queue>
push()
front()
back()
pop()

3: Priority queues(带优先序的队列)
在queue上加上了优先级
push()
top()
top()
4: bitset的特殊容器
不可以改变位的数量，但是可以用vector<bool>来取代
//操作函数
bitset<bits>::bitset()
bitset<bits>::bitset (unsigned long value)
explicit bitset<bits>::bitset (const string& str)
bitset<bits>::bitset (const string& str,string::size_type str_idx)
bitset<bits>::bitset (const string& str,string::size_type str_idx,string::size_type str_num)
size_t bitset<bits>::size() const 返回位的个数
bool bitset<bits>::count() const 返回值为1的位的个数 
bool bitset<bits>::any() const 判断是否有任何位被设立（数值1）
bool bitset<bits>::none() const 判断是否没有任何一个位被设立（亦即所有的位值都是0）
rest() 判断是否被设立为1
operator ==  *this和bits的所有位是否都相等
operator !=  ...是否有哪些位不相等

//更易性操作
set() 将所有的位设为1
set(size_t idx) 设立特定位为1
set(size_t idx,int value) 根据情况设定
reset()
reset(size_t idx)
flip() 反转所有的位
flip(size_t idx) 反转特定位
operator ^=() 异或运算
operator !=() 或运算
operator &=() 与运算
operator <<=() 移位运算
operator >>=() 移位运算
operator [] 存取位

//类别转换
unsigned long bitset<bits>::to_ulong () const 返回所代表的整数
string bitset<bits>::to_string() const 返回字符串

//I/O操作
istream& operator >> (istream& strm,bitset<bits>& bits)
ostream& operator >> (ostream& strm,bitset<bits>& bits)
