#include <stdio.h>
int main() {
     int a=13,b=24,c=a+b;
     printf("%d + %d = %d\n",a,b,c);
     return 0;

     int a,b,c;
     printf("Enter the first number");
     scanf("%d",&a);
     printf("Enter the second number");
     scanf("%d",&b);
     c=a+b;
     printf("%d + %d = %d\n",a,b,c);
     return 0;

     Exercise
     int d,e,f;
     int sum,average;
     printf("Enter the first number\n");
     scanf("%d",&d);
     printf("Enter the second number\n");
     scanf("%d",&e);
     printf("Enter the third number\n");
     scanf("%d",&f);
     sum=d+e+f,average=(sum)/3;
     printf("The sum is:%d\n",sum);
     printf("The average is:%d\n",average);
     return 0;

     // Operation signs
     int i,j;
     int sum,dif,multi;
     printf("Enter the first number\n");
     scanf("%d",&i);
     printf("Enter the second number\n");
     scanf("%d",&j);

     sum = i+j;
     printf("The sum is: %d\n",sum);
     dif = i-j;
     printf("The difference is: %d\n",dif);

     if (j!=0) {
         float div = (float) (i/j);
         printf("The quotient is: %.2f\n",div);
     }else {
         printf("The number cannot be divide by zero\n");
     }
     multi = i*j;
     printf("The product is: %d\n",multi);

     return 0;

     int a,b;
     printf("Enter the two integers\n");
     scanf("%d %d",&a,&b);
     if (a>b) {
         printf("%d is bigger than %d\n",a,b);
     }
     else {
         printf("%d is bigger than %d\n",b,a);
     }

     int m,sum=0;
     printf("Enter the value of m\n");
     scanf("%d",&m);

     for (int i = 1; i <=m; ++i) {
         sum+=i;
     }
     printf("The sum is: %d",sum);


}

