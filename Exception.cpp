异常处理:注意，异常并不是错误，c++中异常的处理和错误的处理是不一样的！
class Error;
void f()
{
	...
	if(exception-condition) {
		throw Error();
	}
	...
};
eg:
int main()
{
	try{
		...
			f();
		...
	}
	catch (const Error&){
	... //handle exception
	}
}
可以使用异常规格(exception specification)来指明某个函数可能抛出哪些异常
void f() throw(bad_alloc);//f()只能抛出throw异常
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
standard exception classes 和auto_ptr类别
