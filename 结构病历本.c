#include<stdio.h>
#include<string.h>
struct patient
{
	int num;
	char name[5];
	char py[10];
};
void readin(struct patient *p)
{
	int i=0;
	while(i<5)
	{
		printf("NO.%d\n",i+1);
		scanf("%d,%s,%s\n",&p[i].num,p[i].name,p[i].py);
		i++;
	}
}
void search(struct patient *p,char *x)
{	int i;
	for(i=0;i<5;i++)
		if(strcmp(x,p[i].name)==0)
		{
			printf("num:%d,name:%s,py:%s",p[i].num,p[i].name,p[i].py);
			break;
		}
		if(i>=5)
			printf("NO FOUND");	
}
int main()
{
	struct patient s1,*p;
	p=&s1;
	readin(&s1);
	char name[5];
	printf("ÊäÈëĞÕÃû£º");
	scanf("%s",name);
	search(&s1,name);
	return 0;
}








