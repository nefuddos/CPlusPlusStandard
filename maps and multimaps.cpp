Map and multimap ��key/value pair(��ֵ/ʵֵ ����)����Ԫ��,���й���
�ɸ���key����������Զ���Ԫ�ؽ�������,multimapsӦ���ظ�����maps��Ӧ���ظ�
ʹ��֮ǰӦ�õ���map
��key/value����߱�assignable(�ɸ�ֵ��)��copyable(�ɸ��Ƶ�)����
�������׼����ԣ�key������comparable(���ԱȽϵ�)
maps/multimapsͨ������ƽ����������
Maps��Multimaps�Ĳ�������
map c ����һ���յ�Map/multimap�����в������κ�Ԫ��
map c(op) ��opΪ����׼�򣬲���һ���յ�map.multimap
map c1(c2) ����ĳ��map/multimap�ĸ��������е�Ԫ�ض��ᱻ����
map c(beg,end) ������[beg,end]�ڵ�Ԫ������һ��map/multimap
c.~map() �������е�Ԫ�أ��ͷ��ڴ�

//map����ʽ
map<Key,Elem>
map<Key,ELem,Op>
multimap<Key,Elem>
multimap<Key,Elem,Op>

//�Ǳ䶯�Բ���
c.size()
c.empty()
c.max_size()
c1 == c2
c1 != c2
c1 < c2
c1 > c2
c1 <= c1
c1 >= c2

//������Ѱ��������
count(key) ���ؼ�ֵ����key��Ԫ�ظ���
find(key) ���ؼ�ֵ����key�ĵ�һ��Ԫ�صĸ������Ҳ����ͷ���end()
lower_bound(key) ���ؼ�ֵΪkey��Ԫ�صĵ�һ��Ԫ�ص�λ��
upper_bound(key) ...���һ��Ԫ�ص�λ��
equal_range(key) ����һ������

//��ֵ����
c1 = c2
c1.swap(c2)
swap(c1,c2)

//��������Ԫ�صĴ�ȡ
c.begin()
c.end()
c.rbegin()
c.rend()

//Ԫ�صĲ����ɾ��
c.insert(elem)
c.insert(pos,elem)
c.insert(beg,end)
c.erase(elem)
c.erase(pos)
c.erase(beg,end)
c.clear()

//map�Ǹ����⣬֧���±��ȡ
m[key]

