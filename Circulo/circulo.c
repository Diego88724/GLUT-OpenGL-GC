#include <windows.h>
#include <C:\Program Files\CodeBlocks\MinGW\x86_64-w64-mingw32\include\GL\glut.h>
#include <math.h>



float px = 2;
float py = 5;
float radius = 3;

float calx;
float caly;


/**
    ENTORNO DE TRABAJO
**/
void inicio(){

    glMatrixMode(GL_PROJECTION); //hacer uso de la pantalla
    gluOrtho2D(-5,5,-5,5); //largo y ancho de la pantalla (x1, x2, y1, y2)
    glClearColor(0.0,0.0,0.0,0.0); //Color inicial (rojo, verde, azul, (alpha)) (todo 0=negro)


}

/**
    UTILIZACION DEL ESPACIO DE TRABAJO
**/
void pantalla(){

    /**
    INICIALIZACION
    **/
    glClear(GL_COLOR_BUFFER_BIT); //limpiar la pantalla

    glColor3f(1.0,1.0,1.0); //color blanco para el circulo
    glBegin(GL_POINTS);


    for(double i=0.0; i<8; i+=0.001){

        calx = radius*cos(i);
        caly = radius*sin(i);

        glVertex2f(calx, caly);
    }


    glEnd();


    glFlush(); //funcion para dibujar en la pantalla





}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv); //inicializar las funciones de GLUT OpenGL
    glutInitWindowSize(600,600); //ancho y largo del cuadro de la pantalla
    glutInitWindowPosition(100,100); //posicion en la que aparecera la pantalla
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE); // propiedades y atributos de la pantalla

    glutCreateWindow("Circulo"); //titulo de la pantalla

    inicio();
    glutDisplayFunc(pantalla); //llamada a la funcion


    glutMainLoop(); //funcion para que no se cierre la pantalla
                    //(se cerrara hasta que le indiquemos nosotros que la cierre

    return EXIT_SUCCESS;
}
