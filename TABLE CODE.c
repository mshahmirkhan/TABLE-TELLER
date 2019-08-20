main()
{
    int table=0 , until=0, i;
    printf("\n\n\t\t\t***************TABLE**************\n\n\n");

          //taking date


    printf("\n\n\t ENTER THE NUMBER OF WHICH YOU WANT TABLE  %d",table);
    scanf("%d",&table);

    printf("\n\n\t\t TILL WHERE  %d",until);
    scanf("%d",&until);


    for(i=1 ;i<=until ;i++)
    {

        printf("\n\n\t\t%d * %d = %d",table,i,table*i);
    }
    getch();



}
