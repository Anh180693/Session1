#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	float y = b*b - 4*a*c;
	if(a==0)
	{
		if(b==0 && c==0)
		{
			printf("Phuong trinh vo so nghiem");
		}
		if(b==0 && c!=0)
		{
			printf("Phuong trinh vo nghiem");
		}
		if(b!=0 && c!=0)
		{
			printf("Phuong trinh co nghiem %f",-c/b);
		}
	}
	else
	{
		if(y<0)
		{
			printf("Phuong trinh vo nghiem");
		}
		if(y==0)
		{
			printf("Phuong trinh co nghiem %f",-b/2*a);
		}
		if(y>0)
		{
			printf("Phuong trinh co 2 nghiem %f va %f ",(-b+sqrt(y))/(2*a),(-b-sqrt(y))/(2*a));
		}
	}
	return 0;
}
