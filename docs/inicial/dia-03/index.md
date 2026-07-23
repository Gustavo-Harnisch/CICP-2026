# Día 3 — Sorting, greedy y Búsqueda binaria

## Objetivos

- Reconocer cuándo ordenar simplifica la estructura del problema.
- Justificar decisiones greedy mediante una observación local correcta.
- Aplicar búsqueda binaria sobre respuestas o posiciones monotónicas.

## Apuntes

### Ordenar para revelar estructura

Ordenar cambia el problema: junta valores parecidos, permite comparar vecinos y hace visibles los extremos. Muchas soluciones aparecen después de ordenar porque una decisión que parecía global se reduce a mirar prefijos, sufijos o pares consecutivos.

### Greedy

Una solución greedy toma decisiones paso a paso sin retroceder. Funciona cuando existe una razón por la que elegir lo mejor localmente no perjudica una solución óptima futura. No basta con que la estrategia parezca natural: hay que identificar una propiedad de intercambio, dominancia o conservación que la haga segura.

### Búsqueda binaria

La búsqueda binaria no es solo para arreglos ordenados. También sirve cuando las respuestas posibles tienen una frontera: hasta cierto punto algo es posible y después deja de serlo, o al revés. En esos casos se escribe una función que responda si un valor candidato cumple la condición, y la búsqueda encuentra la frontera.

### Errores frecuentes

Los problemas de búsqueda binaria fallan mucho por límites mal elegidos o ciclos que no terminan. Conviene definir con precisión qué significa cada extremo del intervalo y probar casos mínimos, máximos y respuestas ubicadas justo en la frontera.

## Ejercicios

Ver [ejercicios del día](ejercicios/index.md).
