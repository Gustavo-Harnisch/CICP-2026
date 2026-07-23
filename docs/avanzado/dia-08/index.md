# Día 8 — Teoría de Juegos

## Objetivos

- Modelar juegos imparciales mediante estados y movimientos válidos.
- Determinar posiciones ganadoras y perdedoras usando recurrencias.
- Aplicar ideas de Grundy cuando el juego se divide en componentes independientes.

## Apuntes

### Estados ganadores y perdedores

En muchos juegos de dos jugadores con información perfecta, un estado es ganador si existe un movimiento hacia un estado perdedor. Es perdedor si todos los movimientos llevan a estados ganadores. Esta definición recursiva permite razonar desde estados terminales hacia atrás.

### Juegos imparciales

Un juego imparcial es aquel donde ambos jugadores tienen los mismos movimientos disponibles desde un estado. En ese contexto, lo relevante no es quién juega, sino la forma del estado y qué opciones deja al siguiente turno.

### Componentes independientes

Algunos juegos se separan en varias partes que no interactúan. En esos casos no basta con resolver cada parte por separado como ganar o perder; se necesita combinar su valor de juego. La teoría de Grundy entrega una forma de hacerlo mediante xor de valores.

### Implementación

La implementación suele ser una dinámica sobre estados, con memoización si el grafo de estados se visita bajo demanda. Es importante garantizar que no existan ciclos no tratados o que el modelo incluya una forma de ordenar los estados.

## Ejercicios

Ver [ejercicios del día](ejercicios/index.md).
