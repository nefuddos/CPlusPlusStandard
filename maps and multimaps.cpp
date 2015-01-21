Map and multimap 将key/value pair(键值/实值 对组)当做元素,进行管理
可根据key的排序规则自动将元素进行排序,multimaps应许重复，而maps不应许重复
使用之前应该导入map
●key/value必须具备assignable(可赋值的)和copyable(可复制的)性质
●对排序准则而言，key必须是comparable(可以比较的)
maps/multimaps通常是以平衡二叉树完成
Maps和Multimaps的操作函数
map c 生成一个空的Map/multimap，其中不包含任何元素
map c(op) 以op为排序准则，产生一个空的map.multimap
map c1(c2) 产生某个map/multimap的副本，所有的元素都会被复制
map c(beg,end) 以区间[beg,end]内的元素生成一个map/multimap
c.~map() 销毁所有的元素，释放内存

//map的形式
map<Key,Elem>
map<Key,ELem,Op>
multimap<Key,Elem>
multimap<Key,Elem,Op>

//非变动性操作
c.size()
c.empty()
c.max_size()
c1 == c2
c1 != c2
c1 < c2
c1 > c2
c1 <= c1
c1 >= c2

//特殊搜寻操作函数
count(key) 返回键值等于key的元素个数
find(key) 返回键值等于key的第一个元素的个数，找不到就返回end()
lower_bound(key) 返回键值为key的元素的第一个元素的位置
upper_bound(key) ...最后一个元素的位置
equal_range(key) 返回一个区间

//赋值操作
c1 = c2
c1.swap(c2)
swap(c1,c2)

//迭代器和元素的存取
c.begin()
c.end()
c.rbegin()
c.rend()

//元素的插入和删除
c.insert(elem)
c.insert(pos,elem)
c.insert(beg,end)
c.erase(elem)
c.erase(pos)
c.erase(beg,end)
c.clear()

//map是个例外，支持下标存取
m[key]

