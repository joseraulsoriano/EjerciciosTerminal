# Ejercicios Terminal

Este repositorio contiene ejercicios básicos de programación en C++.

## Archivos

### Banco.cpp
Un simulador básico de sistema bancario que incluye:
- Verificación de identidad mediante contraseña
- Menú de operaciones bancarias (consultar saldo, depositar, retirar)
- Interfaz de consola para interactuar con el usuario

**Nota:** Este archivo contiene algunos errores de sintaxis que necesitan ser corregidos para su correcta ejecución.

### if+mundo.cpp
Un programa simple que demuestra el uso de la estructura condicional `if-else`:
- Recibe un número entero del usuario
- Si el número es 1, muestra "Hola mundo"
- Si es cualquier otro número, muestra "Error"

### correr.out
Archivo ejecutable compilado.

## Cómo ejecutar

Para compilar los programas, puedes usar g++:

```bash
g++ Banco.cpp -o banco.out
g++ if+mundo.cpp -o hola_mundo.out
```

Para ejecutar:

```bash
./banco.out
./hola_mundo.out
```

## Requisitos
- Compilador C++ (g++ recomendado)
- Terminal o consola