# Día 9 — Flujo

## Objetivos

- Modelar problemas de asignación, cortes y capacidades como redes de flujo.
- Comprender la relación entre flujo máximo y corte mínimo.
- Implementar o adaptar algoritmos de flujo verificando conservación y capacidades.

## Apuntes

### Redes de flujo

Una red de flujo tiene una fuente, un sumidero, aristas con capacidad y una cantidad que se envía respetando límites. El modelamiento consiste en transformar restricciones del problema en capacidades y conservación de flujo.

### Camino aumentante

Muchos algoritmos comienzan con flujo cero y buscan caminos donde aún sea posible enviar más. Al aumentar por un camino, también se agregan capacidades residuales en sentido contrario, lo que permite corregir decisiones anteriores.

### Corte mínimo

Un corte separa la fuente del sumidero y suma capacidades de aristas que cruzan la separación. El teorema flujo máximo-corte mínimo conecta la mejor cantidad que se puede enviar con la barrera mínima que impide enviar más. Esta relación es clave para demostrar modelamientos.

### Aplicaciones

Flujo aparece en matching, asignación con restricciones, selección de proyectos, cobertura, caminos disjuntos y problemas donde hay recursos limitados moviéndose entre capas. La dificultad principal suele estar en construir la red correcta.

## Ejercicios

Ver [ejercicios del día](ejercicios/index.md).
