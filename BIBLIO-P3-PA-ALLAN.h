struct tTriangulos
{
	
float lado1, lado2;

} t_tTriangulos;

float ld1, ld2, hi, pe, ar;

float hipotenusa (float ld1, float ld2)
{
	return sqrt((pow(ld1,2))+(pow(ld2,2)));
}

float perimetro (float ld1, float ld2, float hi)
{
 	return ld1+ld2+hi;
}

float area (float ld1, float ld2)
{
 	return (ld1*ld2)/2;
}
