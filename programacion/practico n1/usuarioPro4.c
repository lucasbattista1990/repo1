/* Crea un programa que pida al usuario su código de usuario (un número entero) 
y su contraseña numérica (otro número entero),
 y no le permita seguir hasta que introduzca como código 1024 y como contraseña 4567.*/





int main (){

//asigno variables
int usuario = 1024,contrasenia=4567,contra,user;


//solicito ingreso de variables no fijas y indico al programa leerlas
printf("Digite el usuario luego la contrasenia : ");scanf("%i %i",&user,&contra);

//establezco condiciones 
while (user!=usuario || contra!=contrasenia)
{printf ("la contrasenia es incorrecta! \nPor favor Digite el usuario y la contrasenia correcta :");
scanf ("%i %i",&user,&contra);
}
if (user==usuario && contra ==contrasenia)
{printf("\t \t Bienvenido, se pudo logear con exito \n");
}
printf("\n");




return 0;
}