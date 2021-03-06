/*++

Copyright (C) 2020 Autodesk Inc.

All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the Autodesk Inc. nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 'AS IS' AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL AUTODESK INC. BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


This file has been generated by the Automatic Component Toolkit (ACT) version 1.7.0-develop.

Abstract: This is an autogenerated Go wrapper file in order to allow an easy
use of Machine Control library.

Interface version: 1.0.0

*/

// Code generated by Automatic Component Toolkit (ACT); DO NOT EDIT.

package libmc

/*
#include "libmc_dynamic.cc"

LibMCDataHandle injectLibMCDataHandle (void * pLibMCDataHandle)
{
	return (LibMCDataHandle) pLibMCDataHandle;
}

LibMCHandle loadLibMCLibrary (const char * pFileName)
{
	LibMCResult nResult;
	sLibMCDynamicWrapperTable * pWrapperTable = (sLibMCDynamicWrapperTable *) malloc (sizeof (sLibMCDynamicWrapperTable));
	if (pWrapperTable != NULL) {
		nResult = InitLibMCWrapperTable (pWrapperTable);
		if (nResult != LIBMC_SUCCESS) {
			free (pWrapperTable);
			return 0;
		}

		nResult = LoadLibMCWrapperTable (pWrapperTable, pFileName);
		if (nResult != LIBMC_SUCCESS) {
			free (pWrapperTable);
			return 0;
		}

		return (LibMCHandle) pWrapperTable;
	}
}

void unloadLibMCLibrary (LibMCHandle nLibraryHandle)
{
	sLibMCDynamicWrapperTable * pWrapperTable = (sLibMCDynamicWrapperTable *) malloc (sizeof (sLibMCDynamicWrapperTable));
	if (pWrapperTable != NULL) {
		ReleaseLibMCWrapperTable (pWrapperTable);
		free (pWrapperTable);
	}
}


LibMCResult CCall_libmc_apiresponse_gethttpcode(LibMCHandle libraryHandle, LibMC_APIResponse pAPIResponse, LibMC_uint32 * pHTTPCode)
{
	if (libraryHandle == 0) 
		return LIBMC_ERROR_INVALIDCAST;
	sLibMCDynamicWrapperTable * wrapperTable = (sLibMCDynamicWrapperTable *) libraryHandle;
	return wrapperTable->m_APIResponse_GetHTTPCode (pAPIResponse, pHTTPCode);	
}


LibMCResult CCall_libmc_apiresponse_getcontenttype(LibMCHandle libraryHandle, LibMC_APIResponse pAPIResponse, const LibMC_uint32 nContentTypeBufferSize, LibMC_uint32* pContentTypeNeededChars, char * pContentTypeBuffer)
{
	if (libraryHandle == 0) 
		return LIBMC_ERROR_INVALIDCAST;
	sLibMCDynamicWrapperTable * wrapperTable = (sLibMCDynamicWrapperTable *) libraryHandle;
	return wrapperTable->m_APIResponse_GetContentType (pAPIResponse, nContentTypeBufferSize, pContentTypeNeededChars, pContentTypeBuffer);	
}


LibMCResult CCall_libmc_apiresponse_getdata(LibMCHandle libraryHandle, LibMC_APIResponse pAPIResponse, const LibMC_uint64 nDataBufferSize, LibMC_uint64* pDataNeededCount, LibMC_uint8 * pDataBuffer)
{
	if (libraryHandle == 0) 
		return LIBMC_ERROR_INVALIDCAST;
	sLibMCDynamicWrapperTable * wrapperTable = (sLibMCDynamicWrapperTable *) libraryHandle;
	return wrapperTable->m_APIResponse_GetData (pAPIResponse, nDataBufferSize, pDataNeededCount, pDataBuffer);	
}


LibMCResult CCall_libmc_mccontext_registerlibrarypath(LibMCHandle libraryHandle, LibMC_MCContext pMCContext, const char * pLibraryName, const char * pLibraryPath)
{
	if (libraryHandle == 0) 
		return LIBMC_ERROR_INVALIDCAST;
	sLibMCDynamicWrapperTable * wrapperTable = (sLibMCDynamicWrapperTable *) libraryHandle;
	return wrapperTable->m_MCContext_RegisterLibraryPath (pMCContext, pLibraryName, pLibraryPath);	
}


LibMCResult CCall_libmc_mccontext_parseconfiguration(LibMCHandle libraryHandle, LibMC_MCContext pMCContext, const char * pXMLString)
{
	if (libraryHandle == 0) 
		return LIBMC_ERROR_INVALIDCAST;
	sLibMCDynamicWrapperTable * wrapperTable = (sLibMCDynamicWrapperTable *) libraryHandle;
	return wrapperTable->m_MCContext_ParseConfiguration (pMCContext, pXMLString);	
}


LibMCResult CCall_libmc_mccontext_startallthreads(LibMCHandle libraryHandle, LibMC_MCContext pMCContext)
{
	if (libraryHandle == 0) 
		return LIBMC_ERROR_INVALIDCAST;
	sLibMCDynamicWrapperTable * wrapperTable = (sLibMCDynamicWrapperTable *) libraryHandle;
	return wrapperTable->m_MCContext_StartAllThreads (pMCContext);	
}


LibMCResult CCall_libmc_mccontext_terminateallthreads(LibMCHandle libraryHandle, LibMC_MCContext pMCContext)
{
	if (libraryHandle == 0) 
		return LIBMC_ERROR_INVALIDCAST;
	sLibMCDynamicWrapperTable * wrapperTable = (sLibMCDynamicWrapperTable *) libraryHandle;
	return wrapperTable->m_MCContext_TerminateAllThreads (pMCContext);	
}


LibMCResult CCall_libmc_mccontext_loadclientpackage(LibMCHandle libraryHandle, LibMC_MCContext pMCContext, LibMC_uint64 nZIPStreamBufferSize, const LibMC_uint8 * pZIPStreamBuffer)
{
	if (libraryHandle == 0) 
		return LIBMC_ERROR_INVALIDCAST;
	sLibMCDynamicWrapperTable * wrapperTable = (sLibMCDynamicWrapperTable *) libraryHandle;
	return wrapperTable->m_MCContext_LoadClientPackage (pMCContext, nZIPStreamBufferSize, pZIPStreamBuffer);	
}


LibMCResult CCall_libmc_mccontext_log(LibMCHandle libraryHandle, LibMC_MCContext pMCContext, const char * pMessage, eLibMCLogSubSystem eSubsystem, eLibMCDataLogLevel eLogLevel)
{
	if (libraryHandle == 0) 
		return LIBMC_ERROR_INVALIDCAST;
	sLibMCDynamicWrapperTable * wrapperTable = (sLibMCDynamicWrapperTable *) libraryHandle;
	return wrapperTable->m_MCContext_Log (pMCContext, pMessage, eSubsystem, eLogLevel);	
}


LibMCResult CCall_libmc_mccontext_handleapigetrequest(LibMCHandle libraryHandle, LibMC_MCContext pMCContext, const char * pURI, LibMC_APIResponse * pResponse)
{
	if (libraryHandle == 0) 
		return LIBMC_ERROR_INVALIDCAST;
	sLibMCDynamicWrapperTable * wrapperTable = (sLibMCDynamicWrapperTable *) libraryHandle;
	return wrapperTable->m_MCContext_HandleAPIGetRequest (pMCContext, pURI, pResponse);	
}


LibMCResult CCall_libmc_mccontext_handleapipostrequest(LibMCHandle libraryHandle, LibMC_MCContext pMCContext, const char * pURI, LibMC_uint64 nBodyBufferSize, const LibMC_uint8 * pBodyBuffer, LibMC_APIResponse * pResponse)
{
	if (libraryHandle == 0) 
		return LIBMC_ERROR_INVALIDCAST;
	sLibMCDynamicWrapperTable * wrapperTable = (sLibMCDynamicWrapperTable *) libraryHandle;
	return wrapperTable->m_MCContext_HandleAPIPostRequest (pMCContext, pURI, nBodyBufferSize, pBodyBuffer, pResponse);	
}


LibMCResult CCall_libmc_getversion(LibMCHandle libraryHandle, LibMC_uint32 * pMajor, LibMC_uint32 * pMinor, LibMC_uint32 * pMicro)
{
	if (libraryHandle == 0) 
		return LIBMC_ERROR_INVALIDCAST;
	sLibMCDynamicWrapperTable * wrapperTable = (sLibMCDynamicWrapperTable *) libraryHandle;
	return wrapperTable->m_GetVersion (pMajor, pMinor, pMicro);	
}


LibMCResult CCall_libmc_getlasterror(LibMCHandle libraryHandle, LibMC_Base pInstance, const LibMC_uint32 nErrorMessageBufferSize, LibMC_uint32* pErrorMessageNeededChars, char * pErrorMessageBuffer, bool * pHasError)
{
	if (libraryHandle == 0) 
		return LIBMC_ERROR_INVALIDCAST;
	sLibMCDynamicWrapperTable * wrapperTable = (sLibMCDynamicWrapperTable *) libraryHandle;
	return wrapperTable->m_GetLastError (pInstance, nErrorMessageBufferSize, pErrorMessageNeededChars, pErrorMessageBuffer, pHasError);	
}


LibMCResult CCall_libmc_releaseinstance(LibMCHandle libraryHandle, LibMC_Base pInstance)
{
	if (libraryHandle == 0) 
		return LIBMC_ERROR_INVALIDCAST;
	sLibMCDynamicWrapperTable * wrapperTable = (sLibMCDynamicWrapperTable *) libraryHandle;
	return wrapperTable->m_ReleaseInstance (pInstance);	
}


LibMCResult CCall_libmc_acquireinstance(LibMCHandle libraryHandle, LibMC_Base pInstance)
{
	if (libraryHandle == 0) 
		return LIBMC_ERROR_INVALIDCAST;
	sLibMCDynamicWrapperTable * wrapperTable = (sLibMCDynamicWrapperTable *) libraryHandle;
	return wrapperTable->m_AcquireInstance (pInstance);	
}


LibMCResult CCall_libmc_injectcomponent(LibMCHandle libraryHandle, const char * pNameSpace, uint64_t pSymbolAddressMethod)
{
	if (libraryHandle == 0) 
		return LIBMC_ERROR_INVALIDCAST;
	sLibMCDynamicWrapperTable * wrapperTable = (sLibMCDynamicWrapperTable *) libraryHandle;
	return wrapperTable->m_InjectComponent (pNameSpace, (LibMC_pvoid) pSymbolAddressMethod);	
}


LibMCResult CCall_libmc_createmccontext(LibMCHandle libraryHandle, LibMCData_DataModel pDataModel, LibMC_MCContext * pInstance)
{
	if (libraryHandle == 0) 
		return LIBMC_ERROR_INVALIDCAST;
	sLibMCDynamicWrapperTable * wrapperTable = (sLibMCDynamicWrapperTable *) libraryHandle;
	return wrapperTable->m_CreateMCContext (pDataModel, pInstance);	
}

*/
import "C"

