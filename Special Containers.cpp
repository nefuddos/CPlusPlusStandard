���������
1��stack(��ջ):�Ƚ����
����ͷ�ļ�<stack>
#include <stack>
���Ľӿ�
push()
top()
pop()

2��Queues(����):�Ƚ��ȳ�
#include <queue>
push()
front()
back()
pop()

3: Priority queues(��������Ķ���)
��queue�ϼ��������ȼ�
push()
top()
top()
4: bitset����������
�����Ըı�λ�����������ǿ�����vector<bool>��ȡ��
//��������
bitset<bits>::bitset()
bitset<bits>::bitset (unsigned long value)
explicit bitset<bits>::bitset (const string& str)
bitset<bits>::bitset (const string& str,string::size_type str_idx)
bitset<bits>::bitset (const string& str,string::size_type str_idx,string::size_type str_num)
size_t bitset<bits>::size() const ����λ�ĸ���
bool bitset<bits>::count() const ����ֵΪ1��λ�ĸ��� 
bool bitset<bits>::any() const �ж��Ƿ����κ�λ����������ֵ1��
bool bitset<bits>::none() const �ж��Ƿ�û���κ�һ��λ���������༴���е�λֵ����0��
rest() �ж��Ƿ�����Ϊ1
operator ==  *this��bits������λ�Ƿ����
operator !=  ...�Ƿ�����Щλ�����

//�����Բ���
set() �����е�λ��Ϊ1
set(size_t idx) �����ض�λΪ1
set(size_t idx,int value) ��������趨
reset()
reset(size_t idx)
flip() ��ת���е�λ
flip(size_t idx) ��ת�ض�λ
operator ^=() �������
operator !=() ������
operator &=() ������
operator <<=() ��λ����
operator >>=() ��λ����
operator [] ��ȡλ

//���ת��
unsigned long bitset<bits>::to_ulong () const ���������������
string bitset<bits>::to_string() const �����ַ���

//I/O����
istream& operator >> (istream& strm,bitset<bits>& bits)
ostream& operator >> (ostream& strm,bitset<bits>& bits)
