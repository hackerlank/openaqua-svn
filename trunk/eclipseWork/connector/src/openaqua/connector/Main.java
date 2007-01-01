/**
 * 
 */
package openaqua.connector;


import org.apache.log4j.ConsoleAppender;
import org.apache.log4j.Level;
import org.apache.log4j.Logger;
import org.apache.log4j.PatternLayout;

/**
 * @author tukaram
 *
 */
public class Main {
	private static Logger logger = Logger.getRootLogger();
	
	/**
	 * @param args
	 */
	public static void main(String[] args) {
		try {
			//Setup a Simple Logger
			PatternLayout layout = new PatternLayout( "%-5p\t[%t] %c: %m%n" );
			
			//Logger for Console
	        ConsoleAppender consoleAppender = new ConsoleAppender( layout );
	        logger.addAppender( consoleAppender );
	        
	        //Logger for File
	        //FileAppender fileAppender = new FileAppender( layout, "MeineLogDatei.log", false );
	        //logger.addAppender( fileAppender );
	        
	        //Set Default Debug Level
	        // ALL | DEBUG | INFO | WARN | ERROR | FATAL | OFF:
	        logger.setLevel( Level.ALL);

	        //execute the singleton Connector object
	        Connector.getInstance().ExecuteUidMacro();
	        logger.info("Done");
	        
		} catch( Exception ex ) {
			ex.printStackTrace();
			System.out.println( ex );
	    }

	}

}