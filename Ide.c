#include <stdio.h>
int main(void) {
    int n,i,j;
    scanf("%d",&n);

for(i=1;i<=n;i++){

for(j=1;j<=n-i;j++)
printf("\t ");

for(j=1;j<=i;j++)
printf("%d\t",j);
for(j=i-1;j>=1;j--)
printf("%d\t",j);
printf("\n");
}
	return 0;
}

 	 	                           /* 1	
	 	 	 	 	 	 	 	 1	2	1	
	 	 	 	 	 	 	 1	2	3	2	1	
	 	 	 	 	 	 1	2	3	4	3	2	1	
	 	 	 	 	 1	2	3	4	5	4	3	2	1	
	 	 	 	 1	2	3	4	5	6	5	4	3	2	1	
	 	 	 1	2	3	4	5	6	7	6	5	4	3	2	1	
	 	 1	2	3	4	5	6	7	8	7	6	5	4	3	2	1	
	 1	2	3	4	5	6	7	8	9	8	7	6	5	4	3	2	1	
1	2	3	4	5	6	7	8	9	10	9	8	7	6	5	4	3	2	1	*/