#define MAX 100
typedef struct {
    int idCat;
    char nombre[30];
    /* data */
}categoria;


categoria categorias[MAX];
typedef struct {
    /* data */
    int id;
    char nombre[30];
    char desc[200];
    float precio;
}producto[MAX];
producto productos[MAX];
