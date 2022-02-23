#include<stdio.h>
int main()
{
  int row_size,out,in,p;
  scanf("%d",&row_size);
  for(out=row_size;out>=1;out--)
  {
   for(in=row_size;in>=1;in--)
    printf("%d ",in);

        printf("
");
  }
  return 0;
}