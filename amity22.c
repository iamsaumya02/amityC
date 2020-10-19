  #include<stdio.h>
  void main()
  {
	  int n;
	  printf("enter the value:");
	  scanf("%d",&n);
	  switch(n%2)
	  {
		  case 0:
			  printf("%d is the even number",n);
			  break;
		 case 1:
		        printf("%d is the odd number",n);
	                break;
	         }
  }	  
