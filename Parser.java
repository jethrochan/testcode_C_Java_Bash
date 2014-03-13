//Jethro Chan
//Instructions: Run this with my courselist.txt file I have also attached to this repository. 

//package parser;

import java.io.*;
import java.nio.charset.*;
import java.text.NumberFormat;
import java.util.*;

public class Parser {

    public static void main(String[] args) throws IOException
    {
	BufferedReader in = getReader("courselist.txt");
	
	String line = null;
	try 
	{
	    line = in.readLine();
	} 
	catch (IOException e) 
	{
	    // TODO Auto-generated catch block
	    e.printStackTrace();
	}
	
	int crn;
	Vector vect = new Vector();

	while(line != null)
	    {
		//String coursename;
		//String[] data; //declare array for StringSplit
		Boolean b = true;	
		try 
		{ 
		    crn = Integer.parseInt(line); 
		    //System.out.println(crn); 
		    vect.addElement(crn);
		} 
		catch(NumberFormatException nFE) 
	        { 
		    b = false;
		}
	       	
		//System.out.println(data[0]);
     		line = in.readLine();
	    }//while
	
        Enumeration vectEnum = vect.elements();
	while(vectEnum.hasMoreElements())
	    System.out.print(vectEnum.nextElement() + " ");
	
	System.out.println();//prints a newline after elements in vector printed

	in.close();
    }//end main


    private static BufferedReader getReader(String name)
    {
	BufferedReader in = null;
	try
	    {
		File file = new File("courselist.txt");
		in = new BufferedReader(new FileReader(file));
	    }//try
	catch (FileNotFoundException e)
	    {
		System.out.println("File Does Not Exist");
		System.exit(0);
	    }//catch
	catch (IOException e)
	    {
		System.out.println("I/O Error");
		System.exit(0);
	    }//catch
	
	return in;
    }//end class def BufferedReader
    
}//class def Parser
