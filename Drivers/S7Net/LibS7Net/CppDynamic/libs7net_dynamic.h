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

Abstract: This is an autogenerated C++-Header file in order to allow an easy
 use of S7Net Library Wrapper

Interface version: 1.2.0

*/

#ifndef __LIBS7NET_DYNAMICHEADER_CPPTYPES
#define __LIBS7NET_DYNAMICHEADER_CPPTYPES

#include "libs7net_types.hpp"



/*************************************************************************************************************************
 Class definition for Base
**************************************************************************************************************************/

/*************************************************************************************************************************
 Class definition for PLCReadData
**************************************************************************************************************************/

/**
* Returns the binary data.
*
* @param[in] pPLCReadData - PLCReadData instance.
* @param[in] nDataBufferSize - Number of elements in buffer
* @param[out] pDataNeededCount - will be filled with the count of the written elements, or needed buffer size.
* @param[out] pDataBuffer - uint8 buffer of Binary data.
* @return error code or 0 (success)
*/
typedef LibS7NetResult (*PLibS7NetPLCReadData_GetDataPtr) (LibS7Net_PLCReadData pPLCReadData, const LibS7Net_uint64 nDataBufferSize, LibS7Net_uint64* pDataNeededCount, LibS7Net_uint8 * pDataBuffer);

/*************************************************************************************************************************
 Class definition for PLC
**************************************************************************************************************************/

/**
* Connects to a PLC Instance
*
* @param[in] pPLC - PLC instance.
* @param[in] eCPUType - CPU type to connect to.
* @param[in] pIP - IP address to connect to.
* @param[in] nRack - Rack to connect to.
* @param[in] nSlot - Slot to connect to.
* @return error code or 0 (success)
*/
typedef LibS7NetResult (*PLibS7NetPLC_ConnectPtr) (LibS7Net_PLC pPLC, LibS7Net::eCPUType eCPUType, const char * pIP, LibS7Net_uint32 nRack, LibS7Net_uint32 nSlot);

/**
* Checks if the socket is connected and polls the other peer (the plc) to see if it is connected.
*
* @param[in] pPLC - PLC instance.
* @param[out] pConnected - Flag if the socket is connected.
* @return error code or 0 (success)
*/
typedef LibS7NetResult (*PLibS7NetPLC_IsConnectedPtr) (LibS7Net_PLC pPLC, bool * pConnected);

/**
* Returns true if a connection to the plc can be established.
*
* @param[in] pPLC - PLC instance.
* @param[out] pConnected - Flag if the socket is connected.
* @return error code or 0 (success)
*/
typedef LibS7NetResult (*PLibS7NetPLC_IsAvailablePtr) (LibS7Net_PLC pPLC, bool * pConnected);

/**
* Returns slot of the CPU of the plc.
*
* @param[in] pPLC - PLC instance.
* @param[out] pSlot - Slot of the CPU of the plc.
* @return error code or 0 (success)
*/
typedef LibS7NetResult (*PLibS7NetPLC_GetSlotPtr) (LibS7Net_PLC pPLC, LibS7Net_uint32 * pSlot);

/**
* Returns rack of the plc.
*
* @param[in] pPLC - PLC instance.
* @param[out] pSlot - Rack of the plc.
* @return error code or 0 (success)
*/
typedef LibS7NetResult (*PLibS7NetPLC_GetRackPtr) (LibS7Net_PLC pPLC, LibS7Net_uint32 * pSlot);

/**
* Returns Cpu type of the plc.
*
* @param[in] pPLC - PLC instance.
* @param[out] pCPUType - Cpu type of the plc.
* @return error code or 0 (success)
*/
typedef LibS7NetResult (*PLibS7NetPLC_GetCPUTypePtr) (LibS7Net_PLC pPLC, LibS7Net::eCPUType * pCPUType);

/**
* Returns Ip address of the plc.
*
* @param[in] pPLC - PLC instance.
* @param[in] nIPAddressBufferSize - size of the buffer (including trailing 0)
* @param[out] pIPAddressNeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pIPAddressBuffer -  buffer of Ip address of the plc., may be NULL
* @return error code or 0 (success)
*/
typedef LibS7NetResult (*PLibS7NetPLC_GetIPAddressPtr) (LibS7Net_PLC pPLC, const LibS7Net_uint32 nIPAddressBufferSize, LibS7Net_uint32* pIPAddressNeededChars, char * pIPAddressBuffer);

