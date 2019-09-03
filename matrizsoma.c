#include <stdio.h>
int main()
{
	int m[3][3],i,j,n[3][3],soma,k,mult[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&m[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&n[i][j]);
		}
	}
	soma=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				soma=soma+m[i][k]*n[k][j];
			}
	mult[i][j]=soma;
	soma=0;
}
}	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",mult[i][j]);
}	printf("\n");
}
	return 0;
}
	
