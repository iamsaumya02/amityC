  #include<stdio.h>
  void main()
{
	int a,b,c;
	printf("enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b && a>c)
        printf("%d is greater number",a);
	
		else if (b>a && b>c)
          printf("%d is the greater number",b);
	
	else
		printf("%d is the greater number",c);

} 
