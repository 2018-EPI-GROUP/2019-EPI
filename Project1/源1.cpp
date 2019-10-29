static unsigned long int next = 1;//无符号long整数型，static变量无外部链接、具有内部链接和文件作用域

unsigned int rand0(void)
{
	next = next * 1103515245 + 12345;
	return (unsigned int)(next / 65536) % 32768;//生成伪随机数
}