#include<stdio.h>
int main()
	{
int I,P,D;
printf("qingshurudangyuelirunzhi\n");
scanf("%d",&I);
D=I/100000;
switch (D)
{case 0:
printf("%lf\n",0.1*I);break;
case1:
printf("%lf\n",0.075*(I-100000)+10000);break;
case 2:
printf("%lf\n",0.005*(I-200000)+17500);break;
case 3:
printf("%lf\n",0.003*(I-400000)+27500);break;
case 4:
printf("%lf\n",0.015*(I-600000)+33500);break;
default:printf("shurushujucuowu\n");
if(I>=1000000)
printf("%lf\n",P=0.01*(I-1000000)+39500);}
return 0;
} 