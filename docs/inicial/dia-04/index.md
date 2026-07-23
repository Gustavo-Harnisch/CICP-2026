# Día 4 — Programación Dinámica

## Objetivos

- Identificar estados que resumen decisiones anteriores.
- Construir transiciones que no dupliquen trabajo innecesariamente.
- Calcular complejidad a partir de cantidad de estados y transiciones.

## Apuntes

### Qué guarda un estado

La programación dinámica sirve cuando muchas decisiones comparten subproblemas. Un estado debe guardar solo la información necesaria para continuar la solución sin recordar todo el camino anterior. Si falta información, la transición será incorrecta; si sobra, habrá demasiados estados.

### Transiciones

Una transición describe cómo pasar de un estado conocido a otro, o cómo calcular un estado usando estados más pequeños. Lo importante es que cada caso represente una decisión válida del problema y que todas las posibilidades relevantes queden cubiertas exactamente una vez o de una forma que no altere la respuesta.

### Orden de cálculo

Para implementar una dinámica hay que asegurar que, al calcular un estado, los estados de los que depende ya estén disponibles. Esto puede lograrse con recursión y memoización o con una tabla iterativa. La forma iterativa suele hacer más explícito el orden y ayuda a controlar memoria.

### Optimización de memoria

Cuando una transición solo usa la fila anterior, un prefijo o una cantidad pequeña de estados previos, no siempre es necesario guardar toda la tabla. Reducir memoria es útil, pero debe hacerse después de tener clara la dependencia entre estados.

## Ejercicios

Ver [ejercicios del día](ejercicios/index.md).
