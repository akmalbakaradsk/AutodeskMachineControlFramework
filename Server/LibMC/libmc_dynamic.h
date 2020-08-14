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

Abstract: This is an autogenerated plain C Header file in order to allow an easy
 use of Machine Control library

Interface version: 1.0.0

*/

#ifndef __LIBMC_DYNAMICHEADER
#define __LIBMC_DYNAMICHEADER

#include "libmc_types.h"

#include "libmcdata_types.h"


/*************************************************************************************************************************
 Class definition for Base
**************************************************************************************************************************/

/*************************************************************************************************************************
 Class definition for APIRequestHandler
**************************************************************************************************************************/

/**
* checks if the raw body is needed to handle the request.
*
* @param[in] pAPIRequestHandler - APIRequestHandler instance.
* @param[out] pValue - Flag, if the raw body is needed in the request.
* @return error code or 0 (success)
*/
typedef LibMCResult (*PLibMCAPIRequestHandler_ExpectsRawBodyPtr) (LibMC_APIRequestHandler pAPIRequestHandler, bool * pValue);

/**
* checks if the parsed form data is needed to handle the request.
*
* @param[in] pAPIRequestHandler - APIRequestHandler instance.
* @param[out] pFieldCount - Number of Form Data entries that are expected.
* @param[out] pValue - Flag, if the parsed form data is needed in the request.
* @return error code or 0 (success)
*/
typedef LibMCResult (*PLibMCAPIRequestHandler_ExpectsFormDataPtr) (LibMC_APIRequestHandler pAPIRequestHandler, LibMC_uint32 * pFieldCount, bool * pValue);

/**
* returns details of expected form data.
*
* @param[in] pAPIRequestHandler - APIRequestHandler instance.
* @param[in] nFieldIndex - Index of Form Data Field (0..FieldCount - 1)
* @param[in] nNameBufferSize - size of the buffer (including trailing 0)
* @param[out] pNameNeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pNameBuffer -  buffer of Name of the expected form data field., may be NULL
* @param[out] pIsFile - Flag, if the field Is a file field.
* @param[out] pMandatory - Flag, if the field MUST be present.
* @return error code or 0 (success)
*/
typedef LibMCResult (*PLibMCAPIRequestHandler_GetFormDataDetailsPtr) (LibMC_APIRequestHandler pAPIRequestHandler, LibMC_uint32 nFieldIndex, const LibMC_uint32 nNameBufferSize, LibMC_uint32* pNameNeededChars, char * pNameBuffer, bool * pIsFile, bool * pMandatory);

/**
* passes the a form data field to the request handler. Call only, if ExpectsFormData returns true.
*
* @param[in] pAPIRequestHandler - APIRequestHandler instance.
* @param[in] pName - Name of the form data field.
* @param[in] nDataFieldBufferSize - Number of elements in buffer
* @param[in] pDataFieldBuffer - uint8 buffer of DataField that was sent.
* @return error code or 0 (success)
*/
typedef LibMCResult (*PLibMCAPIRequestHandler_SetFormDataFieldPtr) (LibMC_APIRequestHandler pAPIRequestHandler, const char * pName, LibMC_uint64 nDataFieldBufferSize, const LibMC_uint8 * pDataFieldBuffer);

/**
* passes the a form string field to the request handler. Call only, if ExpectsFormData returns true.
*
* @param[in] pAPIRequestHandler - APIRequestHandler instance.
* @param[in] pName - Name of the form data field.
* @param[in] pString - DataString that was sent.
* @return error code or 0 (success)
*/
typedef LibMCResult (*PLibMCAPIRequestHandler_SetFormStringFieldPtr) (LibMC_APIRequestHandler pAPIRequestHandler, const char * pName, const char * pString);

/**
* handles the request.
*
* @param[in] pAPIRequestHandler - APIRequestHandler instance.
* @param[in] nRawBodyBufferSize - Number of elements in buffer
* @param[in] pRawBodyBuffer - uint8 buffer of Raw Body that was sent. Only necessary, if ExpectsRawBody returns true.
* @param[in] nContentTypeBufferSize - size of the buffer (including trailing 0)
* @param[out] pContentTypeNeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pContentTypeBuffer -  buffer of the resulting Content Type String of the data., may be NULL
* @param[out] pHTTPCode - the resulting HTTP Errorcode (200 for success).
* @return error code or 0 (success)
*/
typedef LibMCResult (*PLibMCAPIRequestHandler_HandlePtr) (LibMC_APIRequestHandler pAPIRequestHandler, LibMC_uint64 nRawBodyBufferSize, const LibMC_uint8 * pRawBodyBuffer, const LibMC_uint32 nContentTypeBufferSize, LibMC_uint32* pContentTypeNeededChars, char * pContentTypeBuffer, LibMC_uint32 * pHTTPCode);

