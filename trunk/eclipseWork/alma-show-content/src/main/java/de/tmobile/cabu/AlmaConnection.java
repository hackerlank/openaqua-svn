/**
 * 
 */
package de.tmobile.cabu;


import java.sql.SQLException;




/**
 * @author behrenan
 * 
 */
public class AlmaConnection {
	private Logger logger = Logger.getRootLogger();
	private TTConnection connection = null;
	private boolean allFine = false;

	
	AlmaConnection(final String driver) throws ClassNotFoundException {
		connection = new TTConnection(driver);
		allFine = true;
	}
	

	public void listTemplates(int whatToRun) {
		if (allFine != true) return;
		try {
			CSubTypeList.getInstances().refresh(connection);
			CCareDescriptionList.getInstances().refresh(connection);
			CDescriptionList.getInstances().refresh(connection);
			CIdentificationList.getInstances().refresh(connection);

			if (whatToRun == 0) {
				CSubTypeList.getInstances().print("SUBTYPE");
				CCareDescriptionList.getInstances().print("CareDescription");
				CDescriptionList.getInstances().print("Description");
				CIdentificationList.getInstances().printTemplateIds("TEMPL_IDs");
				CIdentificationList.getInstances().printContractIds("CONTR_IDs");
			}
			
			if (whatToRun == 1) CIdentificationList.getInstances().printTemplateIds("TEMPL_IDs");
			if (whatToRun == 2) CIdentificationList.getInstances().printContractIds("CONTR_IDs");
			if (whatToRun == 3) CSubTypeList.getInstances().print("SUBTYPE");;
			if (whatToRun == 4) CDescriptionList.getInstances().print("Description");
			if (whatToRun == 5) CCareDescriptionList.getInstances().print("CareDescription");
			
			
		} catch (SQLException e) {
			connection.reportSQLException(e);
		}
	}
	
	public void Connect(final String dsn) {
		if (allFine != true) return;
		logger.info("Make Connection to: " + dsn);
		allFine = connection.Connect(dsn);
		
	}

	public void Disconnect() {
		if (allFine != true) return;
		logger.info("Disconnected");
		connection.Disconnect();		
	}

}
