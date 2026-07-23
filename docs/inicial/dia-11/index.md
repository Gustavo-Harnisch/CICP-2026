# Día 11 — Grafos II

## Objetivos

- Profundizar en problemas de grafos con más estructura que conectividad básica.
- Reconocer cuándo se necesita orden, distancias o procesamiento por componentes.
- Combinar recorridos con información adicional del problema.

## Apuntes

### Más allá de recorrer

Después de aprender DFS y BFS, muchos problemas exigen guardar información durante el recorrido: padre, distancia, color, tiempo de visita o componente. Esa información convierte una exploración simple en una herramienta para responder preguntas más específicas.

### Grafos dirigidos y no dirigidos

La dirección de las aristas cambia el significado de alcanzabilidad. En un grafo no dirigido, una conexión sirve en ambos sentidos; en uno dirigido, el orden importa y pueden aparecer vértices alcanzables desde un lado pero no desde el otro.

### Procesamiento por componentes

Agrupar vértices conectados permite resolver el problema por partes. Si no hay aristas entre dos grupos, muchas decisiones se pueden tomar independientemente. Esta idea reduce problemas grandes a varios subproblemas más simples.

### Distancias y estados

A veces el vértice no basta para representar una situación. Si el movimiento depende de una condición adicional, como paridad, recurso disponible o modo actual, el estado del recorrido debe incluir esa información para que BFS o DFS sean correctos.

## Ejercicios

Ver [ejercicios del día](ejercicios/index.md).
