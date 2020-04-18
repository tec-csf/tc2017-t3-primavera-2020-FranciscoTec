# Tarea *[Tarea 3]*. *[Tecticas de diseño de algoritmos]*

---

##### Integrantes:
1. *[Francisco Acuña Franco]* - *[A01027294]* - *[CSF]*


---
## 1. Aspectos generales

Las orientaciones de la tarea se encuentran disponibles en la plataforma **Canvas**.

Este documento es una guía sobre qué información debe entregar como parte de la tarea, qué requerimientos técnicos debe cumplir y la estructura que debe seguir para organizar su entrega.


### 1.1 Requerimientos técnicos

A continuación se mencionan los requerimientos técnicos mínimos de la tarea, favor de tenerlos presente para que cumpla con todos.

* El código debe desarrollarse en C++, cumpliendo con el último estándar [C++17](https://isocpp.org/std/the-standard).
* Toda la programación debe realizarse utilizando Programación Genérica.
* Deben utilizarse las [C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md).
* Todo el código debe estar correctamente documentado, siguiendo los lineamientos que aparecen en [Documenting C++ Code](https://developer.lsst.io/cpp/api-docs.html).
* Todo el código de la tarea debe alojarse en este repositorio de GitHub.
* Debe configurar su repositorio para que utilice el sistema de Integración Continua [Travis CI](https://travis-ci.org/).

### 1.2 Estructura del repositorio

El proyecto debe seguir la siguiente estructura de carpetas:
```
- / 			        # Raíz del repositorio
    - README.md			# Archivo con la información general de la actividad (este archivo)
    - sources  			# Códigos fuente con la solución
    - examples			# Archivos de ejemplo que pueden utilizarse para verificar que la solución funciona.
```

## 2. Solución

*[El primer problema donde se utiliza un algoritmo ávido. EL algoritmo divide un numero x entre las denominaciones de del sistema de monedas que se utiliza. En este caso se hace la sunción de que se utiliza el sistema de monedas mexicano con valores de 10, 5, 2 y 1. Partiendo del hecho de que las máquinas de monedas no aceptan monedas de 10, 20 y 50 centavos solo números enteros. El algoritmo primero divide el numero entre cada uno de los elementos guardados el vector monedas que contiene los valores de monedas del sistema. Posteriormente los guarda en el vector solución que contiene cuantas monedas de que denominación. Esto lo hace usando los mismos índices que los de el vector monedas. Posteriormente igual x al residuo de la división x%monedas(n) para obtener cuantas monedas sobran de habiendo utilizado la cantidad más grande previa. De esa manera se garantiza que obtendrán la cantidad mínima de monedas porque se divide entre la cantidad más grande monedas siempre. Este algoritmo tiene un orden de complejidad O(n) ya que los ciclos con los que se hacen las divisiones están en función de cuantas monedas haya en el sistema de monedas y eso depende de cuantas monedas se pongan en arreglo de monedas en el método cambio.]*

*[El segundo problema se resuelve con un algoritmo que funciona dividiendo en mitad los arreglos. El problema funciona en partes la primera parte de la función encontrarMedio ´recibe un valor entero que es el tamaño de los arreglos X e Y que se usaran para el problema. Después se utiliza el método srand() y rand() para generar números aleatorios para llenar los arreglos X e Y. Posteriormente son ordenados utilizando sort(). Al finalizar eso, se combinan los dos arreglos en un solo algoritmo merged[] que posteriormente es ordenado utilizando sort() una vez más. Para finalizar se imprimen ambos los 3 arreglos junto con sus medianas que son calculadas dividiendo los arreglos utilizando la formula (k+1)/2 sin embargo en el código se omite el +1 porque naturalmente el tamaño de un arreglo es su índice mayor+1. El orden de complejidad de este algoritmo también seria O(n) porque todas las operaciones están hechas con base en el tamaño de los arreglos que es definido por el usuario.]*

### 2.1 Pasos a seguir para utilizar la aplicación

*1.- Abrir la terminal.*

*2.- Acceder al directorio donde sera clonado el repositorio*

*3.- Usar el comando "git clone" con el link del repositorio: https://github.com/tec-csf/tc2017-t3-primavera-2020-FranciscoTec.git.*

*4.- Acceder a la carpeta del repositorio desde la terminal.*

*5.- E la carpeta del repositorio acceder a la carpeta sources.*

*-Monedas.*

*6.- Para ejecutar el programa monedas: "g++ Monedas.cpp -o Monedas".*

*7.- Despues de compilarlo ejecutarlo con "./Monedas despues el programa le pedira al usuario entrar la cantidad de que sera convertidad a monedas.*

*-Vectores.*

*6.- Para ejecutar el programa monedas: "g++ Vectores.cpp -o Vectores".*

*7.- Despues de compilarlo ejecutarlo con "./Vectores (la cantidad de monedas es fija en el metodo si quisiera usar otro sistema de monedas se debe cambiar el arreglo y en algunos caasos cambiar partes del codigo).*


## 3. Referencias

*1.- GeeksforGeeks. rand() and srand() in c/c++. [online] Recuperado de: https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/*

*2.- GeeksforGeeks. std::sort() in C++ STL. [online] Recuperado de: https://www.geeksforgeeks.org/sort-c-stl/*

*3.- cplusplus.com. sort(). [online] Recuperado de: http://www.cplusplus.com/reference/algorithm/sort/*

*4.- cplusplus.com. rand(). [online] Recuperado de: http://www.cplusplus.com/reference/cstdlib/rand/*


