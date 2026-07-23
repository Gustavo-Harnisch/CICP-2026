# Día 2 — EDD's persistentes

## Objetivos

- Comprender qué significa conservar versiones anteriores de una estructura de datos.
- Aplicar persistencia cuando las consultas dependen de distintos momentos o prefijos.
- Estimar memoria y tiempo al copiar solo las partes modificadas.

## Apuntes

### Versiones de una estructura

Una estructura persistente permite consultar estados antiguos después de aplicar cambios. Esto es útil cuando el problema pregunta por rangos, históricos o decisiones que ramifican en varias versiones. La idea central es no destruir la versión anterior al actualizar.

### Copiar lo necesario

La persistencia eficiente no copia toda la estructura en cada operación. Solo se crean nodos nuevos en el camino que cambia, y el resto se comparte con versiones anteriores. Por eso estructuras como segment trees son candidatas naturales para persistencia.

### Consultas por prefijo

Un patrón frecuente es construir una versión por prefijo del arreglo. Luego una consulta sobre un rango puede compararse usando dos versiones: la de antes del rango y la del final del rango. Esto convierte información histórica en diferencias entre estados.

### Costo

Cada actualización crea una cantidad de nodos proporcional a la altura de la estructura. El tiempo suele ser logarítmico por operación, y la memoria total depende del número de versiones multiplicado por los nodos nuevos por versión.

## Ejercicios

Ver [ejercicios del día](ejercicios/index.md).
