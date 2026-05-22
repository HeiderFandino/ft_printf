*Este proyecto ha sido creado como parte del currículo de 42 por hfandino.*

# ft_printf

## Descripción

**ft_printf** es un proyecto del Common Core de 42 que consiste en reimplementar la función `printf()` de la libc en lenguaje C.

El objetivo principal es comprender cómo funcionan internamente las funciones variádicas y cómo gestionar distintos tipos de conversión utilizando `va_list`, `va_start`, `va_arg` y `va_end`.

Durante el desarrollo del proyecto se trabajan conceptos fundamentales como:

- Funciones variádicas
- Parsing de strings
- Conversión de tipos
- Recursividad
- Representación numérica en distintas bases
- Punteros y direcciones de memoria
- Modularidad y compilación mediante Makefile

La librería generada (`libftprintf.a`) podrá reutilizarse en futuros proyectos del cursus de 42.

---

## Estructura del proyecto

```bash
ft_printf/
├── Makefile
├── ft_printf.h
├── ft_printf.c
├── ft_handle_format.c
├── ft_print_char.c
├── ft_print_str.c
├── ft_print_nbr.c
├── ft_print_unsigned.c
├── ft_print_hexa.c
├── ft_print_hex_long.c
├── ft_print_ptr.c
└── libftprintf.a
```

---

## Compilación

```bash
# Compilar la librería
make

# Eliminar archivos objeto
make clean

# Eliminar archivos objeto y librería
make fclean

# Recompilar completamente
make re
```

### Flags de compilación

```bash
cc -Wall -Wextra -Werror
```

---

## Conversores implementados

| Conversión | Descripción |
|---|---|
| `%c` | Imprime un carácter |
| `%s` | Imprime una cadena de caracteres |
| `%p` | Imprime una dirección de memoria en hexadecimal |
| `%d` | Imprime un número decimal |
| `%i` | Imprime un entero decimal |
| `%u` | Imprime un entero decimal sin signo |
| `%x` | Imprime hexadecimal en minúsculas |
| `%X` | Imprime hexadecimal en mayúsculas |
| `%%` | Imprime el carácter `%` |

---

## Funcionamiento interno

La implementación está dividida en pequeñas funciones especializadas:

| Archivo | Responsabilidad |
|---|---|
| `ft_printf.c` | Parsing principal del format string |
| `ft_handle_format.c` | Gestión de conversiones |
| `ft_print_char.c` | Impresión de caracteres |
| `ft_print_str.c` | Impresión de strings |
| `ft_print_nbr.c` | Impresión de enteros con signo |
| `ft_print_unsigned.c` | Impresión de enteros sin signo |
| `ft_print_hexa.c` | Conversión hexadecimal |
| `ft_print_hex_long.c` | Hexadecimal para direcciones largas |
| `ft_print_ptr.c` | Gestión de punteros `%p` |

---

## Conceptos trabajados

### Funciones variádicas

Uso de:

```c
va_list
va_start
va_arg
va_end
```

para gestionar un número variable de argumentos.

### Conversión hexadecimal

Implementación manual de conversión en base 16 utilizando recursividad y tablas base:

```c
"0123456789abcdef"
"0123456789ABCDEF"
```

### Recursividad

La impresión de números se realiza mediante recursión para construir los dígitos de izquierda a derecha.

### Punteros

Implementación de `%p` utilizando direcciones de memoria convertidas a hexadecimal.

---

## Ejemplo de uso

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hola %s\n", "42");
    ft_printf("Número: %d\n", 42);
    ft_printf("Hexadecimal: %x\n", 255);
    return (0);
}
```

---

## Recursos

### Documentación oficial

- https://man7.org/linux/man-pages/
- https://cplusplus.com/reference/cstdio/printf/
- https://pubs.opengroup.org/onlinepubs/9699919799/
- https://www.gnu.org/software/make/manual/

### Recursos de aprendizaje

- Manuales `man`
- Testing manual mediante `main.c`
- Explicaciones sobre funciones variádicas y recursividad
- Práctica de debugging y comparación con `printf` original

---

## Uso de IA

La IA fue utilizada como herramienta de apoyo para:

- Reforzar conceptos sobre funciones variádicas
- Comprender el funcionamiento interno de `printf`
- Resolver dudas conceptuales relacionadas con hexadecimal y punteros
- Comprender mejor el funcionamiento de Makefiles
- Apoyar el proceso de debugging y razonamiento lógico
- Ayuda en la creacion, y redaccion del README

> Todo el código fue implementado, probado y adaptado manualmente durante el desarrollo del proyecto.