import (
	"fmt"
	"unsafe"
	"runtime"
	"../LibMCData"
)

type ref = C.LibMCHandle


// LogLevel represents a LibMC enum.
type LogLevel int

const (
	LogLevel_UserAcknowledge = 1
	LogLevel_FatalError = 2
	LogLevel_CriticalError = 3
	LogLevel_Warning = 4
	LogLevel_Message = 5
	LogLevel_Info = 6
	LogLevel_Debug = 7
	LogLevel_Unknown = 8
)

// LogSubSystem represents a LibMC enum.
type LogSubSystem int

const (
	LogSubSystem_System = 1
	LogSubSystem_Network = 2
)

// Error constants for LibMC.
const LIBMC_ERROR_NOTIMPLEMENTED = 1;
const LIBMC_ERROR_INVALIDPARAM = 2;
const LIBMC_ERROR_INVALIDCAST = 3;
const LIBMC_ERROR_BUFFERTOOSMALL = 4;
const LIBMC_ERROR_GENERICEXCEPTION = 5;
const LIBMC_ERROR_COULDNOTLOADLIBRARY = 6;
const LIBMC_ERROR_COULDNOTFINDLIBRARYEXPORT = 7;
const LIBMC_ERROR_INCOMPATIBLEBINARYVERSION = 8;
const LIBMC_ERROR_COULDNOTPARSECONFIGURATION = 9;
const LIBMC_ERROR_DUPLICATESTATENAME = 10;
const LIBMC_ERROR_STATENOTFOUND = 11;
const LIBMC_ERROR_DUPLICATEOUTSTATE = 12;
const LIBMC_ERROR_MISSINGMACHINEDEFINITION = 13;
const LIBMC_ERROR_MISSINGINSTANCENAME = 14;
const LIBMC_ERROR_DUPLICATEMACHINEINSTANCE = 15;
const LIBMC_ERROR_MISSINGXMLSCHEMA = 16;
const LIBMC_ERROR_INVALIDXMLSCHEMA = 17;
const LIBMC_ERROR_MISSINGSTATENAME = 18;
const LIBMC_ERROR_MISSINGOUTSTATETARGET = 19;
const LIBMC_ERROR_INVALIDOUTSTATETARGET = 20;
const LIBMC_ERROR_NOINITSTATE = 21;
const LIBMC_ERROR_NOFAILEDSTATE = 22;
const LIBMC_ERROR_INITSTATENOTFOUND = 23;
const LIBMC_ERROR_FAILEDSTATENOTFOUND = 24;
const LIBMC_ERROR_MISSINGINITSTATE = 25;
const LIBMC_ERROR_MISSINGFAILEDSTATE = 26;
const LIBMC_ERROR_MISSINGPLUGINNAME = 27;
const LIBMC_ERROR_EMPTYINITSTATE = 28;
const LIBMC_ERROR_EMPTYFAILEDSTATE = 29;
const LIBMC_ERROR_EMPTYPLUGINNAME = 30;
const LIBMC_ERROR_COULDNOTCREATESTATEFACTORY = 31;
const LIBMC_ERROR_INVALIDSTATENAME = 32;
const LIBMC_ERROR_COULDNOTCREATESTATE = 33;
const LIBMC_ERROR_COULDNOTINITIALIZEFACTORY = 34;
const LIBMC_ERROR_COULDNOTFINALIZEFACTORY = 35;
const LIBMC_ERROR_COULDNOTLOADPLUGIN = 36;
const LIBMC_ERROR_NOCURRENTSTATE = 37;
const LIBMC_ERROR_NOPLUGINSTATE = 38;
const LIBMC_ERROR_COULDNOTEXECUTEPLUGIN = 39;
const LIBMC_ERROR_TOOMANYMACHINEINSTANCES = 40;
const LIBMC_ERROR_INVALIDINDEX = 41;
const LIBMC_ERROR_NOOUTSTATEGIVEN = 42;
const LIBMC_ERROR_INVALIDOUTSTATEGIVEN = 43;
const LIBMC_ERROR_INVALIDREPEATDELAY = 44;
const LIBMC_ERROR_INVALIDEXECUTIONDELAY = 45;
const LIBMC_ERROR_MISSINGREPEATDELAY = 46;
const LIBMC_ERROR_THREADISRUNNING = 47;
const LIBMC_ERROR_THREADISNOTRUNNING = 48;
const LIBMC_ERROR_DUPLICATESIGNAL = 49;
const LIBMC_ERROR_INVALIDSIGNALNAME = 50;
const LIBMC_ERROR_MISSINGSIGNALNAME = 51;
const LIBMC_ERROR_MISSINGSERVERNODE = 52;
const LIBMC_ERROR_MISSINGHOSTNAME = 53;
const LIBMC_ERROR_MISSINGPORT = 54;
const LIBMC_ERROR_UUIDGENERATIONFAILED = 55;
const LIBMC_ERROR_INVALIDBUFFERSIZE = 56;
const LIBMC_ERROR_COULDNOTCONVERTTOUTF8 = 57;
const LIBMC_ERROR_NOCOLUMNAVAILABLE = 58;
const LIBMC_ERROR_INVALIDTEXTCOLUMN = 59;
const LIBMC_ERROR_INVALIDCOLUMNTYPE = 60;
const LIBMC_ERROR_TOOMANYREQUESTEDLOGS = 61;
const LIBMC_ERROR_MISSINGINSTANCEDESCRIPTION = 62;
const LIBMC_ERROR_DUPLICATEPARAMETERGROUPNAME = 63;
const LIBMC_ERROR_MISSINGPARAMETERGROUPNAME = 64;
const LIBMC_ERROR_EMPTYPARAMETERGROUPNAME = 65;
const LIBMC_ERROR_MISSINGPARAMETERGROUPDESCRIPTION = 66;
const LIBMC_ERROR_EMPTYPARAMETERGROUPDESCRIPTION = 67;
const LIBMC_ERROR_TOOMANYPARAMETERS = 68;
const LIBMC_ERROR_TOOMANYPARAMETERGROUPS = 69;
const LIBMC_ERROR_DUPLICATEPARAMETERNAME = 70;
const LIBMC_ERROR_MISSINGPARAMETERNAME = 71;
const LIBMC_ERROR_EMPTYPARAMETERNAME = 72;
const LIBMC_ERROR_MISSINGPARAMETERDESCRIPTION = 73;
const LIBMC_ERROR_EMPTYPARAMETERDESCRIPTION = 74;
const LIBMC_ERROR_PARAMETERNOTFOUND = 75;
const LIBMC_ERROR_MISSINGPARAMETERDEFAULTVALUE = 76;
const LIBMC_ERROR_MISSINGDATACONFIGNODE = 77;
const LIBMC_ERROR_MISSINGDIRECTORY = 78;
const LIBMC_ERROR_MISSINGDATABASETYPE = 79;
const LIBMC_ERROR_MISSINGSQLITEINFO = 80;
const LIBMC_ERROR_UNKNOWNDATABASETYPE = 81;
const LIBMC_ERROR_STORAGENOTINITIALISED = 82;
const LIBMC_ERROR_COULDNOTCONVERTTOUTF16 = 83;
const LIBMC_ERROR_COULDNOTCREATEFILE = 84;
const LIBMC_ERROR_COULDNOTSEEKSTREAM = 85;
const LIBMC_ERROR_COULDNOTGETSTREAMPOSITION = 86;
const LIBMC_ERROR_COULDNOTWRITESTREAM = 87;
const LIBMC_ERROR_INVALIDDATABASEMIGRATION = 88;
const LIBMC_ERROR_INTERNALERROR = 89;
const LIBMC_ERROR_COULDNOTSTORECONTENTSTREAM = 90;
const LIBMC_ERROR_DATABASENOTINITIALISED = 91;
const LIBMC_ERROR_PARAMETERGROUPNOTFOUND = 92;
const LIBMC_ERROR_SIGNALNOTFOUND = 93;
const LIBMC_ERROR_STATEMACHINENOTFOUND = 94;
const LIBMC_ERROR_MISSINGPARAMETERTYPE = 95;
const LIBMC_ERROR_INVALIDPARAMETERTYPE = 96;
const LIBMC_ERROR_COULDNOTPARSEJSON = 97;
const LIBMC_ERROR_INVALIDJSONFORMAT = 98;
const LIBMC_ERROR_URLNOTFOUND = 99;
const LIBMC_ERROR_GENERICBADREQUEST = 100;
const LIBMC_ERROR_SQLITE_ERROR = 101;
const LIBMC_ERROR_SQLITE_INTERNAL = 102;
const LIBMC_ERROR_SQLITE_PERM = 103;
const LIBMC_ERROR_SQLITE_ABORT = 104;
const LIBMC_ERROR_SQLITE_BUSY = 105;
const LIBMC_ERROR_SQLITE_LOCKED = 106;
const LIBMC_ERROR_SQLITE_NOMEM = 107;
const LIBMC_ERROR_SQLITE_READONLY = 108;
const LIBMC_ERROR_SQLITE_INTERRUPT = 109;
const LIBMC_ERROR_SQLITE_IOERR = 110;
const LIBMC_ERROR_SQLITE_CORRUPT = 111;
const LIBMC_ERROR_SQLITE_NOTFOUND = 112;
const LIBMC_ERROR_SQLITE_FULL = 113;
const LIBMC_ERROR_SQLITE_CANTOPEN = 114;
const LIBMC_ERROR_SQLITE_PROTOCOL = 115;
const LIBMC_ERROR_SQLITE_SCHEMA = 117;
const LIBMC_ERROR_SQLITE_TOOBIG = 118;
const LIBMC_ERROR_SQLITE_CONSTRAINT = 119;
const LIBMC_ERROR_SQLITE_MISMATCH = 120;
const LIBMC_ERROR_SQLITE_MISUSE = 121;
const LIBMC_ERROR_SQLITE_NOLFS = 122;
const LIBMC_ERROR_SQLITE_AUTH = 123;
const LIBMC_ERROR_SQLITE_RANGE = 125;
const LIBMC_ERROR_SQLITE_NOTADB = 126;
const LIBMC_ERROR_SQLITE_NOTICE = 127;
const LIBMC_ERROR_SQLITE_WARNING = 128;
const LIBMC_ERROR_SQLITE_OTHER = 130;
const LIBMC_ERROR_SQLITE_TOOMANYRESULTROWS = 131;
const LIBMC_ERROR_COULDNOTREADZIPFILE = 200;
const LIBMC_ERROR_COULDNOTOPENZIPFILE = 201;
const LIBMC_ERROR_COULDNOTGETZIPENTRIES = 202;
const LIBMC_ERROR_ZIPENTRYNOTFOUND = 203;
const LIBMC_ERROR_COULDNOTSTATZIPENTRY = 204;
const LIBMC_ERROR_COULDNOTOPENZIPENTRY = 205;
const LIBMC_ERROR_COULDNOTREADZIPSTREAM = 206;
const LIBMC_ERROR_COULDNOTREADFULLZIPDATA = 207;
const LIBMC_ERROR_COULDNOTFINDDISTRIBUTIONINDEX = 208;
const LIBMC_ERROR_COULDNOTPARSEDISTRIBUTIONINDEX = 209;
const LIBMC_ERROR_EMPTYDISTRIBUTIONINDEX = 210;
const LIBMC_ERROR_MISSINGDISTRIBUTIONINDEX = 211;
const LIBMC_ERROR_MISSINGDISTRIBUTIONURL = 212;
const LIBMC_ERROR_MISSINGDISTRIBUTIONFILENAME = 213;
const LIBMC_ERROR_MISSINGDISTRIBUTIONSIZE = 214;
const LIBMC_ERROR_MISSINGDISTRIBUTIONCONTENTTYPE = 215;
const LIBMC_ERROR_DRIVERALREADYREGISTERED = 216;
const LIBMC_ERROR_DRIVERNOTFOUND = 217;
const LIBMC_ERROR_MISSINGDRIVERNAME = 218;
const LIBMC_ERROR_MISSINGDRIVERTYPE = 219;
const LIBMC_ERROR_MISSINGDRIVERLIBRARY = 220;
const LIBMC_ERROR_DRIVERALREADYRESERVED = 221;
const LIBMC_ERROR_LIBRARYPATHNOTFOUND = 222;
const LIBMC_ERROR_TOOLPATHENTITYNOTLOADED = 223;
const LIBMC_ERROR_TOOLPATHENTITYREFERENCEERROR = 224;
const LIBMC_ERROR_TOOLPATHENTITYINVALIDFILE = 225;
const LIBMC_ERROR_NO3MFLIBRARY = 226;
const LIBMC_ERROR_INVALIDPOINTCOUNT = 227;

