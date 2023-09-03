#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>



//CRIAR UM TINDER
struct dados{

        char nome[50];
        int fone;
        int nascimento[10];
        char cidade[50];
        char sexo;
        char filme[50];
        char local[50];
        char hobbie[50];

    }pessoa[100];


//CADASTRO
void cadastro(struct dados *d1, int n_cadastro)
{

    int i = 0, j = 0, k, l;
    char sino = 'S';




        fflush(stdin);

        printf("\n\nQual o seu nome amigo %i: ", n_cadastro);
        gets(d1->nome);
        fflush(stdin);

        //padronizando
        d1->nome[0] = toupper(d1->nome[0]);
        k = strlen(d1->nome);
        i = 1;
        while(i<k){

            d1->nome[i] = tolower(d1->nome[i]);
            i++;
        }
        i=0;



        printf("\nQual o fone:  ");
        scanf("%i", &d1->fone);
        printf("%i", d1->fone);
        fflush(stdin);

        printf("\nQuando voce nasceu (00/00/0000):  ");
        gets(d1->nascimento);

        fflush(stdin);


        printf("\nOnde voce nasceu ");
        gets(d1->cidade);
        fflush(stdin);


        while(j != 1)
        {
            printf("\nVoce eh homem ou mulher (H - M):  ");
            scanf("%c", &d1->sexo);
            fflush(stdin);


            if(d1->sexo == 'H' || d1->sexo == 'M')
            {
                j++;
            }

        }

        //FILME
            printf("\nQual o seu tipo de filme favorito (acao / aventura / comedia / drama / terror / trash / outro): ");
            gets(d1->filme);
            fflush(stdin);




            //padronizando
            k = strlen(d1->filme);
            while(i<k){
                d1->filme[i] = tolower(d1->filme[i]);
                i++;
            }
            i=0;



        //LOCAL
            printf("\nO que voce prefere (ir a praia / sair / ficar em casas / viajar/ outro): ");
            gets(d1->local);
            fflush(stdin);



            //padronizando
            k = strlen(d1->local);
            while(i<k){
                d1->local[i] = tolower(d1->local[i]);
                i++;
            }
            i=0;


        //HOBBIE
            printf("\nQual o seu hobbie (musica / cozinhar / esporte / leitura / outro): ");
            gets(d1->hobbie);
            fflush(stdin);

            //padronizando
            k = strlen(d1->hobbie);
            while(i<k){
                d1->hobbie[i] = tolower(d1->hobbie[i]);
                i++;
            }
            i=0;


}

//variavel para compatibilidade
float cont = 0;
int aux = 0;
char pessoa_principal_nome[50];
char pessoa_principal_cidade[50];
char pessoa_principal_hobbie[50];
char pessoa_principal_filme[50];
char pessoa_principal_local[50];


//MOSTRANDO OS ENAMORADOS
void amostra(struct dados *pessoa, int i)
{

                    int tam = 0;

                    printf("\nNome: ");
                    for(i = 0; i<' ';i++)
                    {
                        printf("%c", pessoa->nome[i]);
                    }
                    tam = strlen(pessoa->nome);
                    strcpy(pessoa_principal_nome, pessoa->nome);





                    printf("\nFone: %i", pessoa->fone);
                    printf("\nData de nascimento: %s", pessoa->nascimento);
                    printf("\nCidade: ");
                    for(i = 0; i<' ';i++)
                    {
                        printf("%c", pessoa->cidade[i]);
                    }
                    tam = strlen(pessoa->cidade);
                    for(i=0;i<tam;i++)
                    {
                        pessoa_principal_cidade[i] = pessoa->cidade[i];
                    }


                    printf("\nSexo: %c", pessoa->sexo);
                    printf("\nFilme: ");
                    for(i = 0; i<' ';i++)
                    {
                        printf("%c", pessoa->filme[i]);
                    }
                    tam = strlen(pessoa->filme);
                    for(i=0;i<tam;i++)
                    {
                        pessoa_principal_filme[i] = pessoa->filme[i];
                    }



                    printf("\nLocal: ");
                    for(i = 0; i<' ';i++)
                    {
                        printf("%c", pessoa->local[i]);
                    }
                    tam = strlen(pessoa->local);
                    for(i=0;i<tam;i++)
                    {
                        pessoa_principal_local[i] = pessoa->local[i];
                    }


                    printf("\nHobbie: ");
                    for(i = 0; i<' ';i++)
                    {
                        printf("%c", pessoa->hobbie[i]);
                    }
                    tam = strlen(pessoa->hobbie);
                    for(i=0;i<tam;i++)
                    {
                        pessoa_principal_hobbie[i] = pessoa->hobbie[i];
                    }

                    printf("\n");
}



