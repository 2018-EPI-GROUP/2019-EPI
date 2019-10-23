#include<stdio.h>
#include<string.h>

int main (int argc, char *argv[])
{
	if(argc != 3)
	{
		printf("erro: ./a.out src dst\n");
		return 0;	
	}
	FILE *rfp = fopen(argv[1], "r"); 
	FILE *wfp = fopen(argv[2], "w"); 
	

	char *buf[1024];
	while(1)
	{
		int ret;
		ret = fread(buf, 1, sizeof(buf), rfp);		
		if(ret == 0)
		break;	
		fwrite(buf, 1, ret, wfp);
	}

	fclose(rfp); 
	fclose(wfp); 
	return 1;
}
