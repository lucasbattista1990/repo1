#include <stdio.h>
#include <string.h>
 
typedef struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} libro;

/* function declaration */
void printBook( struct Books book );

int main( ) {

   // struct Books Book1;        /* Declare Book1 of type Book */
   struct Books Book2;        /* Declare Book2 of type Book */
   libro Book1;
 
   /* book 1 specification */
   scanf( "%s", &Book1.title ); 
   // strcpy( Book1.title, "C Programming");
   strcpy( Book1.author, "Nuha Ali"); 
   strcpy( Book1.subject, "C Programming Tutorial");
   Book1.book_id = 6495407;

   /* book 2 specification */
   strcpy( Book2.title, "Telecom Billing");
   strcpy( Book2.author, "Zara Ali");
   strcpy( Book2.subject, "Telecom Billing Tutorial");
   Book2.book_id = 6495700;
 
   /* print Book1 info */
   printBook( Book1 );

   /* Print Book2 info */
   printBook( Book2 );

   return 0;
}


void printBook( struct Books libro ) 
{
   printf( "Book title : %s\n", libro.title);
   printf( "Book author : %s\n", libro.author);
   printf( "Book subject : %s\n", libro.subject);
   printf( "Book book_id : %d\n", libro.book_id);
}