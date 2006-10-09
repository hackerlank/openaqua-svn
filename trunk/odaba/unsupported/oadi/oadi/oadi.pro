TARGET = odaba_oadi
CONFIG += odabaqtlibs
include (../../projects.pri)

# Input
HEADERS += h/cactivit.h \
           h/cmacros.h \
           h/coadidll.h \
           h/coadierr.h \
           h/coadimac.h \
           h/coadimac2.h \
           h/cOComponentState.h \
           h/cOFieldType.h \
           h/cprjman.h \
           h/ioadiall.h \
           h/ioadii.h \
           h/poadi.h \
           h/sActivityHandler.hpp \
           h/sActivityLogicalFunctor.hpp \
           h/sActivityManager.hpp \
           h/sActivityManagerI.hpp \
           h/sActivityManagerPrivate.hpp \
           h/sActivityVoidFunctor.hpp \
           h/sAH.hpp \
           h/sDDesignerMouse.hpp \
           h/sOAction.hpp \
           h/sOActionControl.hpp \
           h/soadii.h \
           h/sOADKFactory.hpp \
           h/sOAlign.hpp \
           h/sOApplication.hpp \
           h/sOBasePersistent.hpp \
           h/sOBitmap.hpp \
           h/sOBrush.hpp \
           h/sOButton.hpp \
           h/sOButtonControl.hpp \
           h/sOCAU_Action.hpp \
           h/sOCAU_SimpleAction.hpp \
           h/sOCBitmap.hpp \
           h/sOColorGroup.hpp \
           h/sOConstAction.hpp \
           h/sOConstant.hpp \
           h/sOConstantControl.hpp \
           h/sOContextStyle.hpp \
           h/sODataSource.hpp \
           h/sODataSourceHaving.hpp \
           h/sODB_Definition.hpp \
           h/sODesktop.hpp \
           h/sOElementStyle.hpp \
           h/sOEventAction.hpp \
           h/sOEventAction_intern.hpp \
           h/sOEventActionControl.hpp \
           h/sOField.hpp \
           h/sOFieldControl.hpp \
           h/sOFont_.hpp \
           h/sOFrameStyle.hpp \
           h/sOFunctAction.hpp \
           h/sOHighlighter.hpp \
           h/sOHighlightRule.hpp \
           h/sOJumpAction.hpp \
           h/sOLabelDefinition.hpp \
           h/sOLayout.hpp \
           h/sOMenAction.hpp \
           h/sOMenu.hpp \
           h/sOPersistent.hpp \
           h/sOProject.hpp \
           h/sOQueryLevel.hpp \
           h/sOResource.hpp \
           h/sOSButton.hpp \
           h/sOSButtonBox.hpp \
           h/sOSButtonGroup.hpp \
           h/sOSCheckBox.hpp \
           h/sOSDate.hpp \
           h/sOSEdit.hpp \
           h/sOSGroupBox.hpp \
           h/sOSListBox.hpp \
           h/sOSRadioGroup.hpp \
           h/sOSSplitter.hpp \
           h/sOSTabControl.hpp \
           h/sOSTime.hpp \
           h/sOStyle.hpp \
           h/sOStyleAction.hpp \
           h/sOStyleElement.hpp \
           h/sOSWindow.hpp \
           h/sOSyntaxClass.hpp \
           h/sOText.hpp \
           h/sOToolBox.hpp \
           h/sOWinAction.hpp \
           h/sOWindow.hpp \
           h/sResourceCache.hpp \
           h/sResourceEntry.hpp \
           h/sTAction.hpp \
           h/sTActionHandler.hpp \
           h/sTApplication.hpp \
           h/sTBaseComponent.hpp \
           h/sTButtonBoxField.hpp \
           h/sTButtonGroup.hpp \
           h/sTCheckBoxField.hpp \
           h/sTComponent.hpp \
           h/sTControl.hpp \
           h/sTControlFactory.hpp \
           h/sTDateField.hpp \
           h/sTDesktop.hpp \
           h/sTEditField.hpp \
           h/sTField.hpp \
           h/sTGroupBox.hpp \
           h/sTLabel.hpp \
           h/sTListBoxField.hpp \
           h/sTProject.hpp \
           h/sTProjectManager.hpp \
           h/sTPushButton.hpp \
           h/sTRadioGroup.hpp \
           h/sTSplitter.hpp \
           h/sTTabControl.hpp \
           h/sTTimeField.hpp \
           h/sTWidgetControl.hpp \
           h/sTWindow.hpp
