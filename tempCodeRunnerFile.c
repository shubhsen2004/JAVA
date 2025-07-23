int main()
{
    char alphabet='A';
    char *p=&alphabet;
    for(int i=0;i<26;i++)
    printf("%c\t",*p+i);
}