#include <windows.h>
#include <C:\Program Files\CodeBlocks\MinGW\x86_64-w64-mingw32\include\GL\glut.h>


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




    /** //LINEAS:

    //METODO 1: GL_LINES

    glColor3f(0.0,1.0,0.0); //color de la linea (verde)
    glBegin(GL_LINES); // instruccion para dibujar lineas
    glVertex2f(1.5,2); //coordenadas de la linea (inicio)
    glVertex2i(-1,-1);

    glVertex2i(-1,-1);
    glVertex2i(3,-1);

    glVertex2i(3,-1);
    glVertex2f(1.5,2); //                          (final)
    glEnd();
    **/



    /**
    //METODO 2: GL_LINE_STRIP

    glColor3f(0.0,1.0,0.0); //color de la linea (verde)
    glBegin(GL_LINE_STRIP); // instruccion para dibujar lineas
    glVertex2f(1.5,2); //coordenadas de la linea (inicio)
    glVertex2i(-1,-1);
    glVertex2i(3,-1);
    glVertex2f(1.5,2);  //                          (final)
    glEnd();

    **/

    //METODO 3: GL_LINE_LOOP

    glColor3f(0.0,1.0,0.0); //color de la linea (verde)
    glBegin(GL_LINE_LOOP); // instruccion para dibujar lineas
        glVertex2f(1.5,2); //coordenadas de la linea (inicio)
        glVertex2i(-1,-1);
        glVertex2i(3,-1);
                            //                          (final)
    glEnd();




    //GL_VERTEX dibuja la linea tomando dos puntos (en parejas), si hubiera una sola, la ignoraria


    glFlush(); //funcion para dibujar en la pantalla





}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv); //inicializar las funciones de GLUT OpenGL
    glutInitWindowSize(640,480); //ancho y largo del cuadro de la pantalla
    glutInitWindowPosition(100,100); //posicion en la que aparecera la pantalla
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE); // propiedades y atributos de la pantalla

    glutCreateWindow("Triangulo"); //titulo de la pantalla

    inicio();
    glutDisplayFunc(pantalla); //llamada a la funcion


    glutMainLoop(); //funcion para que no se cierre la pantalla
                    //(se cerrara hasta que le indiquemos nosotros que la cierre

    return EXIT_SUCCESS;
}


