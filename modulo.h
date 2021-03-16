/**************************
                             UNIVERSIDAD SERGIO ARBOLEDA
                         COMPUTACIÓN PARALELA Y DISTRIBUIDA
                                 Felipe Uribe Guevara
                            felipe.uribe@correo.usa.edu.co
                                    CC: 1000970791
                           Gustavo Adolfo Castillo Clavijo
                         gustavoa.castillo@correo.usa.edu.co
                                    CC: 1003559564
***************************/
#ifndef MODULO_H_INCLUDED
#define MODULO_H_INCLUDED
//Se importan las bibliotecas necesarias para el desarrollo del proyecto
#include <stddef.h>
#include <sys/time.h>

//Se crean las firmas de las funciones
void initMatrix(int N, double *a,double *b);
void printMatrix(int N, double *matrix);

extern void sample_start();
extern void sample_stop();
extern void sample_end();

#endif