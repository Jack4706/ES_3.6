#include <stdio.h>

int main() {
    int num_prodotti;
    float prezzo_unitario, importo_totale, sconto_totale = 0;

    printf("Inserisci il numero di prodotti acquistati:\n ");
    scanf("%d", &num_prodotti);
    printf("Inserisci il prezzo unitario del prodotto:\n ");
    scanf("%f", &prezzo_unitario);

    importo_totale = num_prodotti * prezzo_unitario;

    if (importo_totale > 50) {
        sconto_totale += (importo_totale - 50) * 0.20;
        importo_totale = 50;
    }

    if (importo_totale > 10) {
        sconto_totale += (importo_totale - 10) * 0.10;
    }

    float importo_finale = num_prodotti * prezzo_unitario - sconto_totale;

    printf("Importo totale non scontato: %.2f euro\n", num_prodotti * prezzo_unitario);
    printf("Importo finale dopo sconti: %.2f euro\n", importo_finale);
    printf("Sconto totale applicato: %.2f euro\n", sconto_totale);

    return 0;
}