#include <windows.h>
#include <C:\Program Files\CodeBlocks\MinGW\x86_64-w64-mingw32\include\GL\glut.h>


/**
    ENTORNO DE TRABAJO
**/
void inicio(){

    glMatrixMode(GL_PROJECTION); //hacer uso de la pantalla
    gluOrtho2D(-10,10,-10,10); //largo y ancho de la pantalla (x1, x2, y1, y2)
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

    glColor3f(1.0,0.0,0.0);
    glBegin(GL_QUADS);
        glVertex2i(5,5);
        glVertex2i(-5,5);
        glVertex2i(-5,-5);
        glVertex2i(5,-5);

    glEnd();


    glColor3f(0.0,0.0,1.0);
    glBegin(GL_QUADS);
        glVertex2f(2.5,2.5);
        glVertex2f(-2.5,2.5);
        glVertex2f(-2.5,-2.5);
        glVertex2f(2.5,-2.5);



    glEnd();


    glFlush(); //funcion para dibujar en la pantalla





}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv); //inicializar las funciones de GLUT OpenGL
    glutInitWindowSize(640,480); //ancho y largo del cuadro de la pantalla
    glutInitWindowPosition(100,100); //posicion en la que aparecera la pantalla
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE); // propiedades y atributos de la pantalla

    glutCreateWindow("Cuadro"); //titulo de la pantalla

    inicio();
    glutDisplayFunc(pantalla); //llamada a la funcion


    glutMainLoop(); //funcion para que no se cierre la pantalla
                    //(se cerrara hasta que le indiquemos nosotros que la cierre

    return EXIT_SUCCESS;
}

