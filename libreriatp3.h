int mayor(int a1, int b1, int c1){
	
	if(a1>b1 && a1>c1){
        return a1;
    }
    if(b1>a1 && b1>c1)
    {
        return b1;
    }
    if (c1>a1 && c1>b1)
    {
        return c1;
    }
	
}

int menor(int a1, int b1, int c1){
	
	if(a1<b1 && a1<c1){
        return a1;
    }
    if(b1<a1 && b1<c1)
    {
        return b1;
    }
    if (c1<a1 && c1<b1)
    {
        return c1;
    }
	
}

float promedio(int a1, int b1, int c1){
	
	float prom=0;

    prom=(a1+b1+c1)/3;

    return prom;

}

float producto(int a1, int b1){
	
	float prod=0;

    prod=a1*b1;
    
    return prod;

}

void division(int a1, int b1, float &div){
	
	float div;

    if(b1==0){
        
        return 0;
    }else{

    div=a1/b1;

    }
	
}

int suma(int a1, int b1){
	
	int suma=0;

    suma= a1+b1;

    return suma;

}

void resta(int a1, int b1, int &rest){
	
	float rest=0;
    rest=a1-b1;

}
