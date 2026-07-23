# Día 2 — Complejidad Algorítmica, Pilas, colas, set y map

## Objetivos

- Estimar si una solución alcanza para las restricciones del problema.
- Elegir entre pila, cola, conjunto o mapa según la operación dominante.
- Modelar procesos simples manteniendo el estado necesario y nada más.

## Apuntes

### Complejidad como filtro de ideas

La complejidad permite descartar soluciones antes de programarlas. Si `n` es pequeño, probar muchas posibilidades puede ser razonable; si `n` llega a cientos de miles, normalmente se necesita una solución lineal o casi lineal. La pregunta central es cuántas veces se procesa cada elemento.

### Pilas y colas

Una pila sirve cuando lo último que entra debe ser lo primero en salir, como deshacer operaciones o cerrar símbolos anidados. Una cola sirve cuando el orden de llegada debe respetarse, como simular turnos o expandir estados por capas. Ambas estructuras evitan manejar manualmente posiciones cuando el problema ya define un orden natural de procesamiento.

### Conjuntos

Un conjunto mantiene elementos únicos y permite preguntar rápidamente si algo existe. Es útil cuando importa pertenencia, duplicados o mantener valores ordenados para consultar extremos. La clave es que no guarda ocurrencias repetidas salvo que se use una variante multiconjunto.

### Mapas

Un mapa asocia claves con valores: frecuencias, posiciones, acumulados o estados. Se usa cuando el dato relevante no está naturalmente indexado por una posición pequeña. Antes de usarlo, conviene decidir qué representa la clave y qué información se quiere recuperar a partir de ella.

## Ejercicios

Ver [ejercicios del día](ejercicios/index.md).
