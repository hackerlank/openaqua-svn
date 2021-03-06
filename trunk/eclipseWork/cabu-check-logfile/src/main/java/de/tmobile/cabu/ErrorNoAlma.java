/**
 * 
 */
package de.tmobile.cabu;

import java.io.IOException;



/**
 * @author behrenan
 * 
 */
public class ErrorNoAlma {
	private static ErrorNoAlma	INSTANCE	= new ErrorNoAlma();


	public static ErrorNoAlma getInstance() {
		return INSTANCE;
	}

	private int	count	= 0;


	public void add(final LogFileLine line) {
		count++;
	}


	public void print() throws IOException {
		if (count == 0) { return; }
		if (Configuration.getInstance().getLogFileType() != 1) { return; }
		final Logger log = Logger.getRootLogger();
		log.out("-------------------------------------------------------------");
		log.out("Found " + count + " Errors for unhandled requests of type \"Alma was not available\"");
		log.out("   (Not listended here ...)");
		log.out("");

	}
}
