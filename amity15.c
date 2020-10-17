  #include<stdio.h>
  void main()
{
	int a,b;
	printf("enter value for a,b");
	scanf("%d%d",&a,&b);
        a=a+b;
        b=a-b;
        a=a-b;
        printf("After swapping a=%d b=%d\n",a,b);
}