// WrappedError is an error that wraps a LibMC error.
type WrappedError struct {
	Code uint32
	Message string
}

func (e *WrappedError) Error() string {
	return fmt.Sprintf("libmc: %s (%d)", e.Message, e.Code)
}

func errorMessage(errorcode uint32) string {
	switch (errorcode) {
	case LIBMC_ERROR_NOTIMPLEMENTED:
		return "functionality not implemented";
	case LIBMC_ERROR_INVALIDPARAM:
		return "an invalid parameter was passed";
	case LIBMC_ERROR_INVALIDCAST:
		return "a type cast failed";
	case LIBMC_ERROR_BUFFERTOOSMALL:
		return "a provided buffer is too small";
	case LIBMC_ERROR_GENERICEXCEPTION:
		return "a generic exception occurred";
	case LIBMC_ERROR_COULDNOTLOADLIBRARY:
		return "the library could not be loaded";
	case LIBMC_ERROR_COULDNOTFINDLIBRARYEXPORT:
		return "a required exported symbol could not be found in the library";
	case LIBMC_ERROR_INCOMPATIBLEBINARYVERSION:
		return "the version of the binary interface does not match the bindings interface";
	case LIBMC_ERROR_COULDNOTPARSECONFIGURATION:
		return "could not parse configuration";
	case LIBMC_ERROR_DUPLICATESTATENAME:
		return "duplicate state name";
	case LIBMC_ERROR_STATENOTFOUND:
		return "state not found";
	case LIBMC_ERROR_DUPLICATEOUTSTATE:
		return "duplicate out state";
	case LIBMC_ERROR_MISSINGMACHINEDEFINITION:
		return "missing machine definition";
	case LIBMC_ERROR_MISSINGINSTANCENAME:
		return "missing instance name";
	case LIBMC_ERROR_DUPLICATEMACHINEINSTANCE:
		return "duplicate machine instance";
	case LIBMC_ERROR_MISSINGXMLSCHEMA:
		return "missing XML schema";
	case LIBMC_ERROR_INVALIDXMLSCHEMA:
		return "invalid XML schema";
	case LIBMC_ERROR_MISSINGSTATENAME:
		return "missing state name";
	case LIBMC_ERROR_MISSINGOUTSTATETARGET:
		return "missing outstate target";
	case LIBMC_ERROR_INVALIDOUTSTATETARGET:
		return "invalid outstate target";
	case LIBMC_ERROR_NOINITSTATE:
		return "no init state";
	case LIBMC_ERROR_NOFAILEDSTATE:
		return "no failed state";
	case LIBMC_ERROR_INITSTATENOTFOUND:
		return "init state not found";
	case LIBMC_ERROR_FAILEDSTATENOTFOUND:
		return "failed state not found";
	case LIBMC_ERROR_MISSINGINITSTATE:
		return "missing init state";
	case LIBMC_ERROR_MISSINGFAILEDSTATE:
		return "missing failed state";
	case LIBMC_ERROR_MISSINGPLUGINNAME:
		return "missing plugin name";
	case LIBMC_ERROR_EMPTYINITSTATE:
		return "empty init state";
	case LIBMC_ERROR_EMPTYFAILEDSTATE:
		return "empty failed state";
	case LIBMC_ERROR_EMPTYPLUGINNAME:
		return "empty plugin name";
	case LIBMC_ERROR_COULDNOTCREATESTATEFACTORY:
		return "could not create state factory";
	case LIBMC_ERROR_INVALIDSTATENAME:
		return "invalid state name";
	case LIBMC_ERROR_COULDNOTCREATESTATE:
		return "could not create state";
	case LIBMC_ERROR_COULDNOTINITIALIZEFACTORY:
		return "could not initialize factory";
	case LIBMC_ERROR_COULDNOTFINALIZEFACTORY:
		return "could not finalize factory";
	case LIBMC_ERROR_COULDNOTLOADPLUGIN:
		return "could not load plugin";
	case LIBMC_ERROR_NOCURRENTSTATE:
		return "no current state";
	case LIBMC_ERROR_NOPLUGINSTATE:
		return "no plugin state";
	case LIBMC_ERROR_COULDNOTEXECUTEPLUGIN:
		return "could not execute plugin";
	case LIBMC_ERROR_TOOMANYMACHINEINSTANCES:
		return "too many machine instances";
	case LIBMC_ERROR_INVALIDINDEX:
		return "invalid index";
	case LIBMC_ERROR_NOOUTSTATEGIVEN:
		return "no new outstate has been given";
	case LIBMC_ERROR_INVALIDOUTSTATEGIVEN:
		return "invalid outstate has been given";
	case LIBMC_ERROR_INVALIDREPEATDELAY:
		return "invalid repeat delay";
	case LIBMC_ERROR_INVALIDEXECUTIONDELAY:
		return "invalid execution delay";
	case LIBMC_ERROR_MISSINGREPEATDELAY:
		return "missing repeat delay";
	case LIBMC_ERROR_THREADISRUNNING:
		return "thread is running";
	case LIBMC_ERROR_THREADISNOTRUNNING:
		return "thread is not running";
	case LIBMC_ERROR_DUPLICATESIGNAL:
		return "duplicate signal";
	case LIBMC_ERROR_INVALIDSIGNALNAME:
		return "invalid signal name";
	case LIBMC_ERROR_MISSINGSIGNALNAME:
		return "missing signal name";
	case LIBMC_ERROR_MISSINGSERVERNODE:
		return "missing server node";
	case LIBMC_ERROR_MISSINGHOSTNAME:
		return "missing host name";
	case LIBMC_ERROR_MISSINGPORT:
		return "missing port";
	case LIBMC_ERROR_UUIDGENERATIONFAILED:
		return "uuid generation failed";
	case LIBMC_ERROR_INVALIDBUFFERSIZE:
		return "invalid buffer size";
	case LIBMC_ERROR_COULDNOTCONVERTTOUTF8:
		return "could not convert to utf8";
	case LIBMC_ERROR_NOCOLUMNAVAILABLE:
		return "no column available";
	case LIBMC_ERROR_INVALIDTEXTCOLUMN:
		return "invalid text column";
	case LIBMC_ERROR_INVALIDCOLUMNTYPE:
		return "invalid column type";
	case LIBMC_ERROR_TOOMANYREQUESTEDLOGS:
		return "too many requested logs";
	case LIBMC_ERROR_MISSINGINSTANCEDESCRIPTION:
		return "missing instance description";
	case LIBMC_ERROR_DUPLICATEPARAMETERGROUPNAME:
		return "duplicate parameter group name";
	case LIBMC_ERROR_MISSINGPARAMETERGROUPNAME:
		return "missing parameter group name";
	case LIBMC_ERROR_EMPTYPARAMETERGROUPNAME:
		return "empty parameter group name";
	case LIBMC_ERROR_MISSINGPARAMETERGROUPDESCRIPTION:
		return "missing parameter group description";
	case LIBMC_ERROR_EMPTYPARAMETERGROUPDESCRIPTION:
		return "empty parameter group description";
	case LIBMC_ERROR_TOOMANYPARAMETERS:
		return "too many parameters";
	case LIBMC_ERROR_TOOMANYPARAMETERGROUPS:
		return "too many parameter groups";
	case LIBMC_ERROR_DUPLICATEPARAMETERNAME:
		return "duplicate parameter name";
	case LIBMC_ERROR_MISSINGPARAMETERNAME:
		return "missing parameter name";
	case LIBMC_ERROR_EMPTYPARAMETERNAME:
		return "empty parameter name";
	case LIBMC_ERROR_MISSINGPARAMETERDESCRIPTION:
		return "missing parameter description";
	case LIBMC_ERROR_EMPTYPARAMETERDESCRIPTION:
		return "empty parameter description";
	case LIBMC_ERROR_PARAMETERNOTFOUND:
		return "parameter not found";
	case LIBMC_ERROR_MISSINGPARAMETERDEFAULTVALUE:
		return "missing parameter default value";
	case LIBMC_ERROR_MISSINGDATACONFIGNODE:
		return "missing data config node";
	case LIBMC_ERROR_MISSINGDIRECTORY:
		return "missing directory";
	case LIBMC_ERROR_MISSINGDATABASETYPE:
		return "missing database type";
	case LIBMC_ERROR_MISSINGSQLITEINFO:
		return "missing sqlite info";
	case LIBMC_ERROR_UNKNOWNDATABASETYPE:
		return "unknown database type";
	case LIBMC_ERROR_STORAGENOTINITIALISED:
		return "storage not initialised";
	case LIBMC_ERROR_COULDNOTCONVERTTOUTF16:
		return "could not convert to utf 16";
	case LIBMC_ERROR_COULDNOTCREATEFILE:
		return "could not create file";
	case LIBMC_ERROR_COULDNOTSEEKSTREAM:
		return "could not seek stream";
	case LIBMC_ERROR_COULDNOTGETSTREAMPOSITION:
		return "could not get stream position";
	case LIBMC_ERROR_COULDNOTWRITESTREAM:
		return "could not write stream";
	case LIBMC_ERROR_INVALIDDATABASEMIGRATION:
		return "invalid database migration";
	case LIBMC_ERROR_INTERNALERROR:
		return "internal error";
	case LIBMC_ERROR_COULDNOTSTORECONTENTSTREAM:
		return "could not store content stream";
	case LIBMC_ERROR_DATABASENOTINITIALISED:
		return "database not initialised";
	case LIBMC_ERROR_PARAMETERGROUPNOTFOUND:
		return "parameter group not found";
	case LIBMC_ERROR_SIGNALNOTFOUND:
		return "signal not found";
	case LIBMC_ERROR_STATEMACHINENOTFOUND:
		return "state machine not found.";
	case LIBMC_ERROR_MISSINGPARAMETERTYPE:
		return "missing parameter type.";
	case LIBMC_ERROR_INVALIDPARAMETERTYPE:
		return "invalid parameter type.";
	case LIBMC_ERROR_COULDNOTPARSEJSON:
		return "could not parse json.";
	case LIBMC_ERROR_INVALIDJSONFORMAT:
		return "invalid json format.";
	case LIBMC_ERROR_URLNOTFOUND:
		return "url not found.";
	case LIBMC_ERROR_GENERICBADREQUEST:
		return "generic bad request.";
	case LIBMC_ERROR_SQLITE_ERROR:
		return "SQLite: Generic Error";
	case LIBMC_ERROR_SQLITE_INTERNAL:
		return "SQLite: Internal logic error in SQLite";
	case LIBMC_ERROR_SQLITE_PERM:
		return "SQLite: Access permission denied";
	case LIBMC_ERROR_SQLITE_ABORT:
		return "SQLite: Callback routine requested an abort";
	case LIBMC_ERROR_SQLITE_BUSY:
		return "SQLite: The database file is locked";
	case LIBMC_ERROR_SQLITE_LOCKED:
		return "SQLite: A table in the database is locked";
	case LIBMC_ERROR_SQLITE_NOMEM:
		return "SQLite: A malloc failed";
	case LIBMC_ERROR_SQLITE_READONLY:
		return "SQLite: Attempt to write a readonly database";
	case LIBMC_ERROR_SQLITE_INTERRUPT:
		return "SQLite: Operation terminated by sqlite3_interrupt";
	case LIBMC_ERROR_SQLITE_IOERR:
		return "SQLite: Some kind of disk I/O error occurred";
	case LIBMC_ERROR_SQLITE_CORRUPT:
		return "SQLite: The database disk image is malformed";
	case LIBMC_ERROR_SQLITE_NOTFOUND:
		return "SQLite: Unknown opcode in sqlite3_file_control";
	case LIBMC_ERROR_SQLITE_FULL:
		return "SQLite: Insertion failed because database is full";
	case LIBMC_ERROR_SQLITE_CANTOPEN:
		return "SQLite: Unable to open the database file";
	case LIBMC_ERROR_SQLITE_PROTOCOL:
		return "SQLite: Database lock protocol error";
	case LIBMC_ERROR_SQLITE_SCHEMA:
		return "SQLite: The database schema changed";
	case LIBMC_ERROR_SQLITE_TOOBIG:
		return "SQLite: String or BLOB exceeds size limit";
	case LIBMC_ERROR_SQLITE_CONSTRAINT:
		return "SQLite: Abort due to constraint violation";
	case LIBMC_ERROR_SQLITE_MISMATCH:
		return "SQLite: Data type mismatch";
	case LIBMC_ERROR_SQLITE_MISUSE:
		return "SQLite: Library used incorrectly";
	case LIBMC_ERROR_SQLITE_NOLFS:
		return "SQLite: Uses OS features not supported on host";
	case LIBMC_ERROR_SQLITE_AUTH:
		return "SQLite: Authorization denied";
	case LIBMC_ERROR_SQLITE_RANGE:
		return "SQLite: 2nd parameter to sqlite3_bind out of range";
	case LIBMC_ERROR_SQLITE_NOTADB:
		return "SQLite: File opened that is not a database file";
	case LIBMC_ERROR_SQLITE_NOTICE:
		return "SQLite: Notifications from sqlite3_log";
	case LIBMC_ERROR_SQLITE_WARNING:
		return "SQLite: Warnings from sqlite3_log";
	case LIBMC_ERROR_SQLITE_OTHER:
		return "SQLite: Other Error";
	case LIBMC_ERROR_SQLITE_TOOMANYRESULTROWS:
		return "too many result rows";
	case LIBMC_ERROR_COULDNOTREADZIPFILE:
		return "Could not read ZIP file";
	case LIBMC_ERROR_COULDNOTOPENZIPFILE:
		return "Could not open ZIP file";
	case LIBMC_ERROR_COULDNOTGETZIPENTRIES:
		return "Could not get ZIP file entries";
	case LIBMC_ERROR_ZIPENTRYNOTFOUND:
		return "ZIP Entry not found";
	case LIBMC_ERROR_COULDNOTSTATZIPENTRY:
		return "Could not stat ZIP entry";
	case LIBMC_ERROR_COULDNOTOPENZIPENTRY:
		return "Could not open ZIP entry";
	case LIBMC_ERROR_COULDNOTREADZIPSTREAM:
		return "Could not read ZIP stream";
	case LIBMC_ERROR_COULDNOTREADFULLZIPDATA:
		return "Could not read full zip data";
	case LIBMC_ERROR_COULDNOTFINDDISTRIBUTIONINDEX:
		return "Could not find distribution index.";
	case LIBMC_ERROR_COULDNOTPARSEDISTRIBUTIONINDEX:
		return "Could not parse distribution index.";
	case LIBMC_ERROR_EMPTYDISTRIBUTIONINDEX:
		return "Empty distribution index.";
	case LIBMC_ERROR_MISSINGDISTRIBUTIONINDEX:
		return "Missing distribution index.";
	case LIBMC_ERROR_MISSINGDISTRIBUTIONURL:
		return "Missing distribution url.";
	case LIBMC_ERROR_MISSINGDISTRIBUTIONFILENAME:
		return "Missing distribution filename.";
	case LIBMC_ERROR_MISSINGDISTRIBUTIONSIZE:
		return "Missing distribution size.";
	case LIBMC_ERROR_MISSINGDISTRIBUTIONCONTENTTYPE:
		return "Missing distribution content type.";
	case LIBMC_ERROR_DRIVERALREADYREGISTERED:
		return "Driver already registered.";
	case LIBMC_ERROR_DRIVERNOTFOUND:
		return "Driver not found.";
	case LIBMC_ERROR_MISSINGDRIVERNAME:
		return "Missing driver name.";
	case LIBMC_ERROR_MISSINGDRIVERTYPE:
		return "Missing driver type.";
	case LIBMC_ERROR_MISSINGDRIVERLIBRARY:
		return "Missing driver library.";
	case LIBMC_ERROR_DRIVERALREADYRESERVED:
		return "Driver has already been reserved by an instance.";
	case LIBMC_ERROR_LIBRARYPATHNOTFOUND:
		return "Library path not found.";
	case LIBMC_ERROR_TOOLPATHENTITYNOTLOADED:
		return "Toolpath entity not loaded";
	case LIBMC_ERROR_TOOLPATHENTITYREFERENCEERROR:
		return "Toolpath entity reference error";
	case LIBMC_ERROR_TOOLPATHENTITYINVALIDFILE:
		return "Toolpath entity is invalid";
	case LIBMC_ERROR_NO3MFLIBRARY:
		return "No 3MF Library specified";
	case LIBMC_ERROR_INVALIDPOINTCOUNT:
		return "Invalid point count";
	default:
		return "unknown";
	}
}