char compara(const char *info1, const char *info2)
{
    if(strstr(info1, info2))
    {
        return 1;
    }
    else
    {
        return 0;
    }


}





int main()
{



    int i=0, k, j, EOF_ctrl, nome_tamanho = 0;
    char objetivo, sn, c[100], objetivo_geral[50];
    FILE *banco;

    int objetivo_nome, objetivo_filme, objetivo_hobbie, objetivo_local;
    char nome[50]={'a','b'}, hobbie[50]={'a','b'}, local[50]={'a','b'}, filme[50]={'a','b'};


    int obj_nome = 1, obj_filme = 0, obj_hobbie = 0, obj_local = 0;


    char prince_nome[50];
    char prince_filme[50];
    char prince_hobbie[50];
    char prince_cidade[50];
    char prince_local[50];


    int aux = 0;
    int aux_nome= 0;
    int aux_cidade= 0;
    int aux_hobbie= 0;
    int aux_filme= 0;
    int aux_local= 0;


    char espe_nome[50];
    char espe_cidade[50];
    char espe_hobbie[50];
    char espe_filme[50];
    char espe_local[50];



    int alma_gemea[50], a = 0;
    for(i=0;i<50;i++)
    {
        alma_gemea[i]=0;
    }





while(1)
{




    printf("                                                  Voce prefere oq amigo?\n");
    printf("                                                       CADASTRO - C\n");
    printf("                                                        BUSCA - B\n");
    printf("                                                       ENCERRAR - E\n");
    printf("                                                            ");
    scanf("%c", &objetivo);
    fflush(stdin);


    //ENCERRANDO
    if(objetivo == 'E')
    {
        return 0;
    }




    //CADASTRO
    if(objetivo == 'C')
    {

        banco = fopen("comboio.txt", "a");

        for(i = 0; i<100;i++)
        {
            //colocando o cadastro no arquivo
            cadastro(&pessoa[i], i);

            fwrite(&pessoa[i], sizeof(struct dados),1,banco);


            printf("\ndeseja continuar o cadastro? (s -> sim / n -> nao) ");
            scanf("%c", &sn);
            printf("\n");

            if(sn == 'n')
            {
                break;
            }
        }
    }
    i=0;









    //BUSCA
    if(objetivo == 'B')
    {


        banco = fopen("comboio.txt", "a+b");


        printf("\n\nHOLA AMIGO, BEM VINDO AO TIMBERATO\nO LUGAR CERTO PARA ENCONTRAR A PESSOA CERTA.");
        printf("\nPor favor, por qual das seguintes opcoes voce quer procurar? (nome / filmes / local / hobbie): ");
        gets(objetivo_geral);
        fflush(stdin);


        //NOME
        objetivo_nome = strcasecmp(objetivo_geral, "nome");

        if(objetivo_nome == 0)
        {
            printf("\n\nQual seria o nome do serumaninho?: ");
            gets(nome);
            fflush(stdin);

            nome[0] = toupper(nome[0]);
            nome_tamanho = strlen(nome);
            i = 1;
            while(i<nome_tamanho)
            {
                nome[i] = tolower(nome[i]);
                i++;
            }
            i=0;

        }


        //FILMES
        objetivo_filme = strcasecmp(objetivo_geral, "filmes");
        if(objetivo_filme == 0)
        {
            printf("\n\nPerfeito amigo, qual desses filme voce mais gosta? (acao / aventura / comedia / drama / terror / trash / outro): ");
            gets(filme);
            fflush(stdin);
            k = strlen(filme);
            while(i<k)
            {
                filme[i] = tolower(filme[i]);
                i++;
            }
            i=0;
        }

        //HOBBIES
        objetivo_hobbie = strcasecmp(objetivo_geral, "hobbie");
        if(objetivo_hobbie == 0)
        {
            printf("\n\nLegal amigo, qual desses hobbies mais lhe apitece? (musica / cozinhar / esporte / leitura / outro): ");
            gets(hobbie);
            fflush(stdin);
            k = strlen(hobbie);
            while(i<k)
            {
                hobbie[i] = tolower(hobbie[i]);
                i++;
            }
            i=0;
        }

        //LOCAIS
        objetivo_local = strcasecmp(objetivo_geral, "local");
        if(objetivo_local == 0)
        {
            printf("\n\nMuito bacana compadre, mas qual lugar voce prefere? (ir a praia / ficar em casa / viajar/ outro): ");
            gets(local);
            fflush(stdin);
            k = strlen(local);
            while(i<k)
            {
                local[i] = tolower(local[i]);
                i++;
            }
            i=0;
        }





        printf("\n\n");
        while(!feof((banco)))
        {

            EOF_ctrl = fread(&pessoa, sizeof(struct dados),1,banco);

            if(EOF_ctrl != 0)
            {


                obj_hobbie = 0;
                obj_local = 0;
                obj_nome = 0;
                obj_filme = 0;

                obj_nome = compara(pessoa->nome, nome);

                obj_filme = compara(pessoa->filme, filme);
                obj_hobbie = compara(pessoa->hobbie, hobbie);
                obj_local = compara(pessoa->local, local);





                if(obj_nome != 0)
                {
                    amostra(&pessoa[i], i);
                }
                if(obj_filme != 0)
                {
                    amostra(&pessoa[i], i);


                }
                if(obj_hobbie != 0)
                {
                    amostra(&pessoa[i], i);


                }
                if(obj_local != 0)
                {
                    amostra(&pessoa[i], i);



                }


            }
        }



        strcpy(prince_nome, pessoa_principal_nome);
        strcpy(prince_cidade, pessoa_principal_cidade);
        strcpy(prince_filme, pessoa_principal_filme);
        strcpy(prince_hobbie, pessoa_principal_hobbie);
        strcpy(prince_local, pessoa_principal_local);













        //REINICIANDO O ARQUIVO
        rewind(banco);

        //TESTE DE COMPATIBILIDADE
        if(objetivo_nome == 0)
        {
            while(!feof((banco)))
            {

                EOF_ctrl = fread(&pessoa, sizeof(struct dados),1,banco);



                if(EOF_ctrl != 0)
                {


                    aux_nome = strcasecmp(prince_nome, pessoa->nome);

                    if(aux_nome != 0)
                    {

                        cont = 0;
                        i=0;
                        k=0;






                        aux_hobbie = compara(pessoa->hobbie, prince_hobbie);
                        aux_local = compara(pessoa->local, prince_local);
                        aux_cidade = compara(pessoa->cidade, prince_cidade);



                        for(k=0;k<strlen(prince_filme);k++)
                        {
                            i==0;

                            do
                            {



                                espe_filme[i] = prince_filme[k];
                                printf("\n%i",i);
                                printf("%s", espe_filme);
                                k++;
                                i++;


                            }while(espe_filme[i]<=',');
                            printf("\ntanamao");

                            if(compara(pessoa->filme, espe_filme)!= 0)
                            {
                                cont++;
                                printf("\nentroK\n");



                            }

                        }

                        if(aux_hobbie != 0)
                        {
                            //cont++;

                        }
                        if(aux_local != 0)
                        {
                            //cont++;

                        }
                        if(aux_cidade != 0)
                        {
                            //cont++;

                        }
                        alma_gemea[a] = cont;

                        cont*=25;

                        if(cont > 0)
                        {
                            printf("\n\n\nEh %0.2f%% compativel com \n", cont);
                            amostra(&pessoa[i], i);

                        }

                    }
                }
            }
            }
        }







        fclose(banco);








    }










    return 0;
}