/**
* Writes bytes into a PLC DB.
*
* @param[in] pPLC - PLC instance.
* @param[in] nDB - ID of DB.
* @param[in] nOffset - Address to write into.
* @param[in] nBytesBufferSize - Number of elements in buffer
* @param[in] pBytesBuffer - uint8 buffer of ByteArray to write.
* @return error code or 0 (success)
*/
typedef LibS7NetResult (*PLibS7NetPLC_WriteBytesPtr) (LibS7Net_PLC pPLC, LibS7Net_uint32 nDB, LibS7Net_uint32 nOffset, LibS7Net_uint64 nBytesBufferSize, const LibS7Net_uint8 * pBytesBuffer);

/**
* Read bytes from a PLC DB.
*
* @param[in] pPLC - PLC instance.
* @param[in] nDB - ID of DB.
* @param[in] nOffset - Address to write into.
* @param[in] nCount - Number of bytes to read.
* @param[out] pReadData - Read Data Instance.
* @return error code or 0 (success)
*/
typedef LibS7NetResult (*PLibS7NetPLC_ReadBytesPtr) (LibS7Net_PLC pPLC, LibS7Net_uint32 nDB, LibS7Net_uint32 nOffset, LibS7Net_uint32 nCount, LibS7Net_PLCReadData * pReadData);

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
typedef LibS7NetResult (*PLibS7NetGetVersionPtr) (LibS7Net_uint32 * pMajor, LibS7Net_uint32 * pMinor, LibS7Net_uint32 * pMicro);

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
typedef LibS7NetResult (*PLibS7NetGetLastErrorPtr) (LibS7Net_Base pInstance, const LibS7Net_uint32 nErrorMessageBufferSize, LibS7Net_uint32* pErrorMessageNeededChars, char * pErrorMessageBuffer, bool * pHasError);

/**
* Acquire shared ownership of an Instance
*
* @param[in] pInstance - Instance Handle
* @return error code or 0 (success)
*/
typedef LibS7NetResult (*PLibS7NetAcquireInstancePtr) (LibS7Net_Base pInstance);

/**
* Releases shared ownership of an Instance
*
* @param[in] pInstance - Instance Handle
* @return error code or 0 (success)
*/
typedef LibS7NetResult (*PLibS7NetReleaseInstancePtr) (LibS7Net_Base pInstance);

/**
* Returns a PLC instance
*
* @param[in] pCOMHost - Path to COM Host
* @param[out] pPLCInstance - PLC Instance
* @return error code or 0 (success)
*/
typedef LibS7NetResult (*PLibS7NetCreatePLCPtr) (const char * pCOMHost, LibS7Net_PLC * pPLCInstance);

/*************************************************************************************************************************
 Function Table Structure
**************************************************************************************************************************/

typedef struct {
	void * m_LibraryHandle;
	PLibS7NetPLCReadData_GetDataPtr m_PLCReadData_GetData;
	PLibS7NetPLC_ConnectPtr m_PLC_Connect;
	PLibS7NetPLC_IsConnectedPtr m_PLC_IsConnected;
	PLibS7NetPLC_IsAvailablePtr m_PLC_IsAvailable;
	PLibS7NetPLC_GetSlotPtr m_PLC_GetSlot;
	PLibS7NetPLC_GetRackPtr m_PLC_GetRack;
	PLibS7NetPLC_GetCPUTypePtr m_PLC_GetCPUType;
	PLibS7NetPLC_GetIPAddressPtr m_PLC_GetIPAddress;
	PLibS7NetPLC_WriteBytesPtr m_PLC_WriteBytes;
	PLibS7NetPLC_ReadBytesPtr m_PLC_ReadBytes;
	PLibS7NetGetVersionPtr m_GetVersion;
	PLibS7NetGetLastErrorPtr m_GetLastError;
	PLibS7NetAcquireInstancePtr m_AcquireInstance;
	PLibS7NetReleaseInstancePtr m_ReleaseInstance;
	PLibS7NetCreatePLCPtr m_CreatePLC;
} sLibS7NetDynamicWrapperTable;

#endif // __LIBS7NET_DYNAMICHEADER_CPPTYPES

