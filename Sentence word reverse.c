#include<stdio.h>
void recurse(char a[],int n)
{
   int st=n;                // starting index
   int i;
   int en=st;               // ending index
   while(1)
   {
      if(a[en]=='\0')
         break;               // base condition
      else if(a[en]==' ')
      {
         recurse(a,en+1);     //recursive call if word ended
         break;
      }
      else
         en++;               // incrementing index if it is character
   }
   for(i=st;i<=en;i++)
   {
      printf("%c",a[i]);      // printing the word
   }
}
void main()
{
   char s[50];
   printf("Enter a sentence:");
   gets(s);
   recurse(s,0);            //call
}
