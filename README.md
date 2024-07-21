# BS-SoSe2023-kraft-Ruppert

# ToDo's für die Hausübung 1

## Basic-shell

### Comands

- [ ] einfacher Programmaufruf: *Programmpfad Parameter ...*
- [ ] Hintergrund Programmaufruf: *Programmpfad Prarameter ... &*
- [ ] Terminieren der Shell: *exit [ Exit-Wert ]*
- [ ] Verzeichnis wechsel: *cd [ Dateipfad ]*
- [ ] Umlenken von Ein- und/oder Ausgaben:
    - [ ] Ausgabeumlenkung: *Programmaufruf > Dateipfad*
    - [ ] Ausgabeumlenkung mit Anfügen: *Programmaufrum >> Dateipfad*
    - [ ] Eingabeumlenkung: *Programmaufruf < Dateipfad*
- [ ] Sequenzen: *Programmaufruf ; Programmaufruf ; . . . ; Programmaufruf*
- [ ] Ausführung bei Erfolg: *Programmaufruf && Programmaufruf && . . . && Programmaufruf*
- [ ] Ausführung bei Misserfolg: *Programmaufruf || Programmaufruf || . . . || Programmaufruf*
- [ ] Pipelines: *Programmaufruf | Programmaufruf | . . . | Programmaufruf*

### benötigte Software-features

- [ ] Signalhandler ( FLAGS= *SA_RESTART|SA_NOCLDSTOP* )
- [ ] Erweiterung struct **Command** in *command.h* 
- [ ] Struct **SimpleCommand** Erstellung
- [ ] enum für die *command types* (C_SIMPLE, C_SEQUENCE, C_PIPE, C_AND, C_OR)

## Adavanced-shell

- [ ] status command: *status*
    ```
    $bshell> pwd
    /home/ar
    $bshell> /opt/firefox/bin/firefox &
    PID=1454 PGID=1454
    $bshell> urxvt &
    PID=1455 PGID=1455
    $bshell> kill -15 1455
    $bshell> ls -l /xyz
    Datei nicht gefunden
    $bshell> status
    PID PGID STATUS PROG
    1412 1412 exit(0) pwd
    1454 1454 running /opt/firefox/bin/firefox
    1455 1455 signal(15) urxvt
    1461 1461 exit(0) kill
    1464 1464 exit(2) ls
    $bshell> status
    PID PGID STATUS PROG
    1454 1454 running /opt/firefox/bin/firefox
    $bshell>
    ```
- [ ] Terminierung/Löschung von Zombies