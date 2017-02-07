#include<stdio.h>
#include<conio.h>
main()
{
 FILE *fp;
 char ch;
 int array[1000];
int c=0;
 fp = fopen("one.txt", "w");

 int i, n;
   time_t t;

   n = 1000;


   srand((unsigned) time(&t));

   for( i = 0 ; i < n ; i++ )
   {
      printf("%d\n", rand() % 500);
        array[c]=rand();
      c++;
   }

 fclose(fp);

 fp = fopen("one.txt", "r");

fclose(fp);



  for (c = 0 ; c <n; c++) {
    int d = c;

    while ( d > 0 && array[d] < array[d-1]) {
      t          = array[d];
      array[d]   = array[d-1];
      array[d-1] = t;

      d--;
    }
  }

  printf("Sorted list in ascending order:\n");

  for (c = 0; c <n; c++) {
    printf("%d\n", array[c]);
  }


  }

