/**
 * 
 */
package de.tmobile.cabu;


import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Timestamp;


/**
 * @author behrenan
 * 
 */
public class CElementTmplPartList extends CBaseList {
	final private int parentId;
	final private CElementTmpl parent;

	public CElementTmplPartList(final int parentId, final CElementTmpl parent) {
		this.parentId = parentId;
		this.parent = parent;
	}


	public void buildUnifiedPrintList(final String prefix, final UnifiedTableOutput uto) {
		for (final CBaseType base : values()) {

		}
	}

	public int getParentId() {
		return parentId;
	}

	@Override
	public String getPrintDescription() {
		return null;
	}

	@Override
	public String getPrintHeader(final String prefix) {
		return null;
	}

	@Override
	protected String getQueryString() {
		if (parentId == 0) {
			return "select element_template_id, element_type_cv, element_subtype_cv, data_type_cv, unit_cv, parent_id, "
					+ " root_id, acm_description_id, const_flag, value, obj_version, valid_from, valid_to from acm_schema.acm$ta_element_tmpl where parent_id is null and parent_id is null order by element_template_id";

		} else {
			final String result = "select element_template_id, element_type_cv, element_subtype_cv, data_type_cv, unit_cv, parent_id, "
					+ " root_id, acm_description_id, const_flag, value, obj_version, valid_from, valid_to from acm_schema.acm$ta_element_tmpl where parent_id="
					+ parentId + " order by element_template_id";
			//Logger.getRootLogger().debug("CMD=" + result);
			return result;

		}
	}

	@Override
	protected void HandleQueryResult(final ResultSet rs) throws SQLException {
		while (rs.next()) {
			final int id = rs.getInt(1);
			final int type = rs.getInt(2);
			final int subtype = rs.getInt(3);
			final int datatype = rs.getInt(4);
			final int unittype = rs.getInt(5);
			final int parentId = rs.getInt(6);
			final int rootId = rs.getInt(7);
			final int amcDescId = rs.getInt(8);
			final int constFlag = rs.getInt(9);
			final String value = rs.getString(10);
			final int objVers = rs.getInt(11);
			final Timestamp valid_from = rs.getTimestamp(12);
			final Timestamp valid_to = rs.getTimestamp(13);
			final CElementTmpl tmpl = new CElementTmpl(id, objVers, valid_from, valid_to, type, subtype, datatype, unittype, parentId, rootId,
					amcDescId, constFlag, value);

			store(tmpl);

			if (parent != null) {
				parent.addAttribute(subtype, value);
			}


		}
	}
}