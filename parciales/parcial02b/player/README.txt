Para compilar:

$ make

Para ejecutar:

$ ./gameSimulator

El programa lee el numero de vidas, balas, nivel de armadura y factor

La entradas son los siguientes eventos:
1 -> Establecer vida necesita el numero de vidas.
2 -> Establecer nivel de armadura require argumento.
3 -> Establecer nivel de carga require argumento.
4 -> Abaleado (no require argumento)
5 -> Jugador dispara.
6 -> Termina

Un ejemplo de un juego simple (1 vida, 10 balas, 2 armadura, 1 factor).
A jugador se le dispara dos veces 

$ ./gameSimulator
1 10 2 1
4
4
6
player is: dead
lifes: 0
armor: 0
bullets: 10
