# Campamento de Invierno ICPC 2026

Repositorio para documentar las jornadas, clases, apuntes, ejercicios,
pistas y soluciones del Campamento de Invierno ICPC 2026.

## Organización

La documentación sigue el orden:

```text
Nivel → Día → Clase / Apuntes / Ejercicios
```

Los ejercicios pueden conservar el mismo nombre para el código y su
explicación:

```text
D_Equal_Candies.cpp
D_Equal_Candies.md
```

## Ejecutar localmente

```bash
python -m venv .venv
```

Linux o macOS:

```bash
source .venv/bin/activate
```

Windows:

```powershell
.venv\Scripts\activate
```

Instalar dependencias y levantar el sitio:

```bash
pip install -r requirements.txt
mkdocs serve
```

## Construir

```bash
mkdocs build
```

El contenido generado quedará en la carpeta `site/`.
