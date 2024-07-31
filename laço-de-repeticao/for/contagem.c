int main()
{
    int i = -10;

    while (i<=10){
        printf("Em while: %d\n", i);
        i++;
    }

    i= -10;
    do {
        printf("Em do-while: %d\n",i);
        i++;

    } while (i<=10);

    for (i=-10;i<=10;i++){
        printf("Em for %d\n",i);
    }
    return 0;
}
