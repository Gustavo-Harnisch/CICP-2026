# Día 1 — Algoritmos randomizados

## Objetivos

- Entender cuándo la aleatoriedad simplifica un problema difícil de construir de forma determinista.
- Analizar probabilidad de éxito y costo esperado de una solución.
- Implementar enfoques randomizados controlando semillas, repeticiones y verificaciones.

## Apuntes

### Por qué usar aleatoriedad

La aleatoriedad es útil cuando escoger una estructura exacta es complejo, pero escoger candidatos al azar tiene alta probabilidad de encontrar una buena respuesta. En competencia se usa especialmente cuando la solución puede verificar rápidamente si un candidato sirve.

### Probabilidad de fallo

Un algoritmo randomizado no se justifica solo porque parece funcionar en pruebas. Hay que estimar cuántas repeticiones se necesitan para que la probabilidad de fallar sea pequeña. Si cada intento independiente tiene una probabilidad razonable de éxito, repetir muchas veces vuelve el fallo improbable.

### Verificación

La parte determinista suele ser la verificación. El algoritmo puede elegir candidatos al azar, pero debe comprobar con precisión si cumplen. Esto evita aceptar una respuesta incorrecta y permite convertir la aleatoriedad en una herramienta para encontrar candidatos, no para decidir sin evidencia.

### Riesgos prácticos

Hay que cuidar semillas, límites de tiempo y casos adversarios. Si el juez permite múltiples ejecuciones, una solución con alta probabilidad de éxito puede ser aceptable; si el margen es estrecho, conviene reforzarla con observaciones deterministas.

## Ejercicios

Ver [ejercicios del día](ejercicios/index.md).
