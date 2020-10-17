   #include<stdio.h>
   void main()
  {
	  int a,b,tv;
	  printf("Enter the value of both:");
	  scanf("%d%d",&a,&b);
	  tv=a;
	  a=b;
	  b=tv;
	  printf("After swapping \n a=%d b=%d \n",a,b);
  }
