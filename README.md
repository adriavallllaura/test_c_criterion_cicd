# Test Project with Criterion and CI/CD

Este es un proyecto de ejemplo que demuestra cómo configurar pruebas unitarias en C usando Criterion y un pipeline CI/CD con GitHub Actions.

## Estructura del Proyecto

```
.
├── bin/            # Binarios compilados
├── include/        # Archivos de cabecera (.h)
│   └── point.h
├── src/            # Código fuente (.c)
│   ├── main.c
│   ├── point.c
│   └── test.c
├── .github/workflows/
│   └── ci-cd.yml   # Configuración del pipeline CI/CD
├── build.sh        # Script de construcción
└── README.md
```

## Características

- ✅ Pruebas unitarias con Criterion
- 🏗️  Estructura de proyecto modular
- 🚀 Pipeline CI/CD automático
- 📧 Notificaciones por correo electrónico en caso de fallo

## Configuración del CI/CD

El pipeline está configurado en `.github/workflows/ci-cd.yml` y realiza las siguientes acciones:

1. Instala las dependencias necesarias
2. Compila el proyecto y los tests
3. Ejecuta las pruebas unitarias
4. Si falla alguna prueba, envía un correo electrónico

### Configuración de correo electrónico

Para recibir notificaciones por correo cuando falle el pipeline, configura los siguientes secretos en tu repositorio de GitHub:

1. Ve a la configuración de tu repositorio
2. Navega a "Security" > "Secrets and variables" > "Actions"
3. Añade los siguientes secretos:
   - `EMAIL_USERNAME`: Tu dirección de correo electrónico de Gmail
   - `EMAIL_PASSWORD`: Tu contraseña de aplicación de Gmail (genera una en https://myaccount.google.com/apppasswords)
   - `EMAIL_TO`: Dirección de correo que recibirá las notificaciones

## Cómo ejecutar localmente

```bash
# Compilar el proyecto y los tests
./build.sh

# Ejecutar el programa principal
./bin/main

# Ejecutar los tests
./bin/test

# Ejecutar tests con salida detallada
./bin/test --verbose
```

## Requisitos

- Compilador C compatible con C2X (gcc o clang)
- make
- libcriterion-dev (para pruebas unitarias)