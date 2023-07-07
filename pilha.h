#ifndef PILHA_H
#define PILHA_H

typedef struct pilha Pilha;
typedef struct posicao Posicao;
typedef struct labirinto Labirinto;

struct labirinto {
    int lins;
    int cols;
    char **lab;
    int **visitado;
};

struct posicao {  
    int x;
    int y;
};

typedef struct celulap {
    Posicao item;
    struct celulap *prox;
} Celulap;

struct pilha {
    int tamanho;
    Celulap *topo;
    Celulap *cabeca;
};




// [ALOCAÇÃO x INICIALIZAÇÃO]
int pilhaEhVazia(Pilha*);
void iniciaPilha(Pilha*);
//Labirinto *alocarLab(int, int);
//Posicao primeiraPosicaoPilha(Labirinto*);


// [OPERAÇÕES DO LABIRINTO]
void vitoria(Labirinto *);
void derrota(Labirinto *);
void printLab(Labirinto *);
//void leLabirinto(Labirinto *);


// [OPERAÇÕES DA PILHA]
Posicao pilhaPop(Pilha*);
int contapassos(Labirinto*);
int acharSaidaPilha(Labirinto*);
void pilhaPush(Pilha*, Posicao);

// [OPERAÇÕES DA FILA]

// [DESALOCAÇÃO x FIM]
void desalocarPilha(Pilha*);
void desalocaVisitado(Labirinto*);
//void desalocarLabirinto(Labirinto**);            

#endif // PILHA_H