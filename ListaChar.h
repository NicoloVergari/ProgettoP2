//
// Created by verga on 19/12/17.
//

#ifndef PROGETTOP2_LISTACHAR_H
#define PROGETTOP2_LISTACHAR_H

#endif //PROGETTOP2_LISTACHAR_H

class ListaChar {
 private:
    char info:
    ListaChar *next:
 public:
    ListaChar() : info('/0'), next(0);
    ListaChar(const ListaChar &);
    ListaChar& operator=(const ListaChar &);
    ~ListaChar();
    ListaChar *togliNodo();
    ListaChar *togliNodo(char);
    ListaChar *ordina();
    bool trova(char *);
    ListaChar* operator+(ListaChar);
    ListaChar *unisci(ListaChar *);
    
}
