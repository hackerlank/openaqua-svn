/**
 * 
 */
package de.tmobile.cabu.alma;

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
	private int statMilliSeconds;
	private int almaPort;
	private String almaHost;


	private Configuration() {
		super();
		maxConnections = 3;
		maxContracts = 500000;
		reqLoops     = 100000;
		statMilliSeconds = 1000;
		almaPort = 32504;
		almaHost = "localhost";

	}

	/*
	 * @result returns a object reference to this singleton
	 */
	final public static Configuration getInstance() {
		return INSTANCE;
	}
	
	public int getStatsAllMilliseconds() {
		return statMilliSeconds;
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

	/**
	 * @return the almaHost
	 */
	public String getAlmaHost() {
		return almaHost;
	}

	/**
	 * @param almaHost the almaHost to set
	 */
	public void setAlmaHost(String almaHost) {
		this.almaHost = almaHost;
	}

	/**
	 * @return the almaPort
	 */
	public int getAlmaPort() {
		return almaPort;
	}

	/**
	 * @param almaPort the almaPort to set
	 */
	public void setAlmaPort(int almaPort) {
		this.almaPort = almaPort;
	}


}