/**
* returns the cached stream content of the resulting data. Call only after Handle().
*
* @param[in] pAPIRequestHandler - APIRequestHandler instance.
* @param[in] nDataBufferSize - Number of elements in buffer
* @param[out] pDataNeededCount - will be filled with the count of the written elements, or needed buffer size.
* @param[out] pDataBuffer - uint8 buffer of Binary stream data
* @return error code or 0 (success)
*/
typedef LibMCResult (*PLibMCAPIRequestHandler_GetResultDataPtr) (LibMC_APIRequestHandler pAPIRequestHandler, const LibMC_uint64 nDataBufferSize, LibMC_uint64* pDataNeededCount, LibMC_uint8 * pDataBuffer);

/*************************************************************************************************************************
 Class definition for MCContext
**************************************************************************************************************************/

/**
* registers a library for a given name.
*
* @param[in] pMCContext - MCContext instance.
* @param[in] pLibraryName - Library Name.
* @param[in] pLibraryPath - Path to the shared library.
* @return error code or 0 (success)
*/
typedef LibMCResult (*PLibMCMCContext_RegisterLibraryPathPtr) (LibMC_MCContext pMCContext, const char * pLibraryName, const char * pLibraryPath);

/**
* parses and initialises the state machines from a configuration XML.
*
* @param[in] pMCContext - MCContext instance.
* @param[in] pXMLString - XML Configuration String.
* @return error code or 0 (success)
*/
typedef LibMCResult (*PLibMCMCContext_ParseConfigurationPtr) (LibMC_MCContext pMCContext, const char * pXMLString);

/**
* starts the threads for all the state machines.
*
* @param[in] pMCContext - MCContext instance.
* @return error code or 0 (success)
*/
typedef LibMCResult (*PLibMCMCContext_StartAllThreadsPtr) (LibMC_MCContext pMCContext);

/**
* terminates the threads for all the state machines.
*
* @param[in] pMCContext - MCContext instance.
* @return error code or 0 (success)
*/
typedef LibMCResult (*PLibMCMCContext_TerminateAllThreadsPtr) (LibMC_MCContext pMCContext);

/**
* load a client package to serve the client website.
*
* @param[in] pMCContext - MCContext instance.
* @param[in] nZIPStreamBufferSize - Number of elements in buffer
* @param[in] pZIPStreamBuffer - uint8 buffer of client package ZIP stream.
* @return error code or 0 (success)
*/
typedef LibMCResult (*PLibMCMCContext_LoadClientPackagePtr) (LibMC_MCContext pMCContext, LibMC_uint64 nZIPStreamBufferSize, const LibMC_uint8 * pZIPStreamBuffer);

/**
* log message with a certain log level.
*
* @param[in] pMCContext - MCContext instance.
* @param[in] pMessage - log message
* @param[in] eSubsystem - log subsystem
* @param[in] eLogLevel - log level
* @return error code or 0 (success)
*/
typedef LibMCResult (*PLibMCMCContext_LogPtr) (LibMC_MCContext pMCContext, const char * pMessage, eLibMCLogSubSystem eSubsystem, eLibMCLogLevel eLogLevel);

/**
* creates an API request handler.
*
* @param[in] pMCContext - MCContext instance.
* @param[in] pURI - URI to serve
* @param[in] pRequestMethod - Request Method
* @param[out] pHandlerInstance - Request Handler instance.
* @return error code or 0 (success)
*/
typedef LibMCResult (*PLibMCMCContext_CreateAPIRequestHandlerPtr) (LibMC_MCContext pMCContext, const char * pURI, const char * pRequestMethod, LibMC_APIRequestHandler * pHandlerInstance);

/*************************************************************************************************************************
 Global functions
**************************************************************************************************************************/

/**
* retrieves the binary version of this library.
*
* @param[out] pMajor - returns the major version of this library
* @param[out] pMinor - returns the minor version of this library
* @param[out] pMicro - returns the micro version of this library
* @return error code or 0 (success)
*/
typedef LibMCResult (*PLibMCGetVersionPtr) (LibMC_uint32 * pMajor, LibMC_uint32 * pMinor, LibMC_uint32 * pMicro);

