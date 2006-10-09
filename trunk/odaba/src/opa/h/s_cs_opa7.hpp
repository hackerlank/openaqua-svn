//**************************************************************************/
//* Function Prototypes for Client Server Interface: Project: opa7
//*
//*               ODABA II - Class Declaration
//*                          from  L:/OPA7/OPA7.dev
//*
//*  ODE Version 2.1                                   2006/02/25
//**************************************************************************/
#ifndef   _IF_opa7_H 
#define   _IF_opa7_H 

logical CACObject_CACObject_ci                                  ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CACObject_CACObject_ci1                                 ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CACObject_CACObject_ci2                                 ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CACObject_ChangeTimeStamp_ci                            ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CACObject_CloseObject_ci                                ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CACObject_DeleteExtent_ci                               ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CACObject_DeleteExtentRef_ci                            ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CACObject_ExecObjCtxFunc_ci                             ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CACObject_ExtentExist_ci                                ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CACObject_GetAccess_ci                                  ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CACObject_GetExtent_ci                                  ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CACObject_GetModCount_ci                                ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CACObject_GetTALevel_ci                                 ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CACObject_GetTimeStamp_ci                               ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CACObject_GetVersion_ci                                 ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CACObject_NewVersion_ci                                 ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CACObject_SetOverload_ci                                ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CACObject_SetUserDefinedIdentity_ci                     ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CACObject_SetVersion_ci0                                ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CACObject_SetVersion_ci1                                ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CACObject_SetVersion_ci2                                ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CACObject_StartTA_ci                                    ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CACObject_StopTA_ci                                     ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CACObject_UpdateTimestamp_ci                            ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CACObject_VersionCount_ci                               ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CACObject_VersionIntervall_ci                           ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CClient_BackupDB_ci                                     ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CClient_CacheConnection_ci                              ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CClient_CheckDB_ci                                      ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CClient_DictDisplay_ci                                  ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CClient_Exist_ci                                        ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CClient_GetClientHandle_ci0                             ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CClient_GetClientHandle_ci1                             ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CClient_GetDBError_ci                                   ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CClient_GetDataSource_ci                                ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CClient_GetHandleInfo_ci1                               ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CClient_GetMachineType_ci                               ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CClient_GetPointerSize_ci                               ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CClient_GetServerVariable_ci                            ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CClient_GetServerVersion_ci                             ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CClient_KillClient_ci                                   ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CClient_RestoreDB_ci                                    ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CClient_SayHello_ci                                     ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CClient_SendClientMessage_ci0                           ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CClient_SetClientName_ci                                ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CClient_SetServerVariable_ci                            ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CClient_SetupDataSource_ci                              ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CClient_StartPause_ci                                   ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CClient_StatDisplay_ci                                  ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CClient_StopPause_ci                                    ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CClient_SysInfoDisplay_ci                               ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_ActivateShadowBase_ci                         ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_CDBHandle_ci0                                 ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_ChangeRecovery_ci                             ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_CheckLicence_ci1                              ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_CheckLicence_ci2                              ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_CloseDBHandle_ci                              ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_CloseRecovery_ci                              ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_CloseWorkspace_ci                             ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_ConsolidateWorkspace_ci                       ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_DeactivateShadowBase_ci                       ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_DeleteWorkspace_ci                            ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_DisableWorkspace_ci                           ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_DiscardWorkspace_ci                           ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_EnableWorkspace_ci                            ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_ExecDBCtxFunc_ci                              ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_ExistWorkspace_ci                             ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_FlushClusterPool_ci                           ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_GetDatabaseID_ci                              ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_GetNewTypeID_cidb                             ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_GetPath_ci                                    ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_GetRecoveryFile_ci                            ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_GetRecoveryNum_ci                             ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_GetRecoveryPath_ci                            ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_GetRecoveryStartNumber_ci                     ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_GetRecoveryType_ci                            ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_GetSchemaVersion_ci                           ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_GetSystemVersion_ci                           ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_GetVersionString_ci                           ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_GetWorkspace_ci                               ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_InitDataArea_ci                               ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_InitMainBase_ci                               ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_InitRecovery_ci                               ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_InitSubBase_ci                                ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_IsLicenced_ci                                 ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_LocateWorkspace_ci                            ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_OpenRecovery_ci                               ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_OpenWorkspace_ci                              ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_ResetLastSchemaVersion_ci                     ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_ResetLastVersion_ci                           ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDBHandle_SetupTypeID_cidb                              ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDictionary_CDictionary_ci0                             ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDictionary_CloseDictionary_ci                          ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDictionary_CreateExtentDef_ci                          ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDictionary_CreateStructDef_ci                          ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDictionary_CreateTempExtent_ci                         ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CDictionary_GetTempName_ci                              ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_Add_ci                                            ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_AddReference_ci0                                  ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_CanUpdateCollection_ci                            ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_Cancel_ci0                                        ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_ChangeBuffer_ci0                                  ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_ChangeMode_ci0                                    ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_CheckReadOnly_ci                                  ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_CheckWProtect_ci0                                 ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_Close_ci0                                         ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_Contains_ci                                       ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_CopyInst_ci                                       ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_CopySet_ci                                        ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_Delete_ci0                                        ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_Delete_ci1                                        ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_DeleteSet_ci                                      ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_DisableKeyCheck_ci0                               ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_Duplicate_ci0                                     ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_EnableKeyCheck_ci0                                ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_ExecPropCtxFunc_ci                                ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_ExecStrCtxFunc_ci                                 ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_FirstKey_ci                                       ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_Get_ci0                                           ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_Get_ci1                                           ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_GetCollectionID_ci                                ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_GetCount_ci                                       ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_GetGenAttrType_ci                                 ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_GetGenOrderType_ci                                ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_GetGlobalID_ci0                                   ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_GetID_ci0                                         ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_GetID_ci1                                         ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_GetID_ByID_ci1                                    ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_GetInstModCount_ci                                ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_GetKey_ci                                         ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_GetRefModCount_ci                                 ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_GetRelative_ci0                                   ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_GetRelativeCount_ci                               ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_GetRelativeIndex_ci                               ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_GetSelectedKey_ci                                 ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_Get_ByID_ci1                                      ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_Group_ci                                          ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_IsNewInstance_ci                                  ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_Locate_ci                                         ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_LocateKey_ci                                      ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_Lock_ci                                           ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_LockSet_ci                                        ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_Modify_ci                                         ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_Move_ci                                           ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_MoveDown_ci                                       ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_MoveUp_ci                                         ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_NextKey_ci                                        ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_OpenBaseNode_ci                                   ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_OpenCopyNode_ci                                   ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_OpenOperationNode_ci1                             ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_OpenOperationNode_ci2                             ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_OpenPathCopy_ci                                   ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_OpenSubNode_ci                                    ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_OpenViewNode_ci1                                  ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_OpenViewNode_ci2                                  ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_Position_ci                                       ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_ProvGenAttribute_ci                               ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_Provide_ci0                                       ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_Provide_ci1                                       ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_Provide_ci2                                       ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_ProvideGUID_ci                                    ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_ReadBuffer_ci0                                    ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_Refresh_ci                                        ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_RegisterHandle_ci                                 ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_RemoveFromCollection_ci                           ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_Rename_ci                                         ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_Reopen_intern_ci                                  ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_RepairIndex_ci                                    ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_Reset_ci                                          ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_ResetExpression_ci                                ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_ResetWProtect_ci                                  ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_Save_intern_ci                                    ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_SetAction_ci                                      ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_SetBaseNode_ci                                    ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_SetContextVariables_ci                            ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_SetExpression_ci                                  ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_SetGenAttribute_ci                                ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_SetInstAction_ci                                  ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_SetOrder_ci                                       ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_SetType_ci                                        ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_SetWProtect_ci                                    ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_Unlock_ci                                         ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_UnlockSet_ci                                      ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_UnregisterHandle_ci                               ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical CNode_Update_intern_ci                                  ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical COperation_Execute_ci                                   ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical COperation_Open_ci                                      ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical COperation_ProvExpression_ci1                           ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);
logical COperation_ProvExpression_ci2                           ( CS_Connection *connection, void *cso_ptr, CSInstanceList *parms, CSInstanceList *result);


#endif