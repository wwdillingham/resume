//Wesley Dillingham
//Out Of Class Excercise
//Java For Programmers


//GuessServer




import java.io.*;
import java.net.*;
import java.util.*;

public class GuessServer {

	
	public static void main(String [] args) {
		try {
		
					
		
							ServerSocket ss = new ServerSocket(5678);
							System.out.println("Listening......");
							Socket sock = ss.accept();
							System.out.println("Client has Connected");
							
							
							//Generate the random number
							Random generator = new Random();
							int randy = generator.nextInt(100) + 1; //+1 makes it 1-100 instead of 0-100
							System.out.println("Random number Generated: " + randy);
							
							//Get the input stream
							InputStream is = sock.getInputStream();
							InputStreamReader isr = new InputStreamReader(is);
							BufferedReader br = new BufferedReader(isr);
							
							//Create printwriter
							PrintWriter pw = new PrintWriter(sock.getOutputStream());
							pw.flush();
							
							int guess;
							String StringGuess;

							
					do{	
										
							//Ask Client to pick a number
							pw.println("Guess a number between 0 and 100: ");
							pw.flush();
							
									
							
							//Read Answer back from client
						   StringGuess = br.readLine();
							guess = Integer.parseInt(StringGuess);
							System.out.println("Number received from Client: " + guess);
							
							//Tell the user whether the number is too high or too low
							if (guess > randy)
							{
								pw.println("Too high, try again ");
								pw.flush();
								pw.println(0);
								pw.flush();
							}
							else if (guess < randy)
							{
								pw.println("Too low, try again ");
								pw.flush();
								pw.println(0);
								pw.flush();	
							}
							else
							{
								pw.println(1);
								pw.flush();
							}					
													
						}while(guess != randy);
						
						System.out.println("O yea, just like that");
						pw.println("O yea, just like that");
						
				
			 }//end try
			 catch(Exception e)
			 {
			 	System.out.println("Exception throw");
			 }
		
		
	}//end main
		
		
}//end GuessServer class	
	