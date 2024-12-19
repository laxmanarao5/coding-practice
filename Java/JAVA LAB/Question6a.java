import java.io.*;
public class Question6a
{
    public static void main(String args[]) throws Exception
    {
        // BUFFERED READER

      FileReader fr=new FileReader("text.txt");
       BufferedReader br=new BufferedReader(fr); // Passing reader object
      int i=0;
      while((i=br.read())!=-1)
       {
       System.out.print((char)i);
        System.out.print(""); //Beside of every character it will print
       }
       String line=br.readLine();
       while(line!=null)
       {
           System.out.println(line);
           System.out.println("");// After every line it will print
           line=br.readLine();
       }
       br.close();
       fr.close(); 

       // BUFFERED WRITER

       FileWriter fw1=new FileWriter("text.txt",true);
        BufferedWriter bw=new BufferedWriter(fw1);
        bw.newLine();
        bw.write(100); // ASCII character written
        //bw.write("\n");
        bw.newLine();
        bw.write("Hello guys");
        bw.newLine();
        bw.write("What are doing here?");
        bw.newLine();
        char[] ch={'r','g','u','k','t'};
        bw.write(ch);
        bw.newLine();
        bw.flush();
        System.out.println("Successfully Completed!"); 

        // PRINT WRITER
       
       FileWriter fw=new FileWriter("textt",true);
       PrintWriter pw=new PrintWriter(fw);
       pw.println("cse");
       pw.println(100);
       pw.println('d');
       pw.flush();
       System.out.print("Successfully Completed!");
    }
}