һ��ģ�壺
template <class T>
inline const T& max (const T& a,const T& b)
{
	return a < b ? b : a ;
}
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
ȱʡģ�������
template <class T,class container = vector<T> >//<>���class������typenameȡ��
class MyClass;
MyClass<int> x1;
MyClass<int,vector<int> >

������typename����֮�⣬template���κα�ʶ���Ŷ�������һ��ֵ������һ����������
template <class T>
class MyClass{
{
	typename T::SubType * ptr;//����أ�����Ҫ��ʹ������Ķ��壬T��ʵ�����������SubType������
	...
};
���磺class Q{
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
template constructor �����ڸ�implicit(��ʽ�ĳ�ʼ��) copy constructor,�����ȫ�Ǻ�,
	implicit copy constructor �ͻᱻ����������������
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
�������͵���ʾ��ʼ����
template <class T>
void f()
{
	T x =T();//�����x��֤�ᱻ��ʼ��Ϊ0
	...
};
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

