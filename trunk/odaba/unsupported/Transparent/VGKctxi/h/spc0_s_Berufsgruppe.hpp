/********************************* Class Declaration ***************************/
/**
\package  VGKctxi - 
\class    pc0_s_Berufsgruppe

\brief    


\date     $Date: 2006/06/29 13:21:09,00 $
\dbsource Q:/Transparent.dev - ODABA Version 9.0
*/
/******************************************************************************/
#ifndef   pc0_s_Berufsgruppe_HPP
#define   pc0_s_Berufsgruppe_HPP

class     pc0_s_Berufsgruppe;

class     PropertyHandle;
#include  <sDatabaseHandle.hpp>
#include  <spc0_Stammdaten.hpp>
class  pc0_s_Berufsgruppe :public pc0_Stammdaten
{

public     :
public     :                                             pc0_s_Berufsgruppe (PropertyHandle *prophdl );
public     :                                             pc0_s_Berufsgruppe (DatabaseHandle &dbhandle, PIACC accopt );
};

#endif
