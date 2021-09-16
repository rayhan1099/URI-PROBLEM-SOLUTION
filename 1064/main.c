#include <stdio.h>
#include <stdlib.h>

main()
{
	float n;
	int i, k = 0;
	float j = 0;

	for(i = 1; i <= 6; i++){
		scanf("%f",&n);

		if(n>0){
			j= j+ n;
			 k= k + 1;
		}
	}
	printf("%d valores positivos\n",k);
	printf("%.1f\n",j/k);

}