SOURCES +=                  qlib/DDesignerMouse.cpp \
         qlib/OADKFactory.cpp \
         qlib/OAction.cpp \
         qlib/OActionControl.cpp \
         qlib/OAlign.cpp \
         qlib/OApplication.cpp \
         qlib/OBasePersistent.cpp \
         qlib/OBitmap.cpp \
         qlib/OBrush.cpp \
         qlib/OButton.cpp \
         qlib/OButtonControl.cpp \
         qlib/OCAU_Action.cpp \
         qlib/OCAU_SimpleAction.cpp \
         qlib/OCBitmap.cpp \
         qlib/OColorGroup.cpp \
         qlib/OConstAction.cpp \
         qlib/OConstant.cpp \
         qlib/OConstantControl.cpp \
         qlib/OContextStyle.cpp \
         qlib/ODB_Definition.cpp \
         qlib/ODataSource.cpp \
         qlib/ODataSourceHaving.cpp \
         qlib/ODesktop.cpp \
         qlib/OElementStyle.cpp \
         qlib/OEventAction.cpp \
         qlib/OEventActionControl.cpp \
         qlib/OEventAction_intern.cpp \
         qlib/OField.cpp \
         qlib/OFieldControl.cpp \
         qlib/OFont_.cpp \
         qlib/OFrameStyle.cpp \
         qlib/OFunctAction.cpp \
         qlib/OHighlightRule.cpp \
         qlib/OHighlighter.cpp \
         qlib/OJumpAction.cpp \
         qlib/OLabelDefinition.cpp \
         qlib/OLayout.cpp \
         qlib/OMenAction.cpp \
         qlib/OMenu.cpp \
         qlib/OPersistent.cpp \
         qlib/OProject.cpp \
         qlib/OResource.cpp \
         qlib/OSButton.cpp \
         qlib/OSButtonBox.cpp \
         qlib/OSButtonGroup.cpp \
         qlib/OSCheckBox.cpp \
         qlib/OSDate.cpp \
         qlib/OSEdit.cpp \
         qlib/OSGroupBox.cpp \
         qlib/OSListBox.cpp \
         qlib/OSRadioGroup.cpp \
         qlib/OSSplitter.cpp \
         qlib/OSTabControl.cpp \
         qlib/OSTime.cpp \
         qlib/OSWindow.cpp \
         qlib/OStyle.cpp \
         qlib/OStyleAction.cpp \
         qlib/OStyleElement.cpp \
         qlib/OSyntaxClass.cpp \
         qlib/OText.cpp \
         qlib/OToolBox.cpp \
         qlib/OWinAction.cpp \
         qlib/OWindow.cpp \
         qlib/ResourceCache.cpp \
         qlib/ResourceEntry.cpp \
         qlib/TAction.cpp \
         qlib/TActionHandler.cpp \
         qlib/TApplication.cpp \
         qlib/TButtonBoxField.cpp \
         qlib/TButtonGroup.cpp \
         qlib/TCheckBoxField.cpp \
         qlib/TComponent.cpp \
         qlib/TControl.cpp \
         qlib/TControlFactory.cpp \
         qlib/TDateField.cpp \
         qlib/TDesktop.cpp \
         qlib/TEditField.cpp \
         qlib/TField.cpp \
         qlib/TGroupBox.cpp \
         qlib/TListBoxField.cpp \
         qlib/TProject.cpp \
         qlib/TProjectManager.cpp \
         qlib/TPushButton.cpp \
         qlib/TRadioGroup.cpp \
         qlib/TSplitter.cpp \
         qlib/TTabControl.cpp \
         qlib/TTimeField.cpp \
         qlib/TWidgetControl.cpp \
         qlib/TWindow.cpp \
         qlib/oadii.cpp \
         