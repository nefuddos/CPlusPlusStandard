vector�ĵ�����������ĵ�����
ʹ��֮ǰ���������<vector>
vector�����ڲ�����С�ĺ�����size(),empty(),man_size(),capacity()
	һ���ڴ��������ã���vector��ص����е�references,pointers,iterators����ʧЧ
	�ڴ��������ú�����ʱ��
���õĲ���������
	//���캯������������
	vector<Elem> c ����һ���յ�vector,����û���κ�Ԫ��
	vector<Elem> c1(c2) ����һ������
	vector<Elem> c(n) ����һ����СΪn��vector
	vector<Elem> c(n,elem) ����һ����СΪn��ÿһ��Ԫ��Ϊelem��vector
	vector<Elem> c(beg,end) ����һ��[beg,end]��ΪԪ�صĳ�ʼֵ��vector
	~c.vector<Elem>() ��������Ԫ�أ������ͷ��ڴ�
	//���ش�С
	c.size() ����Ԫ�ص�����
	c.empty() �жϴ�С�Ƿ�Ϊ0
	c.max_size() ���ؿ������ɵ�Ԫ�ص��������
	capacity() �������·���ռ�Ǯ�������ɵ�Ԫ�ص������Ŀ
	reserve() ����������㣬����֮
	//�Ƚϴ�С
	c1==c2
	c1!=c2
	c1<c2
	c1>c2
	c1<=c2
	c1>=c2
	//��ֵ����
	c1=c2 ��c2�����е�Ԫ�ظ�ֵ��c1
	c.assign(n,elem) ����n��elem����ֵ��c
	c.assign(beg;end) �������ڵ�Ԫ�ض���ֵ��c
	c1.swap(c2) ��c1��c2��Ԫ�ػ���
	swap(c1,c2) ͬ��
	
	//Ԫ�صĴ�ȡ
	c.at(idx) ����Ԫ�أ�����Խ�����׳�out_of_range
	c[idx] ����idx����ʾ��Ԫ��,�����б߽���
	c.front() ���ص�һ��Ԫ�أ������
	c.back() �������һ��Ԫ�أ������
	
	//��������غ���
	c.begin() ���������ȡ��������ָ���һ��Ԫ��
	c.end() ָ�����һ��Ԫ�ص���һ��λ��
	c.rbegin() ���������������ָ������������ĵ�һ��Ԫ��
	c.rend() ...ָ����������������һ��Ԫ��
	
	//insert��removeԪ��
	c.insert(pos,elem)  ��posλ�ò���һ��elem�ĸ�������������Ԫ�ص�λ��
	c.insert(pos,n,elem) û�з���ֵ
	c.insert(pos,beg,end) û�з���ֵ
	c.push_back(elem) ��β�����һ��elem����
	c.pop_back() �Ƴ����һ��Ԫ��(�����ش���
	c.erase(pos) �Ƴ�posԪ�أ�������һ��Ԫ��
	c.earse(beg,end) �Ƴ�[beg,end]�����ڵ�����Ԫ�أ�������һ��Ԫ�ص�λ��
	c.resize(num) ������С
	c.resize(num,elem) ������С������elem����
	c.clear() �Ƴ����е�Ԫ�أ����������

vector<bool> ���������
	c.flip() �����е�boolԪ��ֵȡ��ֵ,Ҳ����˵����
	m[idx].flip() ������idx��bitԪ��ȡ��ֵ
	m[idx] = val ������idx��bitԪ��ֵΪval,
	m[idx1] = m[idx2] ��ֵ����
