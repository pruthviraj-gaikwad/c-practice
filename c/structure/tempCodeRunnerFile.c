int fun(struct employ *x)
{

    printf("name of employ : %s\n", x->employName);
    printf("Id : %d\n", x->employId);
    printf("address : %s\n", x->employAddress);
    printf("dessgnesion : %s\n", x->dessignesion);
    printf("salary : %.2f\n", x->salary);
}