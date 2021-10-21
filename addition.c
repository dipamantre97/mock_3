#include"header.h"

int addition(int x,int y)
{
int c;
while(y!=0)
{

c=x&y;
x=x^y;
y=c<<1;
}
return x;
}