/**
 *
 */
package de.tmobile.cabu;

import java.sql.Connection;
import java.sql.DataTruncation;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.SQLWarning;
import java.sql.Statement;

/**
 * @author behrenan
 * 
 */

public class TTConnection {
	/**
	 * prints all attributes of a SQLWarning object to System.err and all chained
	 * warnings
	 */
	public static void reportSQLWarning(SQLWarning wn) {
		int warnCount = 0;

		while (wn != null) {
			System.err.println("\n\t----- SQL Warning -----");

			// Is this a regular SQLWarning object or a DataTruncation object?
			if (wn instanceof DataTruncation) {
				final DataTruncation trn = (DataTruncation) wn;
				System.err.println("\tData Truncation Warning: " + trn.getMessage());
				if (warnCount == 0) {
					trn.printStackTrace();
				}

				System.err.println("\tSQL State: " + trn.getSQLState());
				System.err.println("\tNative Error Code: " + trn.getErrorCode());

				System.err.println("\n\tgetIndex (): " + trn.getIndex());
				System.err.println("\tgetParameter (): " + trn.getParameter());
				System.err.println("\tgetRead (): " + trn.getRead());
				System.err.println("\tgetDataSize (): " + trn.getDataSize());
				System.err.println("\tgetTransferSize (): " + trn.getTransferSize());
			} else {
				System.err.println("\tWarning Message: " + wn.getMessage());
				if (warnCount == 0) {
					wn.printStackTrace();
				}

				System.err.println("\tSQL State: " + wn.getSQLState());
				System.err.println("\tNative Error Code: " + wn.getErrorCode());
			}

			System.err.println("");

			wn = wn.getNextWarning();
			warnCount++;
		}
	}

	boolean hasReceivedSignal = false;
	private boolean isDriverLoaded;
	boolean shouldWait = false;
	private boolean isConnected = false;
	private Connection connection = null;

	private final Logger logger = Logger.getRootLogger();

	public TTConnection(final String driver) throws ClassNotFoundException {
		super();
		isDriverLoaded = false;
		loadDriver(driver);
	}

	public boolean Connect(final String dsn) {
		try {
			connection = DriverManager.getConnection(dsn);
			reportSQLWarning(connection.getWarnings());
			// connection.setAutoCommit (true);
			isConnected = true;
			Logger.getRootLogger().debug("Is connected to: " + dsn);
			return true;
		} catch (final SQLException e) {
			isConnected = false;
			logger.error("Cannot Connect to DSN: " + dsn);
			reportSQLException(e);
			return false;
		}
	}

	public Statement createStatement() throws SQLException {
		return connection.createStatement();
	}

	public boolean Disconnect() {
		try {
			if (connection != null && connection.isClosed() == false) {
				connection.close();
			}
			isConnected = false;
			return true;
		} catch (final SQLException ex) {
			reportSQLException(ex);
			return false;
		}
	}

	public boolean isConnected() {
		return isConnected;
	}

	public void loadDriver(final String driver) throws ClassNotFoundException {
		if (!isDriverLoaded) {
			Class.forName(driver);
			isDriverLoaded = true;
		}
	}

	public void reportSQLException(SQLException ex) {
		int errCount = 0;

		while (ex != null) {
			System.err.println("\n\t----- SQL Error -----");

			System.err.println("\tError Message: " + ex.getMessage());
			if (errCount == 0) {
				ex.printStackTrace();
			}

			System.err.println("\tSQL State: " + ex.getSQLState());
			System.err.println("\tNative Error Code: " + ex.getErrorCode());
			System.err.println("");

			ex = ex.getNextException();
			errCount++;
		}
	}

	/*
	 * public CTemplate buildTemplateByRootId(Integer rootId) { CTemplate result =
	 * new CTemplate(rootId); try { // exec SQL command Statement stmt; stmt =
	 * connection.createStatement();
	 * 
	 * ResultSet rs = stmt .executeQuery("select ELEMENT_TEMPLATE_ID,
	 * element_type_cv, element_subtype_cv, value from
	 * acm_schema.acm$ta_element_tmpl where root_id = parent_id and root_id=" +
	 * rootId);
	 *  // parse the result while (rs.next()) { int id = rs.getInt(1); int type =
	 * rs.getInt(2); int subtype = rs.getInt(3); String value = rs.getString(4);
	 * CAttribute attribute = new CAttribute(id, type, mapSubTypes .get(subtype),
	 * value); result.addAttribute(attribute); }
	 *  // close statements rs.close(); stmt.close();
	 *  } catch (SQLException e) { logger.error("Error while List Root ids for
	 * templates:"); reportSQLException(e); } return result; }
	 * 
	 * 
	 * public List<Integer> getTemplateIds() { List<Integer> result = new
	 * LinkedList<Integer>(); if (isConnected == false) return result;
	 * 
	 * try { // exec SQL command Statement stmt; stmt =
	 * connection.createStatement(); ResultSet rs = stmt .executeQuery("select
	 * ELEMENT_TEMPLATE_ID from ACM_SCHEMA.ACM$TA_ELEMENT_TMPL where
	 * element_template_id = root_id order by ELEMENT_TEMPLATE_ID ; ");
	 *  // parse the result while (rs.next()) { int element_id = rs.getInt(1);
	 * result.add(element_id); }
	 *  // close statements rs.close(); stmt.close();
	 *  } catch (SQLException e) { logger.error("Error while List Root ids for
	 * templates:"); reportSQLException(e); } return result; }
	 */
}
