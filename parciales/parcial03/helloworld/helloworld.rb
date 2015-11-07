
# implemente la funcion isHelloWorld que
# identifique si las palabras Hello World
# en cualquier formato de mayusculas y minusculas
# contiene Hello World

def isHelloWorld(a)
  lower = a.downcase
  /^hello world.*/ === lower
end
