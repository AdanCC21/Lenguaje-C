void My_Min (char cad[], int lon)
{
    int i;
    for(i=0;i<lon;i++)
    {
        if(cad[i] >='A')
        {
            if(cad[i] <= 'Z')
            {
                cad[i]+=32;
            }
        }
    }
}