#include<stdio.h>
int main(){

  int n;
  scanf("%d",&n);

  double a,b,c,x,y,z,avg=9999.9999;

  for (int i = 0; i < n; i++)
  {
     scanf("%lf %lf %lf",&a,&b,&c);

     double sum = a+b+c;
     double temp_avg = sum/3.00;

     if( temp_avg < avg){

      avg = temp_avg;
      x=a;
      y=b;
      z=c;
     }
  }

  printf("%.2lf\n",avg);
  printf("%.1lf %.1lf %.1lf\n",x,y,z);
  


  return 0;
}