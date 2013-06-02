//
//
//
int n;
int count;
int i=2;
int result;

int main()
{
   printf("Enter the integer of the prime number you need:");
   scanf("%d",&n);
   printf("\nCalculating...\n");
   while(count!=n)
   {
      if(check_prime(i))
      {
         printf("%d\t",i);
         count++;
      }
      i++;

   }
   printf("\nAnswer:%d\n",i-1);
   return 0;
}

int check_prime(int a)
{
   int c;
 
   for ( c = 2 ; c <= a - 1 ; c++ )
   { 
      if ( a%c == 0 )
    return 0;
   }
   if ( c == a )
      return 1;
}