# Campamento de Invierno ICPC 2026

![Banner del Campamento de Invierno ICPC 2026](docs/assets/banner-cicp-2026.png)

Repositorio público de material para el **Campamento de Invierno ICPC 2026**. El sitio reúne apuntes, clases, ejercicios y soluciones de programación competitiva para los niveles inicial y avanzado.

Sitio publicado: <https://gustavo-harnisch.github.io/CICP-2026/>

## Objetivo

Este repositorio busca dejar disponible el material del campamento en un formato ordenado, fácil de navegar y útil para estudiar después de las clases. La documentación está construida con MkDocs y organizada por nivel, día y ejercicios.

## Estructura

```text
docs/
  inicial/
    dia-01/
      index.md
      ejercicios/
        index.md
  avanzado/
    dia-01/
      index.md
      ejercicios/
        index.md
plantillas/
snippets/
```

Cada día mantiene una página principal con objetivos y apuntes, y una página separada para los ejercicios de esa jornada.

## Contribuir

Las contribuciones son bienvenidas. Puedes apoyar agregando:

- Explicaciones de ejercicios.
- Soluciones en C++.
- Correcciones a apuntes existentes.
- Nuevos enlaces o recursos útiles.
- Mejoras de redacción, formato o navegación.

Para contribuir, puedes abrir un pull request desde un fork del repositorio o subir tus archivos a una rama y pedir revisión. Revisa [CONTRIBUTING.md](CONTRIBUTING.md) antes de enviar cambios.

## Formato de ejercicios

Los ejercicios de cada día deben seguir la estructura definida en la plantilla:

```text
plantillas/ejercicio.md
```

Si agregas código, preferimos mantenerlo como archivo `.cpp` dentro de `snippets/` e incluirlo desde Markdown usando snippets de MkDocs:

````md
```cpp
--8<-- "snippets/inicial/dia-01/solucion.cpp"
```
````

Esto evita duplicar código y hace más fácil corregir soluciones.

## Desarrollo local

La guía rápida para levantar el sitio localmente está en [stupid.md](stupid.md).

## Licencia

Este proyecto se publica bajo licencia MIT. Ver [LICENSE](LICENSE).
