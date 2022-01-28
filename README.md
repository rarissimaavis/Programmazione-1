# Esercizi Programmazione 1 💻📘
## primi programmini abbastanza inutili:
- **tabella**: sequenze di escape
- **precesucc**: legge un intero e visualizza il valore intero precedente e il successivo
- **medianum**: legge due interi e visualizza la loro media
- **calcolatrice**: compie le 4 operazioni tra due numeri reali inseriti da tastiera e visualizza i 4 valori
- **bolletta**: mi rifiuto di scrivere la traccia ma vabbè è una bolletta
- **km**: calcola quanti km percorre una moto con 1 l di benzina sapendo che percorre n km con x l 
- **parcheggio**: chiede il numero di ore e visualizza il totale da pagare
- **brokercond**: espressione condizionale per calcolare la commissione
- **sizeoftipi**: stampa quanti bytes occupa ogni tipo
## altri programmini abbastanza inutili ma ora sono funzioni:
- **alquadrato**: calcola il quadrato di un numero reale 
- **broker**: quello di prima ma con if else
## cicli:
- **potenza2**: trova la prima potenza di 2 maggiore di 1000 (while)
- **media**: calcola la media di una classe di 10 studenti (while)
- **mediasentinella**: calcola la media di un numero arbitrtario di votazioni usando una sentinella (while)
- **quadrato**: stampa un quadrato di asterischi di lato n (while)
- **quadrato_vuoto**: stampa un quadrato di lato n con asterischi solo per riga e colonna = 1 o n, dentro vuoto (while)
- **bisestili**: stampa tutti gli anni bisestili fino a 10000 (while)
- **multipli7**: stampa i multipli di 7 minori di 1000 in ordine decrescente (while)
- **dispari**: stampa tutti i dispari tra 13 e 37 (while)
- **rettangolo**: stampa un rettangolo di asterischi vuoto praticamente come il quadrato ma con lati diversi (while)
- **sommawhile**: somma di n numeri pari (while)
- **sommafor**: somma di n numeri pari (for)
- **fattoriale**: fattoriale reiterato (do/while)
- **cartedagioco**: stampa i valori di una sequenza di carte da gioco (for, switch)
- **triangolowhile**: stampa un triangolo di asterischi (while)
- **triangolofor**: stampa un triangolo di asterischi (for)
- **primi**: test di primalità, controllo fino alla radice quadrata di n (for) 
- **primi2**: come prima, ma controllo prima se è pari e poi incremento solo i dispari (for)
## array:
- **valorialcontrario**: legge un elenco di 10 valori reali e lo ristampa al contrario
- **listainversa**: legge una lista di 10 valori, calcola l'inversa e la stampa
- **listainversa2**: come l'altro, ma usa solo parte dell'array
- **ricercaelemento**: ricerca di un elemento di un array
- **inseriscielem**: inserisce un elemento in un array in posizione pos (shift a destra)
- **eliminaelem**: elimina un elemento in un array in posizione pos (shift a sinistra)
- **ricercaord**: ricerca lineare in un array ordinato (Tu.c dice che è bruttino)
- **compatta**: modifica un array in modo che elementi consecutivi uguali siano sostituiti da un’unica occorrenza (shift a sinistra)
- **differenza**: stampa tutti gli elementi presenti in un array B, ma non in un array A (funzione ricerca, funzione elimina)
- **ricercabin**: ricerca binaria in un array ordinato
- **tavolapitagorica**: rappresenta e stampa una tavola pitagorica
- **ioarray**: inserisce valori in un array / stampa valori contenuti in un array
- **bubblesort**: ordina un array scambiando elementi vicini e portando l'elemento maggiore alla fine
- **compatta2**: genera un secondo array B che contiene i numeri contenuti nel primo array A senza ripetizioni (funzione ricerca)
- **matrice**: legge e stampa una matrice, calcola la somma, il minimo ed il massimo degli elementi (con 3 funzioni)
- **intersezione**: genera un terzo vettore C che contiene l'intersezione tra due vettori A e B
- **armstrong**: azzera i valori di un array che non sono numeri di Armstrong (somma cubi cifre = num) e stampa i valori rimanenti
- **filtrosum**: copia in c gli elementi di a uguali alla somma di due elementi consecutivi di b
- **numeroperfetto**: se un numero è perfetto, calcola il suo inverso (prova resto 2)
- **filtradaesami**: azzera gli elementi di un array che non sono "da esame", cioè somma delle cifre = 6 (prova 2020)
- **quadcubi**: stampa un array b e un array c con rispettivamente i quadrati e i cubi degli elementi di un array a inserito da tastiera (tutorato)
- **unisci**: costruisce un terzo array i cui elementi di posizione pari siano del primo e quelli di posizione dispari del secondo (tutorato)
- **prodadiacenti**: costruisce un secondo array in modo che ogni suo elemento sia il prodotto di due elementi successivi nel primo (tutorato)
- **allargacoppie**: per ogni coppia di elementi adiacenti in cui il primo è minore del secondo, sottrae 1 al primo e somma 1 al secondo (prova 2017)
- **stringicoppie**: per ogni coppia di elementi adiacenti in cui il secondo è maggiore del primo, somma 1 al primo e sottrae 1 al secondo (prova 2017)
- **filtrodiff**: copia in c gli elementi di a uguali alla differenza di due elementi consecutivi di b (prova 2017)
- **cancellanoiosi**: modifica una lista lasciando come elementi solo i numeri interessanti (dispari e congrui a 1 modulo 3)
## puntatori: 
- **azzera**: esempio passaggio di parametri per indirizzo per modificare una variabile
- **divisioneintera**: esempio funzione con duplice risultato
- **maxmin**: massimo e minimo di un array
## stringhe:
- **postfisso**: verifica se una stringa è postfissa di un'altra e restituisce l'indirizzo in cui comincia il postfisso (strcmp, puntatori)
- **minusmaius**: trasforma le maiuscole in minuscole e viceversa
- **contachar**: conta occorrenze di una lettera in una stringa, sia in maiuscolo che in minuscolo (offset, isalpha)
## allocazione dinamica:
- **concat**: concatena due stringhe senza alterare le stringhe di input (esempio)
- **leggistringatu**: funzione leggi_stringa fatta da Tu.c
- **elencocognomi**: riceve un elenco di nomi e cognomi (array bi di stringhe allocate dinamicamente) e dato un certo nome stampa i cognomi corrispondenti
- **xmalloc**: malloc con controllo
- **iniziali**: riceve un array di stringhe e restituisce una stringa allocata dinamicamente formata dalle lettere iniziali delle stringhe non vuote e non nulle 
- **intersez**: riceve due array di interi e restituisce un array allocato dinamicamente con i loro elementi in comune (esame 09 01 18)
## record:
- **distanza**: calcola la distanza tra due punti (esempio)
- **triangoliuguali**: verifica se due triangoli sono uguali 
- **codicefiscale**: verifica che il formato di un codice fiscale sia LLLLLLCCLCCLCCCL 
- **elencopersone**: crea e stampa un elenco di persone, cerca una persona in base a nome e cognome e in base al codice fiscale, crea un sottoelenco di persone con un determinato cognome
- **piedini**: contenuto bonus per chi ha un foot fetish
- **rettangoligrandi**: copia in un array i rettangoli con area maggiore di un'area data (prova 2021)
- **rettangolipiccoli**: copia in un array i rettangoli con area minore di un rettangolo dato (esame 16/07/21)
- **film**: copia in un array i film di un regista dato (esame 01/07/21)
- **librinuovi**: copia in un array i libri pubblicati da un certo anno in poi (esame 12 01 22)
## file:
- **salvarettangoli**: salva in un file i rettangoli con area minore di un rettangolo dato (esame 16/07/21)