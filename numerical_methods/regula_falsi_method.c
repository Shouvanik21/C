#include<stdio.h>
#include<math.h>

float f(float x){
    return (x*x*x)-(3*x)-5;//change the function as required
}

int main(){
    float x=0.0,a,b;
    float e=0.0001;
    int j=0;
    printf("enter the value of initial guessed root:");
    scanf("%f%f",&a,&b);
    printf("n        a         b       f(a)        f(b)    x(n+1)\n");
    if(f(a)*f(b)<0){
        do{
            printf("%d     %0.3f     %0.3f     %0.3f     %0.3f     %0.3f\n",j,a,b,f(a),f(b),x);
            x=(a*f(b)-b*f(a))/(f(b)-f(a));
            if((f(a)*f(x))<0){
                b=x;
            }
            else{
                a=x;
            }
            j++;
        }while((fabs(f(x)))>=e);
    }
    printf("\nthe value of the root is: %0.3f",x);
    return 0;
}
