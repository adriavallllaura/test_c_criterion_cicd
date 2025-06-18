# Test C Project with Criterion and CI/CD

Este es un proyecto de ejemplo en C que utiliza Criterion para pruebas unitarias y tiene configurado un pipeline CI/CD con GitHub Actions.

## Características

- ✅ Pruebas unitarias con Criterion
- 🚀 Pipeline CI/CD automático
- 📧 Notificaciones por correo electrónico en caso de fallo
- 🔄 Despliegue automático cuando los tests pasan

## Configuración del CI/CD

El pipeline está configurado en `.github/workflows/ci-cd.yml` y realiza las siguientes acciones:

1. Instala las dependencias necesarias
2. Compila el proyecto
3. Ejecuta las pruebas unitarias
4. Si falla alguna prueba, envía un correo electrónico
5. Si todas las pruebas pasan, procede con el despliegue

### Configuración de correo electrónico

Para recibir notificaciones por correo cuando falle el pipeline, necesitas configurar los siguientes secretos en tu repositorio de GitHub:

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

# Ejecutar los tests
./test
```