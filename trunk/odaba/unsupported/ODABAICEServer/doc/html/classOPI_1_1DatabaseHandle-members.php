<? include "layout/head.inc.php";?>
<!-- Generated by Doxygen 1.4.6 -->
<div class="tabs">
  <ul>
    <li><a href="index.php"><span>Main&nbsp;Page</span></a></li>
    <li><a href="namespaces.php"><span>Namespaces</span></a></li>
    <li id="current"><a href="annotated.php"><span>Classes</span></a></li>
    <li><a href="files.php"><span>Files</span></a></li>
  </ul></div>
<div class="tabs">
  <ul>
    <li><a href="annotated.php"><span>Class&nbsp;List</span></a></li>
    <li><a href="hierarchy.php"><span>Class&nbsp;Hierarchy</span></a></li>
    <li><a href="functions.php"><span>Class&nbsp;Members</span></a></li>
  </ul></div>
<h1>OPI::DatabaseHandle Member List</h1>This is the complete list of members for <a class="el" href="classOPI_1_1DatabaseHandle.php">OPI::DatabaseHandle</a>, including all inherited members.<p><table>
  <tr class="memlist"><td><a class="el" href="classOPI_1_1DatabaseHandle.php#fbf1c5cb85150d8f1d781cb8b5e83fa3">BaseType</a>(string strnames)</td><td><a class="el" href="classOPI_1_1DatabaseHandle.php">OPI::DatabaseHandle</a></td><td><code> [private]</code></td></tr>
  <tr class="memlist"><td><a class="el" href="classOPI_1_1DatabaseHandle.php#21bbc8f76e1210608fa2b603e2954578">CheckExpression</a>(string expression, DBObjectHandle *dbobjhandle, string clsnames)</td><td><a class="el" href="classOPI_1_1DatabaseHandle.php">OPI::DatabaseHandle</a></td><td><code> [private]</code></td></tr>
  <tr class="memlist"><td><a class="el" href="classOPI_1_1DatabaseHandle.php#af5a1d4b9f036e079dbc93e90ecf3549">CheckExpressionInClass</a>(DBObjectHandle *resobj, string clsnames, string exprnames, string implnames)</td><td><a class="el" href="classOPI_1_1DatabaseHandle.php">OPI::DatabaseHandle</a></td><td><code> [private]</code></td></tr>
  <tr class="memlist"><td><a class="el" href="classOPI_1_1DatabaseHandle.php#f788bbc552027e7c284e7eaf882773c7">CheckExtentDef</a>(string scopedname)</td><td><a class="el" href="classOPI_1_1DatabaseHandle.php">OPI::DatabaseHandle</a></td><td><code> [private]</code></td></tr>
  <tr class="memlist"><td><a class="el" href="classOPI_1_1DatabaseHandle.php#9960f00fa395cbf9c86222155d435295">CheckValueSet</a>(string scopedname)</td><td><a class="el" href="classOPI_1_1DatabaseHandle.php">OPI::DatabaseHandle</a></td><td><code> [private]</code></td></tr>
  <tr class="memlist"><td><a class="el" href="classOPI_1_1DatabaseHandle.php#08407c0798ba9c3938ee736b55832fa5">CopyCodeset</a>(DictionaryHandle *srcedicthandle, string strname, int namespaceid, string newnames, PIREPL dbreplace, bool retainSID, bool retainschemav)</td><td><a class="el" href="classOPI_1_1DatabaseHandle.php">OPI::DatabaseHandle</a></td><td><code> [private]</code></td></tr>
  <tr class="memlist"><td><a class="el" href="classOPI_1_1DatabaseHandle.php#7cc11d9508bdb09a116f90878cdc2ee7">CopyExtentDef</a>(DictionaryHandle *srcedicthandle, string extentname, string newnames, string targstruct, bool transaction, bool retainschemav)</td><td><a class="el" href="classOPI_1_1DatabaseHandle.php">OPI::DatabaseHandle</a></td><td><code> [private]</code></td></tr>
  <tr class="memlist"><td><a class="el" href="classOPI_1_1DatabaseHandle.php#f57e690b0c0b2349968a38e7a2d0a498">CopyStructure</a>(DictionaryHandle *srcedicthandle, string strname, int namespaceid, string newnames, string topname, PIREPL dbreplace, bool retainSID, bool retainschemav)</td><td><a class="el" href="classOPI_1_1DatabaseHandle.php">OPI::DatabaseHandle</a></td><td><code> [private]</code></td></tr>
  <tr class="memlist"><td><a class="el" href="classOPI_1_1DatabaseHandle.php#9f594069f400d9ccf0b6dd3ac9c09e01">CopyType</a>(DictionaryHandle *srcedicthandle, string strnames, string newnames, string topname, PIREPL dbreplace, bool retainSID, bool transaction, bool retainschemav)</td><td><a class="el" href="classOPI_1_1DatabaseHandle.php">OPI::DatabaseHandle</a></td><td><code> [private]</code></td></tr>
  <tr class="memlist"><td><a class="el" href="classOPI_1_1DatabaseHandle.php#aa181d097f783d4b1c1b3a20708e7602">CreateEnum</a>(string enumname, string basetype)</td><td><a class="el" href="classOPI_1_1DatabaseHandle.php">OPI::DatabaseHandle</a></td><td><code> [private]</code></td></tr>
  <tr class="memlist"><td><a class="el" href="classOPI_1_1DatabaseHandle.php#f5f0041e2765269e0a5b5fb226f89e76">CreateTempExtent</a>(string strnames, string extnamesw, string keynamew, string baseextsw, bool weakoptw, bool ownoptw)</td><td><a class="el" href="classOPI_1_1DatabaseHandle.php">OPI::DatabaseHandle</a></td><td><code> [private]</code></td></tr>
  <tr class="memlist"><td><a class="el" href="classOPI_1_1DatabaseHandle.php#e5e6685c421efccd932489844031211d">DeleteEnum</a>(string enumname)</td><td><a class="el" href="classOPI_1_1DatabaseHandle.php">OPI::DatabaseHandle</a></td><td><code> [private]</code></td></tr>
  <tr class="memlist"><td><a class="el" href="classOPI_1_1DatabaseHandle.php#56a3bc6952208f5ea510994076ea15fa">EnumToString</a>(string enumeration, int enumval, string pstring, int len)</td><td><a class="el" href="classOPI_1_1DatabaseHandle.php">OPI::DatabaseHandle</a></td><td><code> [private]</code></td></tr>
  <tr class="memlist"><td><a class="el" href="classOPI_1_1DatabaseHandle.php#3b5c0df485f53a22dc7549705bfd21cf">GetLastSchemaVersion</a>()</td><td><a class="el" href="classOPI_1_1DatabaseHandle.php">OPI::DatabaseHandle</a></td><td><code> [private]</code></td></tr>
  <tr class="memlist"><td><a class="el" href="classOPI_1_1DatabaseHandle.php#5ce7edc788f7a7db483c01d1a3079f02">GetTempName</a>(string extnames)</td><td><a class="el" href="classOPI_1_1DatabaseHandle.php">OPI::DatabaseHandle</a></td><td><code> [private]</code></td></tr>
  <tr class="memlist"><td><a class="el" href="classOPI_1_1DatabaseHandle.php#2a20069aec468450b355e01e2d442fc5">IsBasicType</a>(string typenames)</td><td><a class="el" href="classOPI_1_1DatabaseHandle.php">OPI::DatabaseHandle</a></td><td><code> [private]</code></td></tr>
  <tr class="memlist"><td><a class="el" href="classOPI_1_1DatabaseHandle.php#f2f3a6d997c1349019935c92175445e0">OpenDictionary</a>(ODABAClient *podabaclient, string cpath, PIACC accopt, bool wnetopt, int versionnr, ResourceTypes localressources, bool sysenv)</td><td><a class="el" href="classOPI_1_1DatabaseHandle.php">OPI::DatabaseHandle</a></td><td><code> [private]</code></td></tr>
  <tr class="memlist"><td><a class="el" href="classOPI_1_1DatabaseHandle.php#47d0534fc569f5665f9135d640f7ffee">StringToEnum</a>(string enumeration, string enumstring)</td><td><a class="el" href="classOPI_1_1DatabaseHandle.php">OPI::DatabaseHandle</a></td><td><code> [private]</code></td></tr>
  <tr class="memlist"><td><a class="el" href="classOPI_1_1DatabaseHandle.php#44f3ef54b908cdfb3b1222c55da19bbc">UpdateVersion</a>()</td><td><a class="el" href="classOPI_1_1DatabaseHandle.php">OPI::DatabaseHandle</a></td><td><code> [private]</code></td></tr>
</table><? include "layout/foot.inc.php";?>
