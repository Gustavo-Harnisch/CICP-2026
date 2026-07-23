# Guía de contribución

Gracias por querer aportar al material del **Campamento de Invierno ICPC 2026**. La idea de este repositorio es mantener apuntes, ejercicios y soluciones en un formato claro, revisable y útil para quienes estudian programación competitiva.

## Formas de contribuir

Puedes ayudar con:

- Explicaciones de ejercicios.
- Soluciones en C++.
- Correcciones de apuntes, enlaces o errores de tipeo.
- Mejoras de redacción y formato.
- Recursos útiles para practicar.
- Reportes de soluciones incorrectas o incompletas.

Si no sabes si un aporte calza con el repositorio, abre un issue describiendo la idea antes de trabajar en ella.

## Antes de empezar

Revisa si ya existe una página para el nivel y día correspondiente:

```text
docs/inicial/dia-XX/
docs/avanzado/dia-XX/
```

Cada jornada se organiza así:

```text
docs/<nivel>/dia-XX/index.md
docs/<nivel>/dia-XX/ejercicios/index.md
```

Los archivos `.cpp` deben ir preferentemente en:

```text
snippets/<nivel>/dia-XX/
```

Ejemplo:

```text
snippets/inicial/dia-03/A_busqueda_binaria.cpp
```

## Ejemplos de referencia

Antes de agregar un ejercicio nuevo, revisa estos ejemplos mínimos:

- [Inicial día 1 — Hello World](docs/inicial/dia-01/ejercicios/index.md)
- [Código C++ de Hello World](snippets/inicial/dia-01/0_hello_world.cpp)
- [Avanzado día 1 — Can You Drink](docs/avanzado/dia-01/ejercicios/index.md)
- [Código C++ de Can You Drink](snippets/avanzado/dia-01/0_can_you_drink.cpp)

Estos ejemplos muestran la relación esperada entre el Markdown del ejercicio y el archivo `.cpp` incluido mediante snippets. Para crear un ejercicio real, copia la misma estructura y cambia el nombre, link del enunciado, explicación, complejidad y ruta del código.

## Flujo recomendado

1. Haz un fork del repositorio.
2. Crea una rama con nombre descriptivo.
3. Realiza cambios pequeños y enfocados.
4. Verifica que el sitio compile.
5. Abre un pull request explicando qué agregaste o corregiste.

Ejemplos de nombres de rama:

```text
solucion-dia-03-inicial
fix-link-cronograma
apuntes-grafos-i
```

## Estándar obligatorio para ejercicios

Cada archivo `ejercicios/index.md` debe contener los ejercicios como secciones de segundo nivel. No agregues una tabla manual al inicio: MkDocs genera la tabla de contenidos automáticamente a partir de los encabezados.

```md
# Ejercicios — Día N
```

Cada problema debe seguir exactamente este orden de secciones:

1. `## Identificador — Nombre del problema`
2. `**Link:** [Enunciado](URL de Codeforces)`
3. `### Idea (sin código)`
4. `### Conceptos clave a revisar`
5. `### Conceptualización técnica`
6. `### Solución`

El identificador puede ser la letra del contest (`A`, `B`, `C`, etc.) o un número si se trata de un ejemplo interno. Los ejemplos de referencia usan `0` para dejar claro que no son problemas reales de Codeforces.

Plantilla base:

````md
## A — Nombre del problema

**Link:** [Enunciado](URL de Codeforces)

### Idea (sin código)

Explicación intuitiva de la observación principal.

### Conceptos clave a revisar

- **Nombre del concepto o algoritmo:** resumen breve de qué hace y por qué aparece en este problema.
- **Algoritmo ad hoc:** si no hay una técnica estándar, indica que la solución fue construida directamente para este caso.

### Conceptualización técnica

Algoritmo, estructuras usadas, pasos y complejidad.

### Solución

```cpp
--8<-- "snippets/inicial/dia-XX/A_nombre.cpp"
```
````

Si todavía no hay solución, usa:

```md
_Pendiente de agregar solución._
```

## Qué va en cada sección

`Idea (sin código)` debe explicar la observación principal en lenguaje humano. No debe partir hablando de C++, estructuras de datos ni implementación. La meta es que alguien pueda entender el enfoque en una pizarra.

`Conceptos clave a revisar` debe listar los conceptos generales detrás de la solución. No desarrolla la solución completa; solo orienta al lector sobre qué técnica o patrón está apareciendo.

`Conceptualización técnica` traduce la idea a términos de algoritmia: técnica usada, estructuras de datos, pasos ordenados y complejidad.

`Solución` debe incluir el código desde un archivo `.cpp` ubicado en `snippets/`, usando `--8<--`. No copies el código completo directamente en el Markdown salvo que sea estrictamente necesario.

## Conceptos clave

La sección `Conceptos clave a revisar` debe mencionar las ideas generales que están detrás de la solución. No reemplaza la explicación completa: solo orienta al lector sobre qué debería repasar.

Ejemplos de buen formato:

- **Árboles balanceados:** estructura que mantiene elementos ordenados y permite insertar, borrar y consultar sin recorrer todo.
- **Búsqueda binaria:** técnica para encontrar una frontera cuando existe una condición monotónica.
- **Algoritmo ad hoc:** solución diseñada directamente para el problema cuando no se usa una técnica estándar.

Si la solución no usa un algoritmo clásico, dilo explícitamente como `Algoritmo ad hoc` y resume qué patrón simple aplica.

## Código C++

Para mantener las soluciones consistentes:

- Usa C++17 o superior.
- Usa `#include <bits/stdc++.h>` y `using namespace std;`.
- Separa el código en funciones cuando sea razonable.
- Evita poner todo el algoritmo dentro de `main`.
- Usa nombres de variables claros cuando no afecte la brevedad.
- Comenta solo las partes que no sean obvias.
- Verifica que el código compile antes de enviarlo.

Estructura sugerida:

```cpp
#include <bits/stdc++.h>
using namespace std;

void solve() {
    // Implementación de la solución.
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
```

Si el problema tiene múltiples casos de prueba, déjalo explícito:

```cpp
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
```

## Redacción

Escribe en español claro y directo. La explicación debe ayudar a entender la idea, no solo describir el código.

Buenas prácticas:

- Explica primero la intuición.
- Después formaliza con técnica y complejidad.
- Evita copiar enunciados completos de plataformas externas.
- Usa nombres de algoritmos solo cuando aporten claridad.
- Incluye casos borde importantes cuando sean relevantes.
- Mantén un tono pedagógico, no competitivo contra quien está aprendiendo.

## Validación local

Antes de abrir un pull request, ejecuta:

```bash
python -m mkdocs build --strict
```

También puedes levantar el sitio localmente siguiendo [stupid.md](stupid.md).

## Checklist para pull requests

Antes de enviar, revisa:

- El contenido está en el nivel y día correcto.
- Los enlaces a enunciados funcionan.
- El código compila.
- La solución no está duplicada en varios lugares.
- El Markdown se ve ordenado.
- `mkdocs build --strict` termina correctamente.

## Licencia

Al contribuir aceptas que tu aporte se publique bajo la licencia MIT de este repositorio.
