int main()
{
    int n,i;
    int contador=0;

    printf("Informe n: ");
    scanf("%d",&n);

    for (i=1;i<=n;i++){
        if (n % i == 0){
            contador++;
        }

    }

    if (contador == 2){
        printf("%d Eh primo!",n);
    } else {
        printf("%d Nao eh primo!",n);
    }

    return 0;
}
