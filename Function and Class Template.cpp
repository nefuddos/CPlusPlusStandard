一般模板：
template <class T>
inline const T& max (const T& a,const T& b)
{
	return a < b ? b : a ;
}
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
缺省模板参数：
template <class T,class container = vector<T> >//<>里的class可以用typename取代
class MyClass;
MyClass<int> x1;
MyClass<int,vector<int> >

除了以typename修饰之外，template内任何标识符号都被看做一个值而不是一个数据类型
template <class T>
class MyClass{
{
	typename T::SubType * ptr;//因此呢，这里要想使用这里的定义，T的实体里面必须有SubType的申明
	...
};
比如：class Q{
		typedef int SubType;
		...
	  };
	  class Q
	  {
		class SubType
		{
		};
	  };

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
template constructor 并不遮盖implicit(隐式的初始化) copy constructor,如果完全吻合,
	implicit copy constructor 就会被产生出来并被调用
eg:
template <class T>
class MyClass
{
	public:
		template <class U>
		MyClass (const MyClass<U>& x);
};

void f(){
	MyClass<double> xd;
	MyClass<double> xd2(xd);//calls built-in constructor
	MyClass<double> xi(xd);//calls template constructor
}
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
基本类型的显示初始化：
template <class T>
void f()
{
	T x =T();//这里的x保证会被初始化为0
	...
};
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

