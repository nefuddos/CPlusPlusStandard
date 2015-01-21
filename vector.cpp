vector的迭代器是随机的迭代器
使用之前，必须包含<vector>
vector常用于操作大小的函数有size(),empty(),man_size(),capacity()
	一旦内存重新配置，和vector相关的所有的references,pointers,iterators都会失效
	内存重新配置很消耗时间
常用的操作函数：
	//构造函数和析构函数
	vector<Elem> c 产生一个空的vector,其中没有任何元素
	vector<Elem> c1(c2) 产生一个副本
	vector<Elem> c(n) 产生一个大小为n的vector
	vector<Elem> c(n,elem) 产生一个大小为n，每一个元素为elem的vector
	vector<Elem> c(beg,end) 产生一个[beg,end]作为元素的初始值的vector
	~c.vector<Elem>() 销毁所有元素，并且释放内存
	//返回大小
	c.size() 返回元素的数量
	c.empty() 判断大小是否为0
	c.max_size() 返回可以容纳的元素的最大数量
	capacity() 但会重新分配空间钱所能容纳的元素的最大数目
	reserve() 如果容量不足，扩大之
	//比较大小
	c1==c2
	c1!=c2
	c1<c2
	c1>c2
	c1<=c2
	c1>=c2
	//赋值操作
	c1=c2 将c2的所有的元素赋值给c1
	c.assign(n,elem) 复制n个elem，赋值给c
	c.assign(beg;end) 将区间内的元素都赋值给c
	c1.swap(c2) 将c1和c2的元素互换
	swap(c1,c2) 同上
	
	//元素的存取
	c.at(idx) 返回元素，若若越界则抛出out_of_range
	c[idx] 返回idx所标示的元素,不进行边界检查
	c.front() 返回第一个元素，不检查
	c.back() 返回最后一个元素，不检查
	
	//迭代器相关函数
	c.begin() 返回随机存取迭代器，指向第一个元素
	c.end() 指向最后一个元素的下一个位置
	c.rbegin() 返回逆向迭代器，指向逆向迭代器的第一个元素
	c.rend() ...指向逆向迭代器的最后一个元素
	
	//insert和remove元素
	c.insert(pos,elem)  在pos位置插入一个elem的副本，并返回新元素的位置
	c.insert(pos,n,elem) 没有返回值
	c.insert(pos,beg,end) 没有返回值
	c.push_back(elem) 在尾部添加一个elem副本
	c.pop_back() 移除最后一个元素(但不回传）
	c.erase(pos) 移除pos元素，返回下一个元素
	c.earse(beg,end) 移除[beg,end]区间内的所有元素，返回下一个元素的位置
	c.resize(num) 调整大小
	c.resize(num,elem) 调整大小，且以elem补充
	c.clear() 移除所有的元素，将容器清空

vector<bool> 的特殊操作
	c.flip() 将所有的bool元素值取反值,也就是说求补码
	m[idx].flip() 将索引idx的bit元素取反值
	m[idx] = val 令索引idx的bit元素值为val,
	m[idx1] = m[idx2] 赋值操作
