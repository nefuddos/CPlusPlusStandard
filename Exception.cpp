�쳣����:ע�⣬�쳣�����Ǵ���c++���쳣�Ĵ���ʹ���Ĵ����ǲ�һ���ģ�
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
����ʹ���쳣���(exception specification)��ָ��ĳ�����������׳���Щ�쳣
void f() throw(bad_alloc);//f()ֻ���׳�throw�쳣
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
standard exception classes ��auto_ptr���
