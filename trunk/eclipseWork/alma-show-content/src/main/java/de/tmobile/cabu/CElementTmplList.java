/**
 * 
 */
package de.tmobile.cabu;


/**
 * @author behrenan
 * 
 */
public class CElementTmplList extends CElementTmplPartList {
	private static final long serialVersionUID = 1056598853660288338L;
	private static CElementTmplList INSTANCE = new CElementTmplList(0);

	public static CElementTmplList getInstances() {
		return INSTANCE;
	}

	/**
	 * @param parentId
	 */
	public CElementTmplList(final int parentId) {
		super(parentId, null);
	}

}