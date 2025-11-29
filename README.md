# Two dice simulation

Dette C-program er lavet i forbindelse med kursus: **62712- Basic C-programmeing**, 
der implementerer en simulering af 50.000 kast/rolls med to terninger. 

## Filer
- `dice_helpers.h` – **deklarering** af funktionerne *dice_sum* og *print_arr*.
- `dice_helpers.c` – **implementering** af funktionerne:  *dice_sum* og *print_arr*
- `main.c` – **Samlet kørsel**, her defineres de 50.000 kast/rolls der skal bruges i simuleringen.

-  
void print_arr(int arr[], size_t n)
### Funktioner
- `int dice_sum(void)`
- "Kaster" to terninger og summere dem. Returner int summen af kastet.
- `void print_arr(int arr[], size_t n)`
- Bruges til at udskrive arrayet med hændelserne fra index 2 til 12. Modtager inputsne: int array og længden på arrayet.

## How to use eksempel:

1. Byg og kør programmet ( f.eks. i VSCodium: `f5`)
2. Antallet af hændelser for hver sum vil efter 50.000 kast, bliver udskrevet i terminalen.

### Eksempel på udskrift
<img width="645" height="337" alt="image" src="https://github.com/user-attachments/assets/b178d6bb-6874-4e70-8cdb-098cce0a582d" />

