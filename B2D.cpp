//Decimal to binary conversion
void toBinary(int n)
{
    int i=0,bit,ans=0;
    while(n!=0){
        bit=n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;i++;
    }
    cout<<ans;
}