func makeError(errorcode uint32) error {
	return &WrappedError{errorcode, errorMessage(uint32(errorcode))}
}
// Wrapper represents the number wrapper
type Wrapper struct {
	_ [0]func() // uncomparable; to make == not compile
	LibraryHandle C.LibMCHandle
}


// Base represents a LibMC class.
type Base struct {
	_     [0]func() // uncomparable; to make == not compile
	ref   ref       // identifies a C value, see ref type
	wrapperRef *Wrapper
	gcPtr *ref      // used to trigger the finalizer when the Value is not referenced any more
}

// NewBase creates a new Base.
// The wrapped C pointer will be freed when the Go pointer is finalized,
// but one can release it manually calling Release.
func (wrapper * Wrapper) NewBase(r ref) Base {
	gcPtr := new(ref)
	*gcPtr = r
	runtime.SetFinalizer(gcPtr, wrapper.releaseC)
	return Base{ref: r, gcPtr: gcPtr, wrapperRef: wrapper}
}

// Release releases the C pointer.
func (inst Base) Release() error {
	if (inst.wrapperRef != nil) {
		err := inst.wrapperRef.ReleaseInstance(inst)
		*inst.gcPtr = nil
		return err
	} else {
		*inst.gcPtr = nil
		return nil;
	}
}

