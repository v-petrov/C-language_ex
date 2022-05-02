#include "file_handling.h"

int main()
{
    //#1
//    int num;
//    FILE *fptr;
//
//    fptr = fopen("E:\\C\\file_handling\\program.txt", "w");
//
//    if(fptr == NULL)
//    {
//        printf("Error!");
//        exit(1);
//    }
//
//    printf("Enter num: ");
//    scanf("%d", &num);
//
//    fprintf(fptr, "%d", num);
//    fclose(fptr);

    //#2
//    int num;
//    FILE *fptr;
//
//    fptr = fopen("E:\\C\\file_handling\\program.txt", "r");
//
//    if(fptr == NULL)
//    {
//        printf("Error! Opening file");
//        exit(1);
//    }
//
//    fscanf(fptr, "%d", &num);
//    printf("Value of num = %d", num);
//    fclose(fptr);

    //#3
//    int n;
//    struct threeNum num;
//    FILE *fptr;
//
//    fptr = fopen("E:\\C\\file_handling\\program_b.bin", "wb");
//
//    if(fopen == NULL)
//    {
//        printf("Error! Opening file!");
//        exit(1);
//    }
//
//    for(n = 1; n < 5; n++)
//    {
//        num.n1 = n;
//        num.n2 = 5*n;
//        num.n3 = 5*n + 1;
//        fwrite(&num, sizeof(struct threeNum), 1, fptr);
//    }
//    fclose(fptr);

    //#4
//    int n;
//    struct threeNum num;
//    FILE *fptr;
//
//    fptr = fopen("E:\\C\\file_handling\\program_b.bin", "rb");
//
//    if(fopen == NULL)
//    {
//        printf("Error! Opening file!");
//        exit(1);
//    }
//
//    for(n = 1; n < 5; n++)
//    {
//        fread(&num, sizeof(struct threeNum), 1, fptr);
//        printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
//    }
//    fclose(fptr);

    //#5
//   int n;
//   struct threeNum num;
//   FILE *fptr;
//
//   if ((fptr = fopen("E:\\C\\file_handling\\program_b.bin","rb")) == NULL){
//       printf("Error! opening file");
//
//       // Program exits if the file pointer returns NULL.
//       exit(1);
//   }
//
//   // Moves the cursor to the end of the file
//   fseek(fptr, -sizeof(struct threeNum), SEEK_END);
//
//   for(n = 1; n < 5; ++n)
//   {
//      fread(&num, sizeof(struct threeNum), 1, fptr);
//      printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
//      fseek(fptr, -2*sizeof(struct threeNum), SEEK_CUR);
//   }
//   fclose(fptr);

    //#6
//    char str[SIZE];
//    FILE *fptr;
//    char fname[20]="test.txt";
//
//
//    printf("\n\n Create a file (test.txt) and input text :\n");
//	printf("----------------------------------------------\n");
//    fptr=fopen(fname,"w");
//    if(fptr==NULL)
//    {
//        printf(" Error in opening file!");
//        exit(1);
//    }
//    printf(" Input a sentence for the file : ");
//    fgets(str, sizeof(str), stdin);
//    fprintf(fptr,"%s",str);
//    fclose(fptr);
//    printf("\n The file %s created successfully...!!\n\n",fname);

    //#7
//    char c;
//    char fname[20];
//    FILE *fptr;
//    printf("Input the name of the file: ");
//    scanf("%s", fname);
//
//    fptr = fopen(fname, "r");
//
//    if(fptr == NULL)
//    {
//        printf("Error, can't open the file ");
//    }
//    printf("Text is: ");
//    while((c = fgetc(fptr)) != EOF)
//    {
//        printf("%c", c);
//    }
//    fclose(fptr);
//
    //#8
//    char line[SIZE];
//    FILE *fptr;
//    int n;
//    printf("Input the number of lines to be written: ");
//    scanf("%d", &n);
//
//    fptr = fopen("test.txt","a");
//
//    for(int i = 1; i <= n + 1; i++)
//    {
//        fgets(line, sizeof(line), stdin);
//        fputs(line,fptr);
//    }
//
//    fclose(fptr);
//

    //#9
//    FILE *fp;
//    int i;
//
//    if((fp = fopen("myfile.txt", "w")) == NULL)
//    {
//        perror(NULL);
//        exit(EXIT_FAILURE);
//    }
//
//    i = 100;
//
//    if(fwrite(&i, 2, 1, fp) != 1)
//    {
//        printf("Write error occured. \n");
//        exit(EXIT_FAILURE);
//    }
//    fclose(fp);
//
//    if((fp = fopen("myfile.txt", "r")) == NULL)
//    {
//        perror(NULL);
//        exit(EXIT_FAILURE);
//    }
//
//    if(fread(&i, 2, 1, fp) != 1)
//    {
//        printf("Read error occured. \n");
//        exit(EXIT_FAILURE);
//    }
//    printf("i is %d", i);
//    fclose(fp);

//    //#10
//    int N, n, cnt_even = 0, cnt_odd = 0;
//    printf("Enter N: ");
//    scanf("%d", &N);
//
//    FILE *fp;
//    srand(time(NULL));
//
//    if((fp = fopen("binary", "wb")) == NULL)
//    {
//        perror(NULL);
//        exit(1);
//    }
//
////    fprintf(fp, "%d", N);
////    fprintf(fp, "%c", ' ');
//
//    if(fwrite(&N, sizeof(int), 1, fp) != 1)
//    {
//        perror(NULL);
//        exit(2);
//    }
//
//    for(int i = 1; i <= N; i++)
//    {
//        n = rand() % 50;
////        fprintf(fp, "%d", n);
////        fprintf(fp, "%c", ' ');
//
//        if(fwrite(&n, sizeof(int), 1, fp) != 1)
//        {
//            perror(NULL);
//            exit(3);
//        }
//    }
//    fclose(fp);
//
//    if((fp = fopen("binary", "rb")) == NULL)
//    {
//        perror(NULL);
//        exit(4);
//    }
//
//    for(int i = 1; i <= N + 1; i++)
//    {
//        if(fread(&n, sizeof(int), 1, fp) != 1)
//        {
//            perror(NULL);
//            exit(5);
//        }
//        //fscanf(fp, "%d", &n);
//        //printf("n = %d\n", n);
//        if(n % 2 == 0)
//        {
//            cnt_even++;
//        }
//        else
//        {
//            cnt_odd++;
//        }
//    }
//
//    printf("Even numbers: %d\nOdd numbers: %d", cnt_even, cnt_odd);
//    fclose(fp);
//
//    FILE *fp_txt;
//
//    if((fp = fopen("binary", "rb")) == NULL)
//    {
//        perror(NULL);
//        exit(1);
//    }
//
//    int nums[N+1];
//
//    for(int i = 0; i < N + 1; i++)
//    {
//        if(fread(&n, sizeof(int), 1, fp) != 1)
//        {
//            perror(NULL);
//            exit(5);
//        }
//        nums[i] = n;
//    }
//    fclose(fp);
//    int temp;
//    for(int i = 0; i < N; i++)
//    {
//        for(int j = i + 1; j < N + 1; j++)
//        {
//            if(nums[i] > nums[j])
//            {
//                temp = nums[i];
//                nums[i] = nums[j];
//                nums[j] = temp;
//            }
//        }
//    }
//
//    if((fp_txt = fopen("numbers.txt", "w")) == NULL)
//    {
//        perror(NULL);
//        exit(1);
//    }
//
//    for(int i = 0; i < N + 1; i++)
//    {
//        fprintf(fp_txt, "%d ", nums[i]);
//    }
//    fclose(fp_txt);

    //#11
    vehicle car1;
    fill_info(&car1);

    FILE *fp_b, *fp_t;

    if((fp_b = fopen("binary_car", "wb")) == NULL)
    {
        perror(NULL);
        exit(1);
    }

    if(fwrite(&car1, sizeof(car1), 1, fp_b) != 1)
    {
        perror("Struct problem(b)");
        exit(1);
    }

    if((fp_t = fopen("text_car.txt", "w")) == NULL)
    {
        perror(NULL);
        exit(1);
    }

    fprintf(fp_t, "%s %s %.2f %.2f %c \n", car1.brand, car1.model, car1.volume_of_engine, car1.price, car1.registration);

    fflush(stdin);
    while(1)
    {
        char c;
        printf("Do you want to add a new car to the list[Y/N]: ");
        scanf("%c", &c);
        if(c == 'Y' || c == 'y')
        {
            vehicle car2;
            add_car(&car2);

            if(fwrite(&car2, sizeof(car2), 1, fp_b) != 1)
            {
                perror("Struct problem(b2)");
                exit(1);
            }

            fprintf(fp_t, "%s %s %.2f %.2f %c \n", car2.brand, car2.model, car2.volume_of_engine, car2.price, car2.registration);
        }
        else
        {
            fclose(fp_b);
            fclose(fp_t);
            break;
        }
        fflush(stdin);
    }

    vehicle car_b;
    char buff[BUFSIZ];

    if((fp_b = fopen("binary_car", "rb")) == NULL)
    {
        perror(NULL);
        exit(1);
    }

    if((fp_t = fopen("text_car.txt", "r")) == NULL)
    {
        perror(NULL);
        exit(1);
    }

    if(fread(&car_b, sizeof(car_b), 1, fp_b) != 1)
    {
        perror("Struct problem(b_read)");
        exit(1);
    }

    disp_info(car_b);
    printf("\n");
    while((fgets(buff,BUFSIZ,fp_t))!=NULL)
    {
        puts(buff);
    }

    return 0;
}
