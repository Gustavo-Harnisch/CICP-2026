# Día 3 — Prefix Function y Aho-Corasick

## Objetivos

- Reconocer patrones de búsqueda de strings donde comparar desde cero es demasiado caro.
- Usar información de prefijos y sufijos para evitar trabajo repetido.
- Modelar múltiples patrones mediante un autómata de transiciones y fallos.

## Apuntes

### Prefijos y sufijos

En strings, mucha información se repite al desplazar un patrón. La prefix function mide cuánto del prefijo coincide también como sufijo en cada posición. Esa información permite continuar comparando sin volver al inicio después de un fallo.

### Búsqueda de un patrón

Cuando se busca un patrón dentro de un texto, el objetivo es no repetir comparaciones que ya sabemos. Si una comparación falla después de varios caracteres correctos, se usa el mayor borde conocido para decidir desde dónde seguir.

### Múltiples patrones

Aho-Corasick extiende la idea a muchos patrones. Primero se construye un trie con todas las palabras; luego se agregan enlaces de fallo para saber a qué estado retroceder cuando una transición no existe. El resultado permite recorrer el texto una sola vez.

### Cuándo conviene

Estas técnicas aparecen cuando el largo total de texto y patrones es grande, y una búsqueda independiente por patrón sería inviable. También son útiles cuando se deben contar ocurrencias, detectar prohibiciones o procesar muchas consultas sobre strings.

## Ejercicios

Ver [ejercicios del día](ejercicios/index.md).
