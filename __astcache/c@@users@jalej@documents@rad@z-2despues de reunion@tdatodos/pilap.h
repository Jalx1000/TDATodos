�\S�  �3�o�  �:y�  �:y�  �:y�  - 2 1 - 8 0 2 7 �k�  @ן�      0 4 �:y�  �:y�  �:y�  9 3 1 - 1 0 0 1 _ C l a �:y�  �:y�  x:y�  1 7 7 F 0 C 4 A - 1 C D 3 - 4 D E 7 - A 3 2 C - 7 1 D B B B 9 F A 3 6 D } \ T r e a t A s   ipo_elemento elemento;
    NodoP* sig;
};

typedef NodoP* direccionPP;

class PilaP
{
  private:
    direccionPP tope;
  public:
    PilaP();
    bool vacia();
    void meter(int e);
    void sacar(int &e);
    int cima();
    void mostrar();
};
#endif

