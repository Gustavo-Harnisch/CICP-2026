# Campamento de Invierno ICPC 2026

Repositorio para documentar las jornadas, clases, apuntes, ejercicios, pistas y soluciones del Campamento de Invierno ICPC 2026.

[link-pagina](https://gustavo-harnisch.github.io/CICP-2026/)

## Organización

La documentación sigue este orden:

```text
Nivel → Día → Clase / Apuntes / Ejercicios
```

Los ejercicios pueden mantener el mismo nombre base para el código y su explicación:

```text
D_Equal_Candies.cpp
D_Equal_Candies.md
```

## Ver el sitio localmente

### Windows PowerShell

```powershell
.\scripts\serve.ps1
```

### Linux o macOS

```bash
chmod +x scripts/serve.sh
./scripts/serve.sh
```

También puedes hacerlo manualmente:

```bash
python -m venv .venv
python -m pip install -r requirements.txt
python -m mkdocs serve
```

Luego abre:

```text
http://127.0.0.1:8000/
```

## Publicación

El workflow `.github/workflows/publicar-mkdocs.yml` publica automáticamente el sitio al hacer `push` a `main`.

Después del primer despliegue, configura GitHub Pages así:

```text
Settings → Pages
Source: Deploy from a branch
Branch: gh-pages
Folder: /(root)
```

La URL esperada es:

```text
https://gustavo-harnisch.github.io/CICP-2026/
```
