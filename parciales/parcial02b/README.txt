Todas las carpetas tiene un archivo de Makefile.

También tiene dos archivos de prueba con extension .in y la salida
buena con extension .out.

Por ejemplo para el primer problema Intercalate.

Los ficheros son los siguientes:

$ ls
Makefile		doIntercalate01.in	doIntercalate02.out
README.txt		doIntercalate01.out	intercalate.cpp
doIntercalate.cpp	doIntercalate02.in	intercalate.h

Observe que hay dos ficheros con extension .in y otros dos con extension
.out. Los segundos son la salida correcta de los primeros.

Para probar un programa correcto haga así:

$ ./doIntercalate < doIntercalate01.in | diff - doIntercalate02.out

Si no hay mensajes el programa está bien.

Si hay tienen errores.

