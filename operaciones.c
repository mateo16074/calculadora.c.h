
int sumar(int s1, int s2) {
    int suma;
    suma = s1 + s2;
    printf("La suma es %d\n", suma);
return suma;

}

int resta(int r1, int r2) {
    int diferencia;
    diferencia = r1 - r2;
    printf("La resta es %d\n", diferencia);
return diferencia;
}

int multiplicacion(int p1, int p2) {
    int producto;
    producto = p1 * p2;
    printf("La multiplicacion es %d\n", producto);
return producto;
}

float division(int n1, int n2) {
    int division;
    division = n1 / n2 ;
    if(n2<=0){
        printf("ingrese un valor mayor a 0");

    }
    else{
        printf("la division es %d", division); 
    }
return division;
}
