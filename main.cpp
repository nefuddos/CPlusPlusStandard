正确可移植的main的写法：
int main()
{
	...
}
int main(int argc , char* argv[])//argv是命令行参数数组
{
	...
}
	c++中默认在最后加了return 0,所以呢，这里可以不写
	具体情况视编译器而定
复杂度的表示方法：big-O的表示法：
O(1) O(log(n)) O(n) O(n*log(n)) O(n^2)
一般而言常用的算法的复杂度都在这5种之中
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
C++中配置器的概念：
以前主要用于处理不同pc上不同指针类别的问题，现在则使
诸如共享内存，垃圾回收面向对象数据库保持一致的接口
namespace std{
	//缺省状态下的适配器
	template <class T>
	class allocator;
}