// Equal reports whether inst and w refer to the same C pointer.
func (inst Base) Equal(w Base) bool {
	return inst.ref == w.ref
}

// APIResponse represents a LibMC class.
type APIResponse struct {
	Base
}

func (wrapper * Wrapper) newAPIResponse(r ref) APIResponse {
	return APIResponse{wrapper.NewBase(r)}
}
// GetHTTPCode returns the HTTP Errorcode to set (200 for success).
func (inst APIResponse) GetHTTPCode() (uint32, error) {
	var hTTPCode C.uint32_t
	ret := C.CCall_libmc_apiresponse_gethttpcode(inst.wrapperRef.LibraryHandle, inst.ref, &hTTPCode)
	if ret != 0 {
		return 0, makeError(uint32(ret))
	}
	return uint32(hTTPCode), nil
}

// GetContentType returns the content type string of the data.
func (inst APIResponse) GetContentType() (string, error) {
	var neededforcontentType C.uint32_t
	var filledincontentType C.uint32_t
	ret := C.CCall_libmc_apiresponse_getcontenttype(inst.wrapperRef.LibraryHandle, inst.ref, 0, &neededforcontentType, nil)
	if ret != 0 {
		return "", makeError(uint32(ret))
	}
	bufferSizecontentType := neededforcontentType
	buffercontentType := make([]byte, bufferSizecontentType)
	ret = C.CCall_libmc_apiresponse_getcontenttype(inst.wrapperRef.LibraryHandle, inst.ref, bufferSizecontentType, &filledincontentType, (*C.char)(unsafe.Pointer(&buffercontentType[0])))
	if ret != 0 {
		return "", makeError(uint32(ret))
	}
	return string(buffercontentType[:(filledincontentType-1)]), nil
}

