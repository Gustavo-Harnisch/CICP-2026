# Día 1 — C++

## Objetivos

- Reconocer la estructura básica de un programa en C++ para competencias.
- Usar entrada, salida, tipos de datos y contenedores simples con seguridad.
- Traducir una idea directa de solución a código claro y verificable.

## Apuntes

### Programa base para competir

En programación competitiva interesa que el programa sea corto de escribir, fácil de depurar y suficientemente eficiente. La estructura mínima separa la lectura de datos, el procesamiento y la impresión de la respuesta. Aunque muchos ejemplos caben completos en `main`, conviene acostumbrarse a identificar qué parte del código representa la idea central del problema.

### Tipos de datos y límites

Elegir el tipo correcto evita errores silenciosos. `int` sirve para cantidades pequeñas o índices, mientras que `long long` es la opción natural cuando aparecen productos, sumas acumuladas o valores cercanos a mil millones. Antes de implementar, hay que mirar las restricciones y estimar el mayor valor posible durante el cálculo, no solo en la entrada.

### Contenedores básicos

`vector`, `string`, `pair` y arreglos permiten modelar la mayoría de los primeros problemas. La decisión importante no es memorizar métodos, sino entender qué operación se necesita: recorrer todo, acceder por posición, guardar pares de datos o acumular una respuesta.

### Lectura cuidadosa del enunciado

Muchos errores iniciales no vienen de C++, sino de interpretar mal el formato de entrada o los casos borde. Conviene revisar si hay múltiples casos, si los índices son desde cero o desde uno, y qué debe imprimirse exactamente cuando la respuesta es negativa, vacía o única.

## Ejercicios

Ver [ejercicios del día](ejercicios/index.md).
