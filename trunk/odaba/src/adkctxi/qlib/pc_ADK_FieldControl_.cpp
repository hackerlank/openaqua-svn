/********************************* Class Source Code ***************************/
/**
\package  {{{{{|{2006/03/12|19:35:18,03}|(REF)
\class    pc_ADK_FieldControl_

\brief    


\date     $Date: 2006/03/12 19:35:48,75 $
\dbsource adk.dev - ODABA Version 9.0
*/
/******************************************************************************/
#define    OBJ_ID  "pc_ADK_FieldControl_"

#include  <padkctxi.h>
#include  <sPropertyHandle.hpp>
#include  <spc_ADK_Class.hpp>
#include  <spc_ADK_Field_.hpp>
#include  <spc_SDB_Member.hpp>
#include  <spc_ADK_FieldControl_.hpp>


/******************************************************************************/
/**
\brief  AddColumn - 


\return term -

\param  propnames -
\param  indx0 -
*/
/******************************************************************************/

#undef     MOD_ID
#define    MOD_ID  "AddColumn"

logical pc_ADK_FieldControl_ :: AddColumn (char *propnames, int32 indx0 )
{
  pc_ADK_Field_     columns(GPH("columns"));
  char              propname[ID_SIZE];
  logical           term     = NO;
BEGINSEQ
  if ( indx0 >= columns.GetCount() )
    indx0 = LAST_INSTANCE;
  
  gvtxstb(propname,propnames,ID_SIZE);
  columns.Add(indx0,propname);                       CTXCERR
  columns.Save();                                    CTXCERR

  SetActionResult(columns.GPH("sys_ident")->GetString());

RECOVER
  SetActionResult("");
  term = YES;
ENDSEQ
  return(term);
}

/******************************************************************************/
/**
\brief  AddField - 


\return term -

\param  propnames -
\param  posx -
\param  posy -
*/
/******************************************************************************/

#undef     MOD_ID
#define    MOD_ID  "AddField"

logical pc_ADK_FieldControl_ :: AddField (char *propnames, int32 posx, int32 posy )
{
  pc_ADK_Field_     fields(GPH("fields"));
  logical           term = NO;
BEGINSEQ
  if ( fields.NewField(propnames,posx,posy) )        ERROR
  fields.Save();                                     CTXCERR

  SetActionResult(fields.GPH("sys_ident")->GetString());

RECOVER
  SetActionResult("");
  term = YES;
ENDSEQ
  return(term);
}

/******************************************************************************/
/**
\brief  AddRegion

\return term -

\param  propnames -
\param  indx0 -
*/
/******************************************************************************/

#undef     MOD_ID
#define    MOD_ID  "AddRegion"

logical pc_ADK_FieldControl_ :: AddRegion (char *propnames, int32 indx0 )
{
  pc_ADK_Field_     regions(GPH("regions"));
  char              propname[ID_SIZE];
  logical           term     = NO;
BEGINSEQ
  if ( indx0 >= regions.GetCount() )
    indx0 = LAST_INSTANCE;
    
  gvtxstb(propname,propnames,ID_SIZE);
  regions.Add(indx0,propnames);                      CTXCERR
  regions.Save();                                    CTXCERR

  SetActionResult(regions.GPH("sys_ident")->GetString());

RECOVER
  SetActionResult("");
  term = YES;
ENDSEQ
  return(term);
}

/******************************************************************************/
/**
\brief  AddTabControl - 


\return term -

\param  posx -
\param  posy -
*/
/******************************************************************************/

#undef     MOD_ID
#define    MOD_ID  "AddTabControl"

logical pc_ADK_FieldControl_ :: AddTabControl (int32 posx, int32 posy )
{
  pc_ADK_Field_     fields(GPH("fields"));
  PropertyHandle   *my_class  = GPH("class");
  PropertyHandle   *member;
  PropertyHandle   *fc;
  logical           term = NO;
BEGINSEQ
  if ( !my_class->Get(FIRST_INSTANCE) )              ERROR
    
  pc_ADK_Class   new_class(*my_class);  
  if ( !(fc = new_class.ProvideDefaultTabControl()) ||
       !fc->Exist()  )                               ERROR
    
  if ( fields.NewField("tab",posx,posy) )            ERROR
  fields.SetupDataSource("*","DRT_PropertyPath",NO);
  fields.SetupFromFieldControl(fc);
  
  fields.GPH("class")->Add(new_class.ExtractKey()); CTXCERR
  fields.GPH("field_control")->Add(fc->ExtractKey());
                                                     CTXCERR
  fields.Save();                                     CTXCERR

  SetActionResult(fields.GPH("sys_ident")->GetString());

RECOVER
  SetActionResult("");
  term = YES;
ENDSEQ
  return(term);
}

/******************************************************************************/
/**
\brief  pc_ADK_FieldControl_ - Konstruktor



\param  prophdl - Property handle
*/
/******************************************************************************/

#undef     MOD_ID
#define    MOD_ID  "pc_ADK_FieldControl_"

                        pc_ADK_FieldControl_ :: pc_ADK_FieldControl_ (PropertyHandle *prophdl )
                     : PropertyHandle (prophdl)
{



}


