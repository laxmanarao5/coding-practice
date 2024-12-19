import java.io.*;
class Question6b
{
   public static void main(String args[])
   {
      try
      {
          byte[] array={1,2,3,4,5,6,7,8,9};
          ByteArrayInputStream bais=new ByteArrayInputStream(array);
          for(int i=0;i<array.length;i++)
          {
             int data=bais.read();
             bais.skip(2);
             if(data==-1)
            {
               break;
            }
            System.out.println(data);
          }
         }
         catch(Exception e)
         {
            System.out.println(e);
         }
   }
}