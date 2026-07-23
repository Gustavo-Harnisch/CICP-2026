# Día 5 — Sqrt tricks y Algoritmos offline

## Objetivos

- Aplicar descomposición por raíz para equilibrar actualizaciones y consultas.
- Distinguir problemas que pueden resolverse offline sin respetar el orden original.
- Ordenar consultas para reutilizar trabajo entre respuestas consecutivas.

## Apuntes

### Descomposición por raíz

La idea de los sqrt tricks es partir los datos en bloques de tamaño cercano a la raíz del total. Así, una operación puede combinar trabajo directo dentro de un bloque pequeño con información precalculada para bloques completos. El equilibrio aparece porque hay pocos bloques y cada bloque es manejable.

### Consultas offline

Un algoritmo offline procesa todas las consultas después de leerlas. Esto permite reordenarlas si la respuesta no depende de contestar en el orden original. Al final, se guardan los resultados con su índice original para imprimirlos correctamente.

### Reutilizar estado

Técnicas como ordenar consultas por bloque buscan que dos consultas consecutivas sean parecidas. Si el estado cambia poco entre una y otra, se evita recalcular desde cero. El beneficio depende de que agregar o quitar elementos del estado sea barato.

### Cuándo usarlo

Estas ideas sirven cuando una solución directa por consulta es demasiado lenta, pero hay estructura repetida entre consultas. Son especialmente frecuentes en rangos, frecuencias, conteos y problemas donde las actualizaciones pueden acumularse por bloques.

## Ejercicios

Ver [ejercicios del día](ejercicios/index.md).
