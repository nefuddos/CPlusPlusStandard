ʹ��֮ǰ�������ͷ�ļ�<deque>
#include <deque>
��һ���������ʹ��deque
��Ҫ�����˰�����Ƴ�Ԫ��
��������(refer to)�����ڵ�Ԫ��
Deques�Ĳ�������
//���캯������������
deque<Elem> c ����һ���յ�deque
deque<Elem> c1(c2) ����һ������
deque<Elem> c(n) ����һ����СΪn��ȱʡ��deque
deque<Elem> c(n,elem) ...��elem���
deque<Elem> c(beg,end) ...
c.~deque<Elem>() �������е�Ԫ�أ��ͷ��ڴ�
//�Ǳ䶯�Բ���
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
//�䶯�Բ���
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
deques��vectors��ͬ
1:deques���ṩ����������capacity()��reserve())
2:dequesֱ���ṩ����������ͷ���İ����ɾ������


