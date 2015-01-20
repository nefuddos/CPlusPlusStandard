namespace 和类类似，一个namespace里面可有有多个类，
作用是区别类名的冲突
namespace ren{
	class classname
	{
		...
	};
	void function();
}
用的时候，可以这样
int main()
{
	ren::classname obj;
	ren::function()
}
如果使用using namespace ren;会使得ren名称空间里面的类和方法以及变量全部曝光

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~···
implicit and explicit

eg:
class Stack
{
	explicit Stack(int size);
};
Stack s;
s(40);//accept 这里是显示的转换
s = 40 ; //error 这里是隐式的转换

