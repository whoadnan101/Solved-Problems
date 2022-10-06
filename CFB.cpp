//Check for binary
bool isBinary(string str)
{
   int n=str.length();
   for(int i=0;i<n;i++){
       if(str[i]=='1' || str[i]=='0'){
           continue;
       }
   else
       return false;
   }
   return true;
}