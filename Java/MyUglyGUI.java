//wesley dillingham
//java for programmers assignment 6
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;
import java.io.*;



public class MyUglyGUI 
{

	private JFrame f = new JFrame("Jesus, im ugly");
	
	
	
	
//Initialize the 5 areas compnonents 
	
	//NORTH
	private JPanel pnlNorth = new JPanel();
	private JButton btnNorth = new JButton("Check Spelling");
	
	//SOUTH
	private JPanel pnlSouth = new JPanel();
	private JSpinner spnrSouth = new JSpinner();
	
	//EAST
	private JPanel pnlEast = new JPanel();
	private JToggleButton paneEast = new JToggleButton("Make Bold");
	
	//WEST
	private JPanel pnlWest = new JPanel();
	private JLabel lblWest = new JLabel("Mouse me");
	
	//CENTER
	private JPanel pnlCenter = new JPanel();
	private JTextArea textCenter = new JTextArea();


//CONSTRUCTOR
	public MyUglyGUI()
	{
		pnlNorth.add( btnNorth ); //Adding swing object to the panel
		pnlSouth.add( spnrSouth );
		pnlEast.add( paneEast );
		pnlWest.add( lblWest );	
	//	pnlCenter.add( textCenter );		
		
		
		f.getContentPane().setLayout( new BorderLayout() ); 	//going to use a simple border layout 	
																				//which will each feature something wacky
																				
		f.setSize(600,600);																
																				
		f.getContentPane().add(pnlNorth, BorderLayout.NORTH); //add the panel to the frame
		f.getContentPane().add(pnlSouth, BorderLayout.SOUTH);
		f.getContentPane().add(pnlEast, BorderLayout.EAST);
		f.getContentPane().add(pnlWest, BorderLayout.WEST);
		f.getContentPane().add(textCenter, BorderLayout.CENTER);
		
		
   btnNorth.addActionListener(new ActionListener() //this action listener drops E's from the text box when north button clicked
																{  													
																		public void actionPerformed(ActionEvent e)
																		{
																			String datum = textCenter.getText();
																			System.out.println(datum);
																			char c;
																			String datum2 = " ";
																			
																				for (int i = 0; i < datum.length(); i++)
																				{
																				
																					c = (char) datum.charAt(i);
																			
																					
																					if (c != 'e' && c != 'E')
																					{
																						datum2+=c;
																					}
																					
																					
																				}
																				
																			textCenter.replaceRange(datum2, 0, datum.length());	
																												
																		}
																}
	                          );
									  
paneEast.addActionListener(new ActionListener() 				
												{  													
																		public void actionPerformed(ActionEvent e)
																		{
																			textCenter.setText("BOLD..... O thats not what you wanted");
																		}
												}
								 );
									  
									  
spnrSouth.addChangeListener(new ChangeListener(){
																		public void stateChanged(ChangeEvent e)
																		{
																			Font font = new Font("Serif", Font.ITALIC, 20);
																			textCenter.setFont(font);
																			
																		}
																}
									);
									
									
lblWest.addMouseListener(new MouseListener(){
																		public void mouseExited(MouseEvent e)
																		{
																			textCenter.setText("ffdgdg");
																		}
																		public void mouseEntered(MouseEvent b)
																		{
																			textCenter.setText("u are nothing");

																		}
																		public void mouseReleased(MouseEvent r)
																		{
																			textCenter.setForeground(Color.RED);
																		}
																		public void mousePressed(MouseEvent h)
																		{
																			textCenter.setBackground(Color.BLUE);
																		}
																		public void mouseClicked(MouseEvent s)
																		{
																			btnNorth.setVisible(false);
																		}
															}
								);

	}//end constructor



//MAIN
	public static void main(String[] args)
	{
		MyUglyGUI mug = new MyUglyGUI();
		mug.launchFrame();
	}
	
	
//LAUNCHER	
	public void launchFrame()
	{
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		f.pack();
		f.setVisible(true);
	}
	
}
