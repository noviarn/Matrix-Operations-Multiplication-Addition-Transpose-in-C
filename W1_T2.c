#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

void clrscr()
{
    system("@cls||clear");
}

int main()
{
    int m1[3][3];
    int m2[3][3];
    int m3[3][3];
    int i,j,k,pilihan;

    printf("Masukkan Matrix Pertama (3 x 3)\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", (*(m1+i)+j));
        }
    }

    printf("\nMasukkan Matrix Kedua (3 x 3)\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", (*(m2+i)+j));
        }
    }

    do{
        clrscr();
        printf("1. Perkalian Dua Buah Matrix\n");
        printf("2. Penjumlahan Dua Buah Matrix\n");
        printf("3. Transpose Dua Buah Matrix\n");
        printf("4. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);

        switch(pilihan)
        {
            case 1:
                    for(i = 0; i < 3; ++i)
                    {
                        for(j = 0; j < 3; ++j)
                        {
                            *(*(m3+i)+j) = 0;
                        }
                    }

                    for(i=0;i<3;i++)
                    {
                        for(j=0;j<3;j++)
                        {
                            for(k=0;k<3;k++)
                            {
                                *(*(m3+i)+j)+=(*(*(m1+i)+k)) * (*(*(m2+k)+j));
                            }
                        }
                    }

                    for(i=0;i<3;i++)
                    {
                        for(j=0;j<3;j++)
                        {
                            printf("%d ", *(*(m3+i)+j));
                        }
                        printf("\n");
                    }

                    printf("\nKlik tombol apapun untuk kembali.");
                    getch();
                    break;
            case 2:
                    for(i=0;i<3;i++)
                    {
                        for(j=0;j<3;j++)
                        {
                            *(*(m3+i)+j)=*(*(m1+i)+j) + *(*(m2+i)+j);
                            printf("%d ", *(*(m3+i)+j));
                        }
                        printf("\n");
                    }

                    printf("\nKlik tombol apapun untuk kembali.");
                    getch();
                    break;
            case 3:
                    printf("Transpose Matrix Pertama\n");
                    for(i=0;i<3;i++)
                    {
                        for(j=0;j<3;j++)
                        {
                            *(*(m3+i)+j)=*(*(m1+j)+i);
                            printf("%d ", *(*(m3+i)+j));
                        }
                        printf("\n");
                    }

                    printf("\nTranspose Matrix Kedua\n");
                    for(i=0;i<3;i++)
                    {
                        for(j=0;j<3;j++)
                        {
                            *(*(m3+i)+j)=*(*(m2+j)+i);
                            printf("%d ", *(*(m3+i)+j));
                        }
                        printf("\n");
                    }

                    printf("\nKlik tombol apapun untuk kembali.");
                    getch();
                    break;
        }
    }while(pilihan!=4);

    printf("\nKeluar berhasil.\n");

    return 0;
}
