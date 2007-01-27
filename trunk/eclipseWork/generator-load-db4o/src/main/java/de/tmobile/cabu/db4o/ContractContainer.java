/**
 * 
 */
package de.tmobile.cabu.db4o;

import java.util.Iterator;
import java.util.List;




/**
 * 
 *
 */
public class ContractContainer {
	List<Contract> contractList;
	String defaultString = "ABCDEFGEHA";
	final String containerName;

	public ContractContainer (String name) {
		super();
		containerName = name;
	}
	
	public void dump() {
		System.out.println("ContractContainer= (defaultString="+defaultString+" containerName="+containerName + ")");
		if (contractList == null) return;
		Iterator i = contractList.iterator();
		while(i.hasNext()) {
			Contract c = (Contract)i.next();
			c.dump();
		}
		
	}

	public boolean addContract(Contract c) {
		return contractList.add(c);
	}

	public Contract getContract(int key) {
		return getContract(new ContractKey(key));
	}

	public void updateContract(Contract c) {
		addContract(c);
	}

	public Contract getContract(ContractKey key) {
		Iterator<Contract> i = contractList.iterator();
		while(i.hasNext()) {
			Contract c = i.next();
			if ( c.getContractKey().equals(key) ) {
				return c;
			}
		}
		return null;
	}

	/**
	 * @return the containerName
	 */
	public String getContainerName() {
		return this.containerName;
	}

	/**
	 * @return the contractList
	 */
	public List<Contract> getContractList() {
		return this.contractList;
	}

	/**
	 * @param contractList the contractList to set
	 */
	public void setContractList(List<Contract> contractList) {
		this.contractList = contractList;
	}

	/**
	 * @return the defaultString
	 */
	public String getDefaultString() {
		return this.defaultString;
	}

	/**
	 * @param defaultString the defaultString to set
	 */
	public void setDefaultString(String defaultString) {
		this.defaultString = defaultString;
	}

}
