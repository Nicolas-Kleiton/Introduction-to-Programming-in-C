int main()
{
    char tipo;
    int t1,r,n;
    int soma, t, i;

    printf("Informe o tipo de progressao (a ou g): ");
    scanf("%c",&tipo);
    printf("Informe o valor do primeiro termo: ");
    scanf("%d",&t1);
    printf("Informe a razao: ");
    scanf("%d",&r);
    printf("Informe a quantidade de termos: ");
    scanf("%d",&n);

    soma=0;
    t=t1;

    for (i=1; i<=n; i++){
        printf("Termo %d: %d\n",i,t);
        soma+=t;

        if (tipo == 'a'){
            t=t+r;
        } else {
            t=t*r;
        }

    }
    
    printf("Soma dos termos: %d",soma);

    return 0;
}
