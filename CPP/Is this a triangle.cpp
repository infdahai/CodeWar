namespace Triangle
{ 
  int Max_val(int a,int b)
  {
    return a<b?b:a;
  }
  int Min_val(int a,int b)
  {
    return a>b?b:a;
  }
  
  bool isTriangle(int a, int b, int c)
  {
    int temp;
    if(a>0&&b>0&&c>0){
       int z = Max_val(Max_val(a,b),c);
       if(z==a)
         return b+c<0?true:(b+c>z);
        else if(z==b)
          return a+c<0?true:(a+c>z);
         else
           return a+b<0?true:(a+b >z);
     }
    return false;
  }
};
