namespace �������ƣ�һ��namespace��������ж���࣬
���������������ĳ�ͻ
namespace ren{
	class classname
	{
		...
	};
	void function();
}
�õ�ʱ�򣬿�������
int main()
{
	ren::classname obj;
	ren::function()
}
���ʹ��using namespace ren;��ʹ��ren���ƿռ��������ͷ����Լ�����ȫ���ع�

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~������
implicit and explicit

eg:
class Stack
{
	explicit Stack(int size);
};
Stack s;
s(40);//accept ��������ʾ��ת��
s = 40 ; //error ��������ʽ��ת��

