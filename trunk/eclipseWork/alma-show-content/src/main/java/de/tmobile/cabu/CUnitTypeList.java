/**
 * 
 */
package de.tmobile.cabu;


/**
 * @author behrenan
 * 
 */
public class CUnitTypeList extends CAlmaDataTypeBaseList {
	private static final long serialVersionUID = 1056598853660288333L;
	private static CUnitTypeList INSTANCE = new CUnitTypeList();

	public static CUnitTypeList getInstances() {
		return INSTANCE;
	}

	@Override
	protected String getQueryString() {
		return "select unit_cv, description_id, sorting, valid from acm_schema.acm$ta_unit_cv";
	}

}