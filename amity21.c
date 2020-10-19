  #include<stdio.h>
  void main()
  {
	  int a,b;
	  printf("Enter two number:");
	  scanf("%d%d",&a,&b);
	  switch(a>b)
	  {
		  case 0:
		  printf("maximun number is %d \n",a);
	          break;
	 
	          case 1:
		  printf("maximum number is %d \n",b);
		  break;
		  default:
		  printf("both numbers are same \n");

 }
  }
