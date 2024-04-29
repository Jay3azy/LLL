#include <stdio.h>

int main() {
    
    int puntaje = 0, respuesta;

    
    printf("En que año Italia gano su primera Copa del Mundo?\n");
    printf("1) 1932\n2) 1933\n3) 1934\n4) 1935\n");
    scanf("%d", &respuesta);
    if (respuesta == 3) {
        puntaje += 100;
        printf("¡Respuesta correcta! Tu puntaje es: %d\n", puntaje);
    } else {
        printf("Respuesta incorrecta. siguiente pregunta.\n");
    }

    
    printf("Cual era el nombre del arquero de Italia ese año?\n");
    printf("1) Ricardo Quiellini\n2) Ricardo Zamora\n3) Ricardo Parisi\n4) Ricardo Porcelli\n");
    scanf("%d", &respuesta);
    if (respuesta == 2) {
        puntaje += 100;
        printf("¡Respuesta correcta! Tu puntaje es: %d\n", puntaje);
    } else {
        printf("Respuesta incorrecta. siguiente pregunta.\n");
    }

    
    printf("Cuantas Copas del Mundo tiene Brasil?\n");
    printf("1) 3\n2) 5\n3) 1\n4) 6\n");
    scanf("%d", &respuesta);
    if (respuesta == 2) {
        puntaje += 100;
        printf("¡Respuesta correcta! Tu puntaje es: %d\n", puntaje);
    } else {
        printf("Respuesta incorrecta.  siguiente pregunta.\n");
    }

    
    printf("En que año Argentina gano su primer mundial?\n");
    printf("1) 1978\n2) 1977\n3) 1976\n4) 1975\n");
    scanf("%d", &respuesta);
    if (respuesta == 1) {
        puntaje += 100;
        printf("¡Respuesta correcta! Tu puntaje es: %d\n", puntaje);
    } else {
        printf("Respuesta incorrecta.  siguiente pregunta.\n");
    }

    
    printf("En que año el famoso hecho de la mano de Dios sucedio?\n");
    printf("1) 1979\n2) 1976\n3) 1996\n4) 1986\n");
    scanf("%d", &respuesta);
    if (respuesta == 4) {
        puntaje += 100;
        printf("¡Respuesta correcta! Tu puntaje es: %d\n", puntaje);
    } else {
        printf("Respuesta incorrecta.  siguiente pregunta.\n");
    }

    
    printf("Quien es el maximo goleador de la historia del futbol?\n");
    printf("1) C. Ronaldo\n2) L. Messi\n3) R. Nazario\n4) J. Neymar\n");
    scanf("%d", &respuesta);
    if (respuesta == 1) {
        puntaje += 100;
        printf("¡Respuesta correcta! Tu puntaje es: %d\n", puntaje);
    } else {
        printf("Respuesta incorrecta. siguiente pregunta.\n");
    }

    
    printf("Cual es el equipo que cuenta con 7 Champions League?\n");
    printf("1) Barca\n2) Real Madrid\n3) Milan\n4) Juventus\n");
    scanf("%d", &respuesta);
    if (respuesta == 3) {
        puntaje += 100;
        printf("¡Respuesta correcta! Tu puntaje es: %d\n", puntaje);
    } else {
        printf("Respuesta incorrecta.  siguiente pregunta.\n");
    }

    
    printf("Cual es el equipo que cuenta con mas Copas Libertadores?\n");
    printf("1) Boca Juniors\n2) Liga de Quito\n3) Colo Colo\n4) Independiente de Argentina\n");
    scanf("%d", &respuesta);
    if (respuesta == 4) {
        puntaje += 100;
        printf("¡Respuesta correcta! Tu puntaje es: %d\n", puntaje);
    } else {
        printf("Respuesta incorrecta.  siguiente pregunta.\n");
    }

    
    printf("Que seleccion de fútbol es conocida como la Roja?\n");
    printf("1) Chile\n2) España\n3) China\n4) Canada2\n");
    scanf("%d", &respuesta);
    if (respuesta == 2) {
        puntaje += 100;
        printf("¡Respuesta correcta! Tu puntaje es: %d\n", puntaje);
    } else {
        printf("Respuesta incorrecta. siguiente pregunta.\n");
    }

    
    printf("Cada cuantos años se celebra la Copa America?\n");
    printf("1) Cada 3 años\n2) Cada 5 años\n3) Cada 4 años\n4) Cada 2 años\n");
    scanf("%d", &respuesta);
    if (respuesta == 3) {
        puntaje += 100;
        printf("¡Respuesta correcta! Tu puntaje es: %d\n", puntaje);
    } else {
        printf("Respuesta incorrecta.\n");
    }

    
    printf("Tu puntaje final es: %d\n", puntaje);

    return 0;
}
