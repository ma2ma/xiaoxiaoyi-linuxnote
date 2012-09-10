#PATH环境变量

##添加环境变量
	1.零时添加环境变量(_关闭shell,还原PATH环境变量_)
	PATH=$PATH:user/bin
	2.修改profile文件(attention:重启生效)
	$vi /etc/profile 
	在里面加入:
	export PATH="$PATH:." 		
	3.修改.bashrc文件(attention:重启生效)
	$vi /root/.bashrc 
	在里面加入： 
	export PATH="$PATH:/my_new_path" 
##显示环境变量
	$ echo $PATH
##显示所有环境变量
	$ env	
##显示所有本地定义的Shell变量
	$ set
##设置环境变量
	$ export HELLO=”Hello!”
	$ echo $HELLO
##清除环境变量
	$ export TEST=”test” 	#增加一个环境变量TEST
	$ env | grep TEST 	#此命令有输出，证明环境变量TEST已经存在了
	TEST=test
	$ unset $TEST #删除环境变量TEST
	$ env | grep TEST #此命令无输出，证明环境变量TEST已经存在了
##设置只读变量
	如果使用了readonly命令的话，变量就不可以被修改或清除了。示例如下：
	$ export TEST=”Test…” #增加一个环境变量TEST
	$ readonly TEST #将环境变量TEST设为只读
	$ unset TEST #会发现此变量不能被删除
	-bash: unset: TEST: cannot unset: readonly variable
##用C程序来访问和设置环境变量
	对于C程序的用户来说，可以使用下列三个函数来 设置 或访问一个环境变量。
	getenv()访问一个环境变量。输入参数是需要访问的变量名字，返回值是一个字符串。如果所访问的环境变量不存在，则会返回NULL。
	setenv()在程序里面 设置 某个环境变量的函数。
	unsetenv()清除某个特定的环境变量的函数。
	另外，还有一个指针变量environ，它指向的是包含所有的环境变量的一个列表。下面的程序可以打印出当前运行环境里面的所有环境变量

	#include <stdio.h>
	extern char**environ;
	int main ()
	{
		char**var;
		for (var =environ;*var !=NULL;++var)
			printf (”%s \n “,*var);
		return 0;
	}	
##注意
最好不要把当前路径”./”放到 PATH 里，这样可能会受到意想不到的攻击。完成后	
