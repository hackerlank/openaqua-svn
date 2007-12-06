/**
 * 
 */
package de.tmobile.cabu;


import java.sql.ResultSet;
import java.sql.SQLException;


/**
 * @author behrenan
 * 
 */

public class CDescriptionList extends CBaseList {
	private static final long serialVersionUID = 1056598853660288340L;
	private static CDescriptionList INSTANCE = new CDescriptionList();

	public static CDescriptionList getInstances() {
		return INSTANCE;
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see de.tmobile.cabu.CBaseList#getPrintDescription()
	 */
	@Override
	public String getPrintDescription() {
		// TODO Auto-generated method stub
		return "";
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see de.tmobile.cabu.CBaseList#getPrintHeader()
	 */
	@Override
	public String getPrintHeader(final String prefix) {
		// TODO Auto-generated method stub
		return "";
	}

	@Override
	protected String getQueryString() {
		return "select description_id, description from acm_schema.acm$ta_description";
	}

	@Override
	protected void HandleQueryResult(final ResultSet rs) throws SQLException {
		while (rs.next()) {
			store(new CDescription(rs.getInt(1), rs.getString(2)));
		}
	}

}