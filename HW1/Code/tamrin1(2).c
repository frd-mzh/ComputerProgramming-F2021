#include<stdio.h>
main() {
	int a,b,c,d,max,e,min;
	printf("please give me three integers:\n");
	scanf("%d%d%d",&a,&b,&c);
	d = a>=b ? a : b;
	max = d>=c ? d : c;
	e = a<=b ? a : b;
	min = e<=c ? e :c;
	printf("maximum number is %d\n",max);
	printf("minimum number is %d",min);
}

