lexical.l	->	flex源文件
syntax.y	->	bison源文件
parser		->	可执行文件，即词法分析与语法分析程序

try.cmm		->	用来测试INT型范围判断功能的的测试文件
test/		->	实验指导书中的测试用例：
				1.opt开头表示选做的测试用例
				2.a/opt_a表示a类错误
				3.b/opt_b表示b类错误
				4.c/opt_c表示正确
				5.e/opt_e表示与浮点数有关
				6.最后的数字表示实验指导书中的顺序

其他		->	中间文件