// GetData returns the stream content of the data.
func (inst APIResponse) GetData() ([]uint8, error) {

	var data []uint8;
	var neededfordata C.uint64_t
	ret := C.CCall_libmc_apiresponse_getdata(inst.wrapperRef.LibraryHandle, inst.ref, 0, &neededfordata, nil)
	if ret != 0 {
		return nil, makeError(uint32(ret))
	}
	if len(data) < int(neededfordata) {
	 data = append(data, make([]uint8, int(neededfordata)-len(data))...)
	}
	ret = C.CCall_libmc_apiresponse_getdata(inst.wrapperRef.LibraryHandle, inst.ref, neededfordata, nil, (*C.uint8_t)(unsafe.Pointer(&data[0])))
	if ret != 0 {
		return nil, makeError(uint32(ret))
	}
	return data[:int(neededfordata)], nil
}


// MCContext represents a LibMC class.
type MCContext struct {
	Base
}

func (wrapper * Wrapper) newMCContext(r ref) MCContext {
	return MCContext{wrapper.NewBase(r)}
}
// RegisterLibraryPath registers a library for a given name.
func (inst MCContext) RegisterLibraryPath(libraryName string, libraryPath string) error {
	ret := C.CCall_libmc_mccontext_registerlibrarypath(inst.wrapperRef.LibraryHandle, inst.ref, (*C.char)(unsafe.Pointer(&[]byte(libraryName)[0])), (*C.char)(unsafe.Pointer(&[]byte(libraryPath)[0])))
	if ret != 0 {
		return makeError(uint32(ret))
	}
	return nil
}

