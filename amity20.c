 #include<stdio.h>
 void main()
 {
	 int p,c,m,t;
	 printf("enter the sunject marks respectively:");
	 scanf("%d%d%d",&p,&c,&m);
	 t=p+c+m/3;
	 if (p>=55 && c>=50 && m>=65 && t>=180)
		 printf("student is eligible to take admission in Amity");
	 else 
		 printf("Student is not eligible to take admission in Amity");
 }

		 
