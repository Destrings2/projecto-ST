Para compilar:
$ make

Para ejecutar:

$ ./doIntercalate < doIntercalate01.in

Primera prueba:

$ cat doIntercalate01.in
3
4 1
1 2 3 4
5 6 7 8
4 2
1 2 3 4
5 6 7 8
4 4
1 2 3 4
5 6 7 8

El programa recibe 3 operaciones de intercalación.

La primera recibe dos arreglos de 4 elementos cada uno
y un factor de intercalacion 1.

Arreglo1: 1 2 3 4
Arreglo2: 5 6 7 8
Resultado: 6 1 8 3

La segunda recibe dos arreglos de 4 elementos cada uno
y un factor de intercalacion 2.

Arreglo1: 1 2 3 4
Arreglo2: 5 6 7 8
Resultado: 7 8 1 2

La tercera recibe dos arreglos de 4 elementos cada uno
y un factor de intercalacion 4.

Arreglo1: 1 2 3 4
Arreglo2: 5 6 7 8
Resultado: 5 6 7 8





