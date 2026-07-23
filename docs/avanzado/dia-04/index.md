# Día 4 — Programación Dinámica Avanzada

## Objetivos

- Diseñar estados más compactos para problemas con restricciones grandes.
- Reconocer oportunidades de optimización en transiciones costosas.
- Justificar el orden de cálculo y la validez de una recurrencia compleja.

## Apuntes

### Estados compactos

En dinámica avanzada, la diferencia entre aceptado y tiempo límite suele estar en el diseño del estado. Un estado debe capturar la información que afecta el futuro, pero eliminar detalles equivalentes. Esta compresión puede venir de ordenar, agrupar, usar máscaras o explotar monotonía.

### Transiciones costosas

Muchas recurrencias naturales tienen demasiadas opciones por estado. El trabajo avanzado consiste en observar estructura: mínimos acumulados, prefijos, convexidad, monotonicidad, particiones o independencia entre dimensiones. La optimización debe preservar exactamente las decisiones permitidas.

### DP en intervalos y máscaras

Las dinámicas por intervalos sirven cuando se combinan segmentos contiguos. Las dinámicas con máscaras sirven cuando el conjunto de elementos ya elegidos define el estado. Ambas técnicas son potentes, pero su cantidad de estados crece rápido y debe compararse con las restricciones.

### Correctitud

La recurrencia debe cubrir todos los casos y elegir la mejor forma entre ellos. Una prueba típica fija la última decisión, la primera separación o el elemento agregado, y muestra que lo anterior queda descrito por estados ya calculados.

## Ejercicios

Ver [ejercicios del día](ejercicios/index.md).
