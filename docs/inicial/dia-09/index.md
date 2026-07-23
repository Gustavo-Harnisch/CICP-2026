# Día 9 — Grafos I

## Objetivos

- Modelar relaciones entre objetos mediante vértices y aristas.
- Recorrer grafos con DFS o BFS según el tipo de información buscada.
- Resolver conectividad, componentes y distancias no ponderadas.

## Apuntes

### Modelamiento

Un grafo aparece cuando hay entidades conectadas por relaciones: ciudades y caminos, personas y amistades, estados y movimientos. La parte más importante es decidir qué será un vértice y qué significa una arista. Un mal modelamiento suele complicar todo el problema.

### Representación

La lista de adyacencia es la representación habitual cuando el grafo puede ser grande y cada vértice se conecta con pocos vecinos. Permite recorrer solo las aristas existentes, lo que hace que el costo dependa de vértices más aristas.

### DFS

La búsqueda en profundidad explora siguiendo un camino hasta no poder avanzar y luego retrocede. Sirve para marcar componentes, detectar estructura recursiva y procesar subárboles o dependencias cuando el orden exacto por distancia no importa.

### BFS

La búsqueda en anchura avanza por capas. En grafos sin pesos, esto entrega distancias mínimas en cantidad de aristas desde un origen. Es la herramienta natural cuando el problema pregunta por el menor número de movimientos equivalentes.

## Ejercicios

Ver [ejercicios del día](ejercicios/index.md).
