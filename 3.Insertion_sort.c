          //GRESHMA SHAJI
          //ROLL NO:24

#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5],i,key,j;
  clrscr();
  printf("enter the size of the array: ");
  scanf("%d",&n);
  printf("enter the elements of the array: ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    key=a[i];
    j=i-1;
  }
  a[j+1]=key;
  printf("the sorted array is:");
  for(i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }
  getch();
  }
output:
enter the size of the array: 2
enter the elements of the array: 
2
3
the sorted array is: 
the sorted array is: 23
