Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------

english:

Write a program that takes(que tome) a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

spanish:

Escriba un programa que tome una cadena y muestre su primera palabra, seguida de un salto de línea nueva.

Una palabra es una sección de la cadena delimitada por espacios/tablas o por el inicio/fin de
la cadena.

Si el número de parámetros no es 1, o si no hay palabras, simplemente muestra
una nueva línea.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
