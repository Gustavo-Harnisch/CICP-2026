# Día 11 — Geometría Computacional

## Objetivos

- Representar puntos, vectores y operaciones geométricas con precisión.
- Usar producto punto y producto cruz para razonar orientación, distancia y proyección.
- Controlar errores numéricos y casos degenerados en algoritmos geométricos.

## Apuntes

### Puntos y vectores

Un punto describe posición; un vector describe desplazamiento. Muchas operaciones geométricas se simplifican al restar puntos y trabajar con vectores. Esta mirada permite traducir dibujos a fórmulas algebraicas.

### Producto cruz

El producto cruz en dos dimensiones indica orientación y área firmada. Sirve para saber si tres puntos giran a la izquierda, a la derecha o son colineales. Es una herramienta central para intersecciones, polígonos y convex hull.

### Producto punto

El producto punto mide alineación entre vectores. Permite proyectar, comparar ángulos y detectar perpendicularidad. En problemas de distancia, suele evitar el uso innecesario de trigonometría.

### Casos degenerados

La geometría falla mucho en bordes: puntos repetidos, segmentos colineales, intersecciones en extremos, áreas cero y precisión con decimales. Antes de implementar, hay que decidir si se trabajará con enteros exactos o con `double` y tolerancia.

## Ejercicios

Ver [ejercicios del día](ejercicios/index.md).
