#include<stdio.h>
#define MIX 21

struct name {
	char first[MIX];
	char middle[MIX];
	char last[MIX];
};
struct member {
	char number[MIX];
	struct name n;
};
int main(void)
{
	struct member f[2] = {
		{"20003918",
		{"aaa","fefa","ffex"}
		},
	{"34432444",{"fef","0","fefvv"}}
	};
	for (int x = 0; x < 2; x++)
	{
		if (f[x].n.middle[0] != '0')
			printf("%s, %s %c.\n", f[x].n.first, f[x].n.last, f[x].n.middle[0]);
		else
			printf("%s, %s\n", f[x].n.first, f[x].n.last);
	}

	return 0;
}