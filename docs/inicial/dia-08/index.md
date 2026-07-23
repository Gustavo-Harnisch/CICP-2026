# Día 8 — Brute force y Matemáticas

## Objetivos

- Determinar cuándo una búsqueda exhaustiva es suficientemente eficiente.
- Reducir casos usando propiedades matemáticas simples.
- Combinar enumeración con observaciones para evitar trabajo innecesario.

## Apuntes

### Fuerza bruta razonada

La fuerza bruta no significa programar sin pensar. Significa enumerar posibilidades cuando la cantidad de casos es manejable o cuando una observación permite reducirla. La clave es contar cuántas opciones reales se revisan y qué cuesta evaluar cada una.

### Matemáticas como reducción

Propiedades como divisibilidad, paridad, residuos, máximo común divisor, sumas conocidas o factorización pueden transformar un problema grande en uno pequeño. Estas herramientas son útiles cuando el enunciado habla de números, operaciones repetidas o condiciones que deben cumplirse exactamente.

### Enumerar una parte

Una técnica frecuente es fijar una variable y deducir las demás. Si se enumeran todas las variables, la solución explota; si se elige bien qué enumerar, el resto puede calcularse directo o verificarse rápido.

### Cuidado con overflow

En problemas matemáticos, los valores intermedios suelen crecer más que las entradas. Hay que estimar productos y acumulaciones antes de elegir tipos, especialmente cuando se comparan cuadrados, combinaciones o sumas de muchos términos.

## Ejercicios

Ver [ejercicios del día](ejercicios/index.md).
