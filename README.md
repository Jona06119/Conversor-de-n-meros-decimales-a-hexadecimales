# Conversor de Decimal a Hexadecimal

## Descripción

Este proyecto es un programa desarrollado en lenguaje C que convierte números decimales enteros a su representación hexadecimal.

El sistema hexadecimal utiliza 16 símbolos: los números del 0 al 9 y las letras de la A a la F.

El programa realiza divisiones sucesivas entre 16 para obtener los residuos y construir el resultado hexadecimal.

## Características

* Conversión de números decimales enteros a hexadecimales.
* Validación de la entrada del usuario.
* Manejo del número cero.
* Representación de los valores del 10 al 15 mediante las letras A, B, C, D, E y F.
* Interfaz sencilla mediante la terminal.

## Tecnologías utilizadas

* Lenguaje C.
* GCC.
* Visual Studio Code.

## Requisitos

* Tener instalado un compilador de C, como GCC.
* Contar con una terminal para ejecutar el programa.

## Instalación y ejecución

1. Clona este repositorio o descarga el archivo `Decimal a Hexadecimal.c`.

2. Abre una terminal en la carpeta del proyecto.

3. Compila el programa:

   ```bash
   gcc Decimal a Hexadecimal.c -o Decimal a Hexadecimal
   ```

4. Ejecuta el programa:

   En Windows PowerShell:

   ```powershell
   .\Decimal a Hexadecimal.exe
   ```

## Ejemplo de ejecución

```text
====================================
 DECIMAL A HEXADECIMAL
====================================
Ingresa un numero decimal entero: 255
El numero hexadecimal es: FF
```

## Conceptos aplicados

* Variables y tipos de datos.
* Entrada y salida de datos.
* Estructuras `while` y `for`.
* Operadores aritméticos.
* Arreglos de caracteres.
* Validación de datos.
* Sistemas numéricos.

## Objetivo educativo

Comprender el funcionamiento del sistema hexadecimal y reforzar los fundamentos de programación en C mediante un algoritmo de conversión numérica.
