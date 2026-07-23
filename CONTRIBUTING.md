# Contribuir

Gracias por querer mejorar el material del Campamento de Invierno ICPC 2026.

## Qué puedes aportar

- Soluciones en C++ para ejercicios del campamento.
- Explicaciones de problemas.
- Correcciones de errores en apuntes o código.
- Mejoras de redacción, formato o enlaces.
- Recursos externos útiles para practicar.

## Flujo recomendado

1. Haz un fork del repositorio.
2. Crea una rama descriptiva.
3. Agrega o corrige el material.
4. Verifica que el sitio compile localmente.
5. Abre un pull request explicando qué cambiaste.

## Estructura esperada

Cada día debe tener:

```text
docs/<nivel>/dia-XX/index.md
docs/<nivel>/dia-XX/ejercicios/index.md
```

Los códigos de solución deben ir preferentemente en:

```text
snippets/<nivel>/dia-XX/
```

Luego se incluyen desde Markdown con:

````md
```cpp
--8<-- "snippets/inicial/dia-01/solucion.cpp"
```
````

## Estilo de soluciones

- Usa C++17 o superior.
- Usa `#include <bits/stdc++.h>` y `using namespace std;`.
- Separa el código en funciones cuando sea razonable.
- Evita dejar todo el algoritmo dentro de `main`.
- Comenta solo las partes no obvias.
- No inventes soluciones si no estás seguro de que compilan y son correctas.

## Estilo de explicaciones

- Escribe en español claro.
- Explica primero la idea en palabras simples.
- Luego agrega la conceptualización técnica.
- Incluye complejidad temporal y memoria cuando corresponda.
- No copies enunciados completos de plataformas externas.

## Validación local

Para probar el sitio:

```bash
python -m mkdocs build --strict
```

La guía anterior para levantar el servidor local está en [stupid.md](stupid.md).