/**
* Returns the last error recorded on this object
*
* @param[in] pInstance - Instance Handle
* @param[in] nErrorMessageBufferSize - size of the buffer (including trailing 0)
* @param[out] pErrorMessageNeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pErrorMessageBuffer -  buffer of Message of the last error, may be NULL
* @param[out] pHasError - Is there a last error to query
* @return error code or 0 (success)
*/
typedef LibMCResult (*PLibMCGetLastErrorPtr) (LibMC_Base pInstance, const LibMC_uint32 nErrorMessageBufferSize, LibMC_uint32* pErrorMessageNeededChars, char * pErrorMessageBuffer, bool * pHasError);

/**
* Releases shared ownership of an Instance
*
* @param[in] pInstance - Instance Handle
* @return error code or 0 (success)
*/
typedef LibMCResult (*PLibMCReleaseInstancePtr) (LibMC_Base pInstance);

/**
* Acquires shared ownership of an Instance
*
* @param[in] pInstance - Instance Handle
* @return error code or 0 (success)
*/
typedef LibMCResult (*PLibMCAcquireInstancePtr) (LibMC_Base pInstance);

/**
* Injects an imported component for usage within this component
*
* @param[in] pNameSpace - NameSpace of the injected component
* @param[in] pSymbolAddressMethod - Address of the SymbolAddressMethod of the injected component
* @return error code or 0 (success)
*/
typedef LibMCResult (*PLibMCInjectComponentPtr) (const char * pNameSpace, LibMC_pvoid pSymbolAddressMethod);

/**
* Creates and initializes new MC Context.
*
* @param[in] pDataModel - DataModel Object
* @param[out] pInstance - New Context instance
* @return error code or 0 (success)
*/
typedef LibMCResult (*PLibMCCreateMCContextPtr) (LibMCData_DataModel pDataModel, LibMC_MCContext * pInstance);

/*************************************************************************************************************************
 Function Table Structure
**************************************************************************************************************************/

typedef struct {
	void * m_LibraryHandle;
	PLibMCAPIRequestHandler_ExpectsRawBodyPtr m_APIRequestHandler_ExpectsRawBody;
	PLibMCAPIRequestHandler_ExpectsFormDataPtr m_APIRequestHandler_ExpectsFormData;
	PLibMCAPIRequestHandler_GetFormDataDetailsPtr m_APIRequestHandler_GetFormDataDetails;
	PLibMCAPIRequestHandler_SetFormDataFieldPtr m_APIRequestHandler_SetFormDataField;
	PLibMCAPIRequestHandler_SetFormStringFieldPtr m_APIRequestHandler_SetFormStringField;
	PLibMCAPIRequestHandler_HandlePtr m_APIRequestHandler_Handle;
	PLibMCAPIRequestHandler_GetResultDataPtr m_APIRequestHandler_GetResultData;
	PLibMCMCContext_RegisterLibraryPathPtr m_MCContext_RegisterLibraryPath;
	PLibMCMCContext_ParseConfigurationPtr m_MCContext_ParseConfiguration;
	PLibMCMCContext_StartAllThreadsPtr m_MCContext_StartAllThreads;
	PLibMCMCContext_TerminateAllThreadsPtr m_MCContext_TerminateAllThreads;
	PLibMCMCContext_LoadClientPackagePtr m_MCContext_LoadClientPackage;
	PLibMCMCContext_LogPtr m_MCContext_Log;
	PLibMCMCContext_CreateAPIRequestHandlerPtr m_MCContext_CreateAPIRequestHandler;
	PLibMCGetVersionPtr m_GetVersion;
	PLibMCGetLastErrorPtr m_GetLastError;
	PLibMCReleaseInstancePtr m_ReleaseInstance;
	PLibMCAcquireInstancePtr m_AcquireInstance;
	PLibMCInjectComponentPtr m_InjectComponent;
	PLibMCCreateMCContextPtr m_CreateMCContext;
} sLibMCDynamicWrapperTable;

/*************************************************************************************************************************
 Load DLL dynamically
**************************************************************************************************************************/
LibMCResult InitLibMCWrapperTable(sLibMCDynamicWrapperTable * pWrapperTable);
LibMCResult ReleaseLibMCWrapperTable(sLibMCDynamicWrapperTable * pWrapperTable);
LibMCResult LoadLibMCWrapperTable(sLibMCDynamicWrapperTable * pWrapperTable, const char * pLibraryFileName);

#endif // __LIBMC_DYNAMICHEADER