// ParseConfiguration parses and initialises the state machines from a configuration XML.
func (inst MCContext) ParseConfiguration(xMLString string) error {
	ret := C.CCall_libmc_mccontext_parseconfiguration(inst.wrapperRef.LibraryHandle, inst.ref, (*C.char)(unsafe.Pointer(&[]byte(xMLString)[0])))
	if ret != 0 {
		return makeError(uint32(ret))
	}
	return nil
}

// StartAllThreads starts the threads for all the state machines.
func (inst MCContext) StartAllThreads() error {
	ret := C.CCall_libmc_mccontext_startallthreads(inst.wrapperRef.LibraryHandle, inst.ref)
	if ret != 0 {
		return makeError(uint32(ret))
	}
	return nil
}

// TerminateAllThreads terminates the threads for all the state machines.
func (inst MCContext) TerminateAllThreads() error {
	ret := C.CCall_libmc_mccontext_terminateallthreads(inst.wrapperRef.LibraryHandle, inst.ref)
	if ret != 0 {
		return makeError(uint32(ret))
	}
	return nil
}

// LoadClientPackage load a client package to serve the client website.
func (inst MCContext) LoadClientPackage(zIPStream []uint8) error {
	ret := C.CCall_libmc_mccontext_loadclientpackage(inst.wrapperRef.LibraryHandle, inst.ref, C.uint64_t(len(zIPStream)), (*C.uint8_t)(unsafe.Pointer(&zIPStream[0])))
	if ret != 0 {
		return makeError(uint32(ret))
	}
	return nil
}

