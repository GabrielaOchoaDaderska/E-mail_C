# E-mail_C
Email validation and writing messages up to 1 kB / Sprawdzanie poprawności e-maila i pisanie wiadomości do 1 kB /メールの検証と 1 KB への保存 
```c
#include <stdio.h>
#include <string.h>

int main()
{

    unsigned char email[50];
    int i, licznik_malych_znakow =0,licznik_malp = 0, licznik_duzych_znakow =0, licznik_liczb =0;
    printf("Prosze podac email: ");
    jump:
        scanf("%s", email);
    for (i = 0; email[i] != 0; i++)
    {

        if (email[i] >= 'a' && email[i] <= 'z')
        {
            licznik_malych_znakow ++;
            continue;
        }

         if (email[i] >= 'A' && email[i] <= 'Z')
        {
            licznik_duzych_znakow ++;
            continue;
        }

         if (email[i] >= '0' && email[i] <= '9')
        {
            licznik_liczb ++;
            continue;
        }
         if (email[i] == '@')
        {
            licznik_malp ++;
        }
    }

    if(licznik_duzych_znakow > 0 && licznik_liczb > 0 && licznik_malp == 1 && licznik_malych_znakow > 0)
    {
         printf("Email poprawny\n");
    }

    else
    {
        printf("Email jest niepoprawny \n");
        goto jump;
    }

   for (i = 0; email[i] != 0; i++)
            {
                if (email[i] >= 'a' && email[i] <= 'z')
                {
                    email[i] -= 32;
                }
            }

    printf("%s\n", email);

    unsigned rozm = 1024, o=0;
    char *tekst=(char*)malloc(rozm);
    if(tekst)
    {
        printf("Podaj tekst\n");
        char *tekstuzytkownika;
        scanf(" %s", tekst);
        tekst[1023] = 0;
        //tekst[o]=0;
        printf("%s ",tekst);
    }
   
    else{
        printf("Brak pamieci, OUU NO");
    }

    return 0;
}
```
