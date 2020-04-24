#include<stdio.h>

float factorial(float num){
    float ans = 1;
    for(float i=num; i>=1; i--){
        ans = ans * i;
    }
    return ans;
}
int main(){
    float n;
    printf("Enter the number: ");
    scanf("%f", &n);
    float ans;
    for(float i=1; i<=n; i++){
        float fact = factorial(i);
        float rem = 1 / fact;
        ans = ans + rem;
    }
    printf("The answer of the series is: ");
    printf("%f", ans);
}