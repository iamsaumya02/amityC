  #include<stdio.h>
  void main()
{
	int n;
	printf("Enter the age of candidate:");
	scanf("%d",&n);
	if (n>=18)
		printf("candidate is eligible to vote %d \n",n);
	else
		printf("candidate is not eligible to vote %d \n",n);
}
