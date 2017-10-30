#include<math.h>
#include<stdio.h>
int main()
{
	int m;
	int j;
	int s=0;
	FILE *fp;	
	fp=fopen("sushu_list.txt","w");
	if(fp!=NULL)
	for(m=2;m<=100000;m++)
	{
		for(j=2;j<=m;j++)
			if(m%j==0) break;
			if(j==m)	

				{
					s++;
					fprintf(fp,"%d\n",m);
					
				}			
	}
	printf("%d",s);

}
