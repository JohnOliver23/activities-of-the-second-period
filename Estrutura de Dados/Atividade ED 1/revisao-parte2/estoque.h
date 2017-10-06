///  Definição das estruturas da biblioteca + protipagem das funções
typedef struct {
   int id;                // identificador do produto
   char nome[41];
   int quant;             // quantidade em estoque
   float precoVenda;
   float precoCompra;
} TProduto;

TProduto leProduto(void);
void imprimeProduto(TProduto p);
void reajusta( TProduto prods[], float porcentagem, int n);
TProduto prodLucrativo( TProduto prods[], int n);
int prodLucrativo2( TProduto prods[], int n, float *mLucro);
void alteraPreco(int index, float valor, TProduto prods[]);///questão E
void apagaLastRegister(TProduto prods[], int indice);///Questão F
void baixaEstoque(int indice, int qtd, TProduto prods[]);///Questão G
void menorQtdMinimo (int minimo, int indice, TProduto prods[]);///Questão H
