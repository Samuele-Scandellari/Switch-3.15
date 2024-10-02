 #include <stdio.h>
int main() {
    char categoria;
    float costo;
    printf("Scrivi la categoria della persona che deve acquistare il biglietto (P = pensonati, S = studente e D = disoccupato): ");
    scanf("%c",&categoria);
    printf("Costo del biglietto: ");
    scanf("%f",&costo);
    switch(categoria) {
        case 'P':
            costo=costo-(costo*.1);
            break;
        case 'S':
            costo=costo-(costo*.15);
            break;
        case 'D':
            costo=costo-(costo*.25);
            break;
        default:
            printf("La categoria inserità non riceve nessuno sconto");
    }
    printf("Costo finale: %f",costo);
    return 0;
}