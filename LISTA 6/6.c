

/* int  main() 
{ 
   int *ptr, i; 
   ptr = (int *) malloc(sizeof(int)); 
   *ptr = 10; 
   for(i=0;i<5;i++){ 
      *ptr=*ptr+1; 
   } 
   printf("\nptr: %d", *ptr); 
   free(ptr); 
   return 0; 
} */

/* int  main() 
{ 
 int *ptr, i; 
 ptr = (int *) malloc(sizeof(int)); 
 *ptr = 10; 
 for(i=0;i<5;i++){ 
    ptr=ptr+1; 
 } 
 printf("\nptr: %p", ptr); 
 free(ptr); 
 return 0; 
}  */

enquanto o primeiro codigo incrementa o valor de ptr, o segundo incrementa o endereço de ptr, avançado 4 bytes (tamanho de um int) a cada iteração. 