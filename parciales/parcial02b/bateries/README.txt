Para compilar:

$ make

Para ejecutar

$ ./workingBateries

El programa workingBateries recibe el numero de baterias y la carga de
cada bateria por celda. Luego recibe descargas y en cada interacion
recibe el monto para descargar, el programa muestras el valor de las
baterias.  Y al final muestra cada una de las baterias que tiene con
la carga en cada una de las celdas y el valor total de todas las
baterias. Las iteraciones terminan con el valor de cero.

Este un ejemplo de ejecución vamos a crear dos baterias. La primera tiene una
carga de 20 distribuido 5 y 10. La segunda de 30 distribuidas en 10 y 20.
Se haran 3 descargas de 5, 10 y 15. A continuación la ejecución (el > es
añadido aqui para ver la salida del programa  pero no hace parte de la
ejecución del mismo).

$ ./workingBateries.exe 
2
5 10
10 20
5
> 13.3333 26.6667 
10
> 10 20 
15
> 5 10 
0
> 0: 1.66667 3.33333
> 1: 3.33333 6.66667 
> 15
