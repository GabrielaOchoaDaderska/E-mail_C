#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char email[50];
    int i, j, count = 0;


    do {
        printf("Wprowadz poprawny adres e-mail: ");
        scanf("%s", email);


        for(i=0; i<strlen(email); i++)
        {
            if(email[i] == '@')
            {
                count++;
            }
            else if((email[i] < '0' || email[i] > '9') && (email[i] < 'A' || email[i] > 'Z') && (email[i] < 'a' || email[i] > 'z'))
            {
                count = 0;
                break;
            }
        }
    } while(count != 1);

    printf("\nPoprawny adres e-mail: ");
    for(j=0; j<strlen(email); j++)
    {
        printf("%c", toupper(email[j]));
    }

    int size;
    printf("\n\nPodaj rozmiar: ");
    scanf("%d", &size);
    char *ptr = (char*) malloc(size * sizeof(char));

   
    printf("\nWprowadz wiadomosc: ");
    scanf("%s", ptr);

  
    if(strlen(ptr) >= size)
    {
        printf("\nWiadomosc jest zbyt dluga!\n");
        free(ptr);
    }
    else
    {
        printf("\nWiadomosc: %s\n", ptr);
        free(ptr);
    }

    return 0;
}
