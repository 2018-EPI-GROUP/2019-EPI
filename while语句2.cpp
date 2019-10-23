#include<stdio.h>

int main()                                 
£û

	int iSelect=1;                    
	while(iSelect!=0)                  
	£û
	
		printf("------Menu-------\n");
		printf("------Sell------1\n");
		printf("------Buy-------2\n");
		printf("---ShowProduct---3\n");
		printf("-----Out-------0\n");
		
		scanf("%d",&iSelect);      
		switch(iSelect)             
		{
		case1£º
			printf("you are buying something into store\n");
			break;
		case2:
			printf("you are selling to consumer\n");
			break;
		case3£º
			printf£¨"checking the store\n"£©;
		case0;
			printf("the Program is out\n");
			break;
		default:                                  
			printf("You put a wrong selectiong\n");
		}
	}
	return 0;
}

