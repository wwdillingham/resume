import java.net.*;
import java.io.*;
import java.util.*;

public class GuessClient
{
	public static void main( String[] args )
	{
		try
		{
			Scanner keyboard = new Scanner(System.in);
			
			//Create Socket
			Socket sock = new Socket ("127.0.0.1", 5678);
			
			//Create Buffered Writer
			OutputStream os = sock.getOutputStream();
			OutputStreamWriter osw = new OutputStreamWriter(os);
			BufferedWriter bw = new BufferedWriter(osw);
			
			//Create Buffered Reader
			InputStream is = sock.getInputStream();
			InputStreamReader isr = new InputStreamReader(is);
			BufferedReader br = new BufferedReader(isr);
			int done = 0;
			int guess;
			
			do{
			
					//Accept message from server
					System.out.println(br.readLine());
					
					
					
					//Send guess to server
					guess = keyboard.nextInt();
					bw.write(Integer.toString(guess) + "\r\n");
					bw.flush();
					
					
					//Accept whether it was too high or too low
					System.out.println( br.readLine() );
					
					//Sever tells us whether we continue
					done = br.read();
					
					
					
				}while(done != 1);	
				
					//Accept congratulations message
					System.out.println(br.read());
		
			
			
			
			
			
					
		}
		catch( Exception exc )
		{
			System.out.println( "Exception thrown" );
		}
	}
}