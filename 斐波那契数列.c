int Fibon1(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return Fibon1(n - 1) + Fibon1(n - 2);
	}
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fibon1(n);
	printf("ret=%d", ret);
	return 0;
}
