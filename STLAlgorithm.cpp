1:算法头文件<algorithm>
//非变动性算法
for_each() 对每个元素执行某操作
count() 返回元素的个数
count_if() 返回满足某一准则(条件)的元素个数
min_element() 返回最小值元素(迭代器表示)
max_element() 返回最大值元素(迭代器表示)
find() 搜寻等于某值的第一个元素
find_if() 搜寻满足某个准则的第一个元素
search_n() 搜寻具有某特性的第一段‘n个连续元素’
search() 搜寻某一个子区间第一次出现的位置
find_end() 搜寻某一个子区间最后一次出现的位置
find_first_of() 搜寻等于‘某数个值之一’的第一个元素
adjacent_find() 搜寻连续两个相等（或则符合特定规则）的元素
equal() 判断两个区间是否相等
mismatch() 返回两个序列的各组对应元素汇总，第一对不相等元素
lexicographical_compare() 判断某一序列在‘字典顺序’下是否小于另一序列

	//string搜寻函数和STL搜寻算法的比较
	搜寻					String函数		STL算法
	某元素第一次出现位置	find()			find()
	某元素最后一次出现位置	rfind()			find(),采用逆向迭代器
	某子区间第一次出现位置	find()			search()
	某子区间最后一次出现位置rfind()			find_end()
	某数个元素第一次出现位置find_first_of()	find_first_of()
	某数个元素最后一次出现位置find_last_of() find_first_of()
	n个连续元素第一次出现位置					search_n()

//变动性算法
for_each() 针对每一个元素执行某项操作
copy()	从第一个元素开发，复制某段区间
copy_backward()	从最后元素开始，复制某段区间
transform()	变动（并复制）元素,将两个区间的元素合并
merge() 合并两个区间
swap_ranges() 交换两个区间内的元素
fill() 以给定值替换每一个元素
fill_n()	以给定值替换n个元素
generate()	以某项操作的结果替换n个元素
generate_n() 以某一项操作的结果替换n个元素
replace()  将具有某特定值的元素替换为另一个值
replace_if() 将符合某准则的元素替换为另一个值
replace_copy() 复制整个区间，同时并将具有某特定值的元素替换为另一个值
replace_copy_if() 复制整个区间，同时并将符合某准则的元素替换为另一个值

//移除性算法
remove() 将等于某特定值的元素全部移除
remove_if() 将满足某准则的元素全部移除
remove_copy() 将不等于某特定值的元素全部复制带它处
remove_copy_if() 将不满足某准则的元素全部复制到它处
unique() 移除毗邻的重复元素
unique_copy() 移除毗邻的重复元素，并复制到它处

//变序性算法
reverse() 将元素的次序逆转
reverse_copy() 复制的同时，逆转元素顺序
rotate() 旋转元素次序
rotate_copy() 复制的同时，旋转元素次序
next_permutation() 得到元素的下一个排列
prev_permutation()	得到元素的上一个排序
random_shuffle() 将元素的次序随机打乱
partition() 改变元素次序，使‘符合某准则’者移到前面
stable_partition() 与partition()相似，但保持符合准则与不符合准则之各个元素之间的相对位置

//排序算法
sort() 对所有的元素排序
stable_sort() 对所有的元素排序，并保持相等元素间的相对次序
partial_sort() 排序，直到前n个元素就位
partial_sort_copy() 排序,直到前n个元素就位，结果复制与它处
nth_element() 根据第n个位置进行排序
partition() 改变元素次序，使‘符合某准则’者移到前面
stable_partition() 与partition()相似，但保持符合准则与不符合准则之各个元素之间的相对位置
make_heap() 将一个区间转换成一个heap
push_heap() 将元素加入一个heap
pop_heap() 从heap移除一个元素
sort_heap() 对heap进行排序(执行以后就不再是一个heap了)

//已序区间算法
binary_search() 判断某区间是否包含某个元素
includes() 判断某区间内的每一个元素是否都涵盖于另一区间中
lower_bound() 搜寻第一个‘>=给定值’的元素
upper_bound() 搜寻第一个‘>给定值’的元素
equal_range() 返回‘=给定值’的所有元素构成的区间
merge() 将两个区间的元素合并
set_union() 求两个区间的并集
set_intersection() 求两个区间的交集
set_difference() 求位于第一个区间但不位于第二个区间的所有的元素
					形成一个已序区间
set_symmetric_difference() 找出只出现于两区间之一的所有元素，形成一个已序区间
inplace_merge() 将两个连续的已序区间合并

//数值算法
accumulate() 组合所有元素(求和，求乘积...)
inner_product() 组合两个区间内的所有的元素
adjacent_difference() 将每个元素和其前一元素组合
partial_sum() 将每个元素和其先前的所有元素组合

