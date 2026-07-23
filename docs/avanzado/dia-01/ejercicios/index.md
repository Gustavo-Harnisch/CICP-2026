# Ejercicios — Día 1

## 0 — Can You Drink

**Link:** Link Codeforces del problema

### Idea (sin código)

El problema recibe una edad y debe clasificarla. Si la edad no parece realista, se considera una entrada de broma. Si la edad es válida, basta separar entre menor de edad y mayor de edad.

### Conceptos clave a revisar

- **Algoritmo ad hoc:** solución construida específicamente para este problema, sin usar una técnica clásica como grafos, programación dinámica o estructuras avanzadas.
- **Clasificación por casos:** técnica de separar la entrada en rangos o categorías excluyentes para decidir una respuesta.
- **Condicionales independientes:** uso de condiciones que cubren casos distintos sin superponerse.

### Conceptualización técnica

La solución usa condicionales independientes para cubrir tres rangos que no se superponen.

1. Leer la edad.
2. Si la edad es menor o igual a `0`, o mayor que `100`, imprimir que la persona esta troleando.
3. Si la edad está entre `1` y `17`, imprimir que es menor de edad.
4. Si la edad está entre `18` y `100`, imprimir que es mayor de edad.

**Complejidad:** `O(1)` tiempo y `O(1)` memoria.

### Solución

```cpp
--8<-- "snippets/avanzado/dia-01/0_can_you_drink.cpp"
```