// Log log message with a certain log level.
func (inst MCContext) Log(message string, subsystem LogSubSystem, logLevel LogLevel) error {
	ret := C.CCall_libmc_mccontext_log(inst.wrapperRef.LibraryHandle, inst.ref, (*C.char)(unsafe.Pointer(&[]byte(message)[0])), C.eLibMCLogSubSystem(subsystem), C.eLibMCDataLogLevel(logLevel))
	if ret != 0 {
		return makeError(uint32(ret))
	}
	return nil
}

// HandleAPIGetRequest handle an API GET request.
func (inst MCContext) HandleAPIGetRequest(uRI string) (APIResponse, error) {
	var response ref
	ret := C.CCall_libmc_mccontext_handleapigetrequest(inst.wrapperRef.LibraryHandle, inst.ref, (*C.char)(unsafe.Pointer(&[]byte(uRI)[0])), &response)
	if ret != 0 {
		return APIResponse{}, makeError(uint32(ret))
	}
	return inst.wrapperRef.newAPIResponse(response), nil
}

// HandleAPIPostRequest handle an API POST request.
func (inst MCContext) HandleAPIPostRequest(uRI string, body []uint8) (APIResponse, error) {
	var response ref
	ret := C.CCall_libmc_mccontext_handleapipostrequest(inst.wrapperRef.LibraryHandle, inst.ref, (*C.char)(unsafe.Pointer(&[]byte(uRI)[0])), C.uint64_t(len(body)), (*C.uint8_t)(unsafe.Pointer(&body[0])), &response)
	if ret != 0 {
		return APIResponse{}, makeError(uint32(ret))
	}
	return inst.wrapperRef.newAPIResponse(response), nil
}


// GetVersion retrieves the binary version of this library.
func (wrapper Wrapper) GetVersion() (uint32, uint32, uint32, error) {
	var major C.uint32_t
	var minor C.uint32_t
	var micro C.uint32_t
	ret := C.CCall_libmc_getversion(wrapper.LibraryHandle, &major, &minor, &micro)
	if ret != 0 {
		return 0, 0, 0, makeError(uint32(ret))
	}
	return uint32(major), uint32(minor), uint32(micro), nil
}

// GetLastError returns the last error recorded on this object.
func (wrapper Wrapper) GetLastError(instance Base) (string, bool, error) {
	var neededforerrorMessage C.uint32_t
	var filledinerrorMessage C.uint32_t
	var hasError C.bool
	ret := C.CCall_libmc_getlasterror(wrapper.LibraryHandle, instance.ref, 0, &neededforerrorMessage, nil, &hasError)
	if ret != 0 {
		return "", false, makeError(uint32(ret))
	}
	bufferSizeerrorMessage := neededforerrorMessage
	buffererrorMessage := make([]byte, bufferSizeerrorMessage)
	ret = C.CCall_libmc_getlasterror(wrapper.LibraryHandle, instance.ref, bufferSizeerrorMessage, &filledinerrorMessage, (*C.char)(unsafe.Pointer(&buffererrorMessage[0])), &hasError)
	if ret != 0 {
		return "", false, makeError(uint32(ret))
	}
	return string(buffererrorMessage[:(filledinerrorMessage-1)]), bool(hasError), nil
}

// ReleaseInstance releases shared ownership of an Instance.
func (wrapper Wrapper) ReleaseInstance(instance Base) error {
	ret := C.CCall_libmc_releaseinstance(wrapper.LibraryHandle, instance.ref)
	if ret != 0 {
		return makeError(uint32(ret))
	}
	return nil
}

// AcquireInstance acquires shared ownership of an Instance.
func (wrapper Wrapper) AcquireInstance(instance Base) error {
	ret := C.CCall_libmc_acquireinstance(wrapper.LibraryHandle, instance.ref)
	if ret != 0 {
		return makeError(uint32(ret))
	}
	return nil
}

// InjectComponent injects an imported component for usage within this component.
func (wrapper Wrapper) InjectComponent(nameSpace string, symbolAddressMethod uint64) error {
	ret := C.CCall_libmc_injectcomponent(wrapper.LibraryHandle, (*C.char)(unsafe.Pointer(&[]byte(nameSpace)[0])), C.uint64_t(symbolAddressMethod))
	if ret != 0 {
		return makeError(uint32(ret))
	}
	return nil
}

// CreateMCContext creates and initializes new MC Context.
func (wrapper Wrapper) CreateMCContext(dataModel libmcdata.DataModel) (MCContext, error) {
	var instance ref
	ret := C.CCall_libmc_createmccontext(wrapper.LibraryHandle, C.injectLibMCDataHandle (unsafe.Pointer(dataModel.Ref)), &instance)
	if ret != 0 {
		return MCContext{}, makeError(uint32(ret))
	}
	return wrapper.newMCContext(instance), nil
}

func (wrapper * Wrapper) releaseC(r *ref) error {
	if r == nil || *r == nil {
		return nil
	}
	return wrapper.ReleaseInstance(Base{ref: *r})
}

func (wrapper * Wrapper) CheckBinaryVersion() error {
	var nBindingMajor uint32 = 1;
	var nBindingMinor uint32 = 0;
	nMajor, nMinor, _, err := wrapper.GetVersion()
	if err != nil {
		return err;
	}
	if (nMajor != nBindingMajor) || (nMinor < nBindingMinor) {
		return makeError(0)
	}
	return nil
}

func LoadLibrary (libraryPath string) (Wrapper, error) {
	var wrapper Wrapper;
	wrapper.LibraryHandle = C.loadLibMCLibrary (C.CString (libraryPath));
	if (wrapper.LibraryHandle == nil) {
		return wrapper, makeError (LIBMC_ERROR_COULDNOTLOADLIBRARY)
	}
	
	return wrapper, nil
	
}
