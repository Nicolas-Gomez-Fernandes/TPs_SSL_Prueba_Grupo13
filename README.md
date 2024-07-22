RESULTADOS DEL PUNTO 3.E:
1.Muestre un comando que permita compilar todo el proyecto (sin el makefile) de acuerdo a los lineamientos del curso (adherir estrictamente al estándar).
gcc main.c tabla.c conversion.c -o programa.exe

2. Compile con el comando anterior pero modifique tabla.c de modo que no incluya conversion.h, copie el resultado y coméntelo.

$ gcc main.c tabla.c conversion.c -o programa.exe
tabla.c: In function 'armarTablaDeConversion':
tabla.c:15:21: error: implicit declaration of function 'convetirNudosAKilometrosPorHora' [-Wimplicit-function-declaration]
   15 |         float kmh = convetirNudosAKilometrosPorHora(valorActualNudos);

lo que pasa es que hay un error a la hora de llamar a la función convetirNudosAKilometrosPorHora, porque no se encontró una declaración previa de esa función, debido a esto el código de arriba dice que hay un error hay una declaración implícita de la función convetirNudosAKilometrosPorHora.

3. De un comando que compile todos los fuentes menos tabla.c, ejecútelo, muestre el resultado y coméntelo.

$ gcc main.c conversion.c -o programa.exe
C:/msys64/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/14.1.0/../../../../x86_64-w64-mingw32/bin/ld.exe: C:\msys64\tmp\ccUP3Mip.o:main.c:(.text+0x115): undefined reference to `armarTablaDeConversion'
collect2.exe: error: ld returned 1 exit status

lo que dice es que hubo un error con el linker, ya que no hay una referencia definida para armarTablaDeConversion

4. Copie el comando necesario para obtener conversion.i, el archivo ya preprocesado de conversion.c
gcc -E main.c -o conversion.i
