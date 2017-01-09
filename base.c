#include	<stdio.h>
#include	<stdlib.h>
char *s = NULL;
char *base(int base,int num)
{
	char p[32] = { 0 };
	s = &p[32];
	*s = '\0';
	do {
	*--s = "0123456789abcdef"[num%base];
	num = num /base;
	} while ( num > 0);
	printf("%s\n",s);
//	printf("\n");
	return s;
}
int main(void)
{
	printf("%s\n",base(2,128));
	printf("%s\n",base(8,128));
	printf("%s\n",base(16,2016));
	printf("%s\n",base(10,1234));
}

