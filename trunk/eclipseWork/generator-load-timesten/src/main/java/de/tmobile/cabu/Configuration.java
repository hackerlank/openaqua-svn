/**
 * 
 */
package de.tmobile.cabu;

/**
 * @author behrenan
 *
 */
final public class Configuration {
	/**
	 * Its a singleton
	 */
	final private static Configuration INSTANCE = new Configuration();
	private int maxConnections;
	private int maxContracts;
	private int reqLoops;
	private String myDNS; 
	private String myDriver;


	private Configuration() {
		super();
		maxConnections = 100;
		maxContracts = 200;
		reqLoops     = 10;
		myDNS ="jdbc:timesten:direct:PerfTest";
		myDriver = "com.timesten.jdbc.TimesTenDriver";

	}

	/*
	 * @result returns a object reference to this singleton
	 */
	final public static Configuration getInstance() {
		return INSTANCE;
	}
	
	public String getDriver() {
		return myDriver;
	}
	
	public String getDNS() {
		return myDNS;
	}

	public int getReqLoops() {
		return reqLoops;
	}

	public int getMaxContracts() {
		return maxContracts;
	}
	/**
	 * @return the threadCounter
	 */
	public int getMaxConnections() {
		return maxConnections;
	}

	/**
	 */
	public void setMaxConnections(int maxConnections) {
		this.maxConnections = maxConnections;
	}


}