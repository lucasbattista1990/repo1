/*4) Escribir un programa que para una fecha ingresada por un usuario (año, mes, día)  determine: 
a) Si es una fecha válida. 
b) Si el año es bisiesto o no. 
c) La cantidad de días que faltan para fin de mes. 
Nota: un año es bisiesto si es un número divisible por 4, pero no si es divisible por 100, excepto  que también sea divisible por 400.
*/

 #include <stdio.h>

main()
{
    int idia;
    int imes;
    int ianio;


    printf( "\n   Introduzca dia: " );
    scanf( "%d", &idia );                

    printf( "\n   Introduzca mes: " );    
    scanf( "%d", &imes );                 

    printf( "\n   Introduzca a%co: ", 164 );   
    scanf( "%d", &ianio );                     

    if ( imes >= 1 && imes <= 12 )        
    {                                    
        switch ( imes )
        {
            case  1 :
            case  3 :
            case  5 :
            case  7 :
            case  8 :
            case 10 :
            case 12 : if ( idia >= 1 && idia <= 31 )            
                          printf( "\n   FECHA CORRECTA \n" );   

                      else

                          printf( "\n   FECHA INCORRECTA \n" );
                        
                      break;

            case  4 :
            case  6 :
            case  9 :
            case 11 : if ( idia >= 1 && idia <= 30 )               
                          printf( "\n   FECHA CORRECTA \n" );      

                      else

                          printf( "\n   FECHA INCORRECTA \n" );

                      break;

            case  2 : if ( ianio % 4 == 0 && ianio % 100 != 0 || ianio % 400 == 0 )
                                                                                    
                          if ( idia >= 1 && idia <= 29 )
                              printf( "\n   FECHA CORRECTA \n" );
                                                        
                         else
                              printf( "\n   FECHA INCORRECTA \n" );
                      else
                          if ( idia >= 1 && idia <= 28 )
                              printf( "\n   FECHA CORRECTA \n" );
                          else
                              printf( "\n   FECHA INCORRECTA \n" );
        }
    }
    else
        printf( "\n   FECHA INCORRECTA\n" );

    if( (ianio % 4 == 0 && ianio % 100 != 0) || (ianio % 400 == 0 ))   
    
    {
        printf ("\n El a%co introducido es un a%co bisiesto \n",164,164);
    
    }
    
    else
          
      printf ("\n EL a%co introducido no es bisiesto\n",164);

 
  if ( imes >= 1 && imes <= 12 )         
    {                                  
        switch ( imes )
        {
            case  1 :
            case  3 :
            case  5 :
            case  7 :
            case  8 :
            case 10 :
            case 12 : if ( idia <=31 )
                          idia=31-idia;

                          printf( "\n FALTAN %i DIAS PARA QUE TERMINE EL MES   \n", idia );

                                             
                      break;

            case  4 :
            case  6 :
            case  9 :
            case 11 : if  ( idia <=30 )

                          idia=30-idia;

                          printf( "\n FALTAN %i DIAS PARA QUE TERMINE EL MES   \n", idia );


                      break;
            case 2:  if ((ianio % 4 == 0 && ianio % 100 != 0) || (ianio % 400 == 0)) 
                                                                                     
                                                 
                         printf( "\n FALTAN %i DIAS PARA QUE TERMINE EL MES   \n",idia=29-idia );
                    else
                        
                        printf( "\n FALTAN %i DIAS PARA QUE TERMINE EL MES  \n",idia= 28-idia );


        }
    }
    return 0;
}