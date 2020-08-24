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
 use of MC Driver Marlin 2.0

Interface version: 1.0.0

*/

#ifndef __LIBMCDRIVER_MARLIN_DYNAMICHEADER_CPPTYPES
#define __LIBMCDRIVER_MARLIN_DYNAMICHEADER_CPPTYPES

#include "libmcdriver_marlin_types.hpp"

#include "libmcdriverenv_types.hpp"


/*************************************************************************************************************************
 Class definition for Base
**************************************************************************************************************************/

/*************************************************************************************************************************
 Class definition for Driver
**************************************************************************************************************************/

/**
* returns the name identifier of the driver
*
* @param[in] pDriver - Driver instance.
* @param[in] nNameBufferSize - size of the buffer (including trailing 0)
* @param[out] pNameNeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pNameBuffer -  buffer of Name of the driver., may be NULL
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinDriver_GetNamePtr) (LibMCDriver_Marlin_Driver pDriver, const LibMCDriver_Marlin_uint32 nNameBufferSize, LibMCDriver_Marlin_uint32* pNameNeededChars, char * pNameBuffer);

/**
* returns the type identifier of the driver
*
* @param[in] pDriver - Driver instance.
* @param[in] nTypeBufferSize - size of the buffer (including trailing 0)
* @param[out] pTypeNeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pTypeBuffer -  buffer of Type of the driver., may be NULL
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinDriver_GetTypePtr) (LibMCDriver_Marlin_Driver pDriver, const LibMCDriver_Marlin_uint32 nTypeBufferSize, LibMCDriver_Marlin_uint32* pTypeNeededChars, char * pTypeBuffer);

/**
* returns the version identifiers of the driver
*
* @param[in] pDriver - Driver instance.
* @param[out] pMajor - Major version.
* @param[out] pMinor - Minor version.
* @param[out] pMicro - Micro version.
* @param[in] nBuildBufferSize - size of the buffer (including trailing 0)
* @param[out] pBuildNeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pBuildBuffer -  buffer of Build identifier., may be NULL
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinDriver_GetVersionPtr) (LibMCDriver_Marlin_Driver pDriver, LibMCDriver_Marlin_uint32 * pMajor, LibMCDriver_Marlin_uint32 * pMinor, LibMCDriver_Marlin_uint32 * pMicro, const LibMCDriver_Marlin_uint32 nBuildBufferSize, LibMCDriver_Marlin_uint32* pBuildNeededChars, char * pBuildBuffer);

/**
* returns the header information
*
* @param[in] pDriver - Driver instance.
* @param[in] nNameSpaceBufferSize - size of the buffer (including trailing 0)
* @param[out] pNameSpaceNeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pNameSpaceBuffer -  buffer of NameSpace of the driver., may be NULL
* @param[in] nBaseNameBufferSize - size of the buffer (including trailing 0)
* @param[out] pBaseNameNeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pBaseNameBuffer -  buffer of BaseName of the driver., may be NULL
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinDriver_GetHeaderInformationPtr) (LibMCDriver_Marlin_Driver pDriver, const LibMCDriver_Marlin_uint32 nNameSpaceBufferSize, LibMCDriver_Marlin_uint32* pNameSpaceNeededChars, char * pNameSpaceBuffer, const LibMCDriver_Marlin_uint32 nBaseNameBufferSize, LibMCDriver_Marlin_uint32* pBaseNameNeededChars, char * pBaseNameBuffer);

/*************************************************************************************************************************
 Class definition for Driver_Marlin
**************************************************************************************************************************/

/**
* Creates and initializes a new Marlin Connector.
*
* @param[in] pDriver_Marlin - Driver_Marlin instance.
* @param[in] pCOMPort - Device Port to connect to
* @param[in] nBaudrate - Baudrate to use
* @param[in] dStatusUpdateInterval - Timer interval [ms] for updating status
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinDriver_Marlin_ConnectPtr) (LibMCDriver_Marlin_Driver_Marlin pDriver_Marlin, const char * pCOMPort, LibMCDriver_Marlin_uint32 nBaudrate, LibMCDriver_Marlin_double dStatusUpdateInterval);

/**
* Disconnects from the Marlin board.
*
* @param[in] pDriver_Marlin - Driver_Marlin instance.
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinDriver_Marlin_DisconnectPtr) (LibMCDriver_Marlin_Driver_Marlin pDriver_Marlin);

/**
* Sets the positioning to absolute values (default true).
*
* @param[in] pDriver_Marlin - Driver_Marlin instance.
* @param[in] bAbsolute - If true, sets positioning to absolute, if false to relative
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinDriver_Marlin_SetAbsolutePositioningPtr) (LibMCDriver_Marlin_Driver_Marlin pDriver_Marlin, bool bAbsolute);

/**
* Sets heated bed target temperature.
*
* @param[in] pDriver_Marlin - Driver_Marlin instance.
* @param[in] dTemperatureInDegreeCelcius - Bed target temperature.
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinDriver_Marlin_SetHeatedBedTargetTemperaturePtr) (LibMCDriver_Marlin_Driver_Marlin pDriver_Marlin, LibMCDriver_Marlin_double dTemperatureInDegreeCelcius);

/**
* Sets target temperature of the given extruder.
*
* @param[in] pDriver_Marlin - Driver_Marlin instance.
* @param[in] nExtruderID - ID of extruder.
* @param[in] dTemperatureInDegreeCelcius - Extruder target temperature.
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinDriver_Marlin_SetExtruderTargetTemperaturePtr) (LibMCDriver_Marlin_Driver_Marlin pDriver_Marlin, LibMCDriver_Marlin_uint32 nExtruderID, LibMCDriver_Marlin_double dTemperatureInDegreeCelcius);

/**
* Sets PID parameters.
*
* @param[in] pDriver_Marlin - Driver_Marlin instance.
* @param[in] dP - New value for P parameter.
* @param[in] dI - New value for I parameter.
* @param[in] dD - New value for D parameter.
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinDriver_Marlin_SetPidParametersPtr) (LibMCDriver_Marlin_Driver_Marlin pDriver_Marlin, LibMCDriver_Marlin_double dP, LibMCDriver_Marlin_double dI, LibMCDriver_Marlin_double dD);

/**
* Polls a new state from the firmware.
*
* @param[in] pDriver_Marlin - Driver_Marlin instance.
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinDriver_Marlin_UpdateStatePtr) (LibMCDriver_Marlin_Driver_Marlin pDriver_Marlin);

/**
* Returns the current axis position.
*
* @param[in] pDriver_Marlin - Driver_Marlin instance.
* @param[out] pX - X Value in mm
* @param[out] pY - Y Value in mm
* @param[out] pZ - Z Value in mm
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinDriver_Marlin_GetCurrentPositionPtr) (LibMCDriver_Marlin_Driver_Marlin pDriver_Marlin, LibMCDriver_Marlin_double * pX, LibMCDriver_Marlin_double * pY, LibMCDriver_Marlin_double * pZ);

/**
* Returns the current target position.
*
* @param[in] pDriver_Marlin - Driver_Marlin instance.
* @param[out] pX - X Value in mm
* @param[out] pY - Y Value in mm
* @param[out] pZ - Z Value in mm
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinDriver_Marlin_GetTargetPositionPtr) (LibMCDriver_Marlin_Driver_Marlin pDriver_Marlin, LibMCDriver_Marlin_double * pX, LibMCDriver_Marlin_double * pY, LibMCDriver_Marlin_double * pZ);

/**
* Returns the current extruder position.
*
* @param[in] pDriver_Marlin - Driver_Marlin instance.
* @param[out] pE - E Value in mm
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinDriver_Marlin_GetExtruderPositionPtr) (LibMCDriver_Marlin_Driver_Marlin pDriver_Marlin, LibMCDriver_Marlin_double * pE);

/**
* Returns the current and the target bed temperature.
*
* @param[in] pDriver_Marlin - Driver_Marlin instance.
* @param[out] pTargetTemperature - Target Temperature in degree celsius.
* @param[out] pCurrentTemperature - Current Temperature in degree celsius.
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinDriver_Marlin_GetHeatedBedTemperaturePtr) (LibMCDriver_Marlin_Driver_Marlin pDriver_Marlin, LibMCDriver_Marlin_double * pTargetTemperature, LibMCDriver_Marlin_double * pCurrentTemperature);

/**
* Returns the current and the target temperature of an extruder.
*
* @param[in] pDriver_Marlin - Driver_Marlin instance.
* @param[in] nExtruderID - ID of Extruder
* @param[out] pTargetTemperature - Target Temperature in degree celsius.
* @param[out] pCurrentTemperature - Current Temperature in degree celsius.
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinDriver_Marlin_GetExtruderTemperaturePtr) (LibMCDriver_Marlin_Driver_Marlin pDriver_Marlin, LibMCDriver_Marlin_uint32 nExtruderID, LibMCDriver_Marlin_double * pTargetTemperature, LibMCDriver_Marlin_double * pCurrentTemperature);

/**
* Returns the current PID values.
*
* @param[in] pDriver_Marlin - Driver_Marlin instance.
* @param[out] pP - Current P value.
* @param[out] pI - Current I value.
* @param[out] pD - Current D value.
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinDriver_Marlin_GetPidParametersPtr) (LibMCDriver_Marlin_Driver_Marlin pDriver_Marlin, LibMCDriver_Marlin_double * pP, LibMCDriver_Marlin_double * pI, LibMCDriver_Marlin_double * pD);

/**
* Returns if the movement buffer can receive another movement command..
*
* @param[in] pDriver_Marlin - Driver_Marlin instance.
* @param[out] pValue - True if a MoveTo or MoveFastTo command can be triggered.
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinDriver_Marlin_CanExecuteMovementPtr) (LibMCDriver_Marlin_Driver_Marlin pDriver_Marlin, bool * pValue);

/**
* Returns if the extruder is moving..
*
* @param[in] pDriver_Marlin - Driver_Marlin instance.
* @param[out] pValue - Extruder is moving
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinDriver_Marlin_IsMovingPtr) (LibMCDriver_Marlin_Driver_Marlin pDriver_Marlin, bool * pValue);

/**
* Returns if the printer is homed
*
* @param[in] pDriver_Marlin - Driver_Marlin instance.
* @param[out] pValue - True if printer is homed.
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinDriver_Marlin_IsHomedPtr) (LibMCDriver_Marlin_Driver_Marlin pDriver_Marlin, bool * pValue);

/**
* Moves to/by a certain position by a linear move. Takes the relative/absolute mode into account. Fails if it cannot execute a movement.
*
* @param[in] pDriver_Marlin - Driver_Marlin instance.
* @param[in] dX - X Value in mm
* @param[in] dY - Y Value in mm
* @param[in] dSpeed - Movement speed in mm/s
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinDriver_Marlin_MoveToXYPtr) (LibMCDriver_Marlin_Driver_Marlin pDriver_Marlin, LibMCDriver_Marlin_double dX, LibMCDriver_Marlin_double dY, LibMCDriver_Marlin_double dSpeed);

/**
* Moves to/by a certain position by a fast move. Takes the relative/absolute mode into account. Fails if it cannot execute a movement.
*
* @param[in] pDriver_Marlin - Driver_Marlin instance.
* @param[in] dX - X Value in mm
* @param[in] dY - Y Value in mm
* @param[in] dSpeed - Movement speed in mm/s
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinDriver_Marlin_MoveFastToXYPtr) (LibMCDriver_Marlin_Driver_Marlin pDriver_Marlin, LibMCDriver_Marlin_double dX, LibMCDriver_Marlin_double dY, LibMCDriver_Marlin_double dSpeed);

/**
* Moves to/by a certain position by a linear move. Takes the relative/absolute mode into account. Fails if it cannot execute a movement.
*
* @param[in] pDriver_Marlin - Driver_Marlin instance.
* @param[in] dZ - Z Value in mm
* @param[in] dSpeed - Movement speed in mm/s
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinDriver_Marlin_MoveToZPtr) (LibMCDriver_Marlin_Driver_Marlin pDriver_Marlin, LibMCDriver_Marlin_double dZ, LibMCDriver_Marlin_double dSpeed);

/**
* Moves to/by a certain position by a fast move. Takes the relative/absolute mode into account. Fails if it cannot execute a movement.
*
* @param[in] pDriver_Marlin - Driver_Marlin instance.
* @param[in] dZ - Z Value in mm
* @param[in] dSpeed - Movement speed in mm/s
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinDriver_Marlin_MoveFastToZPtr) (LibMCDriver_Marlin_Driver_Marlin pDriver_Marlin, LibMCDriver_Marlin_double dZ, LibMCDriver_Marlin_double dSpeed);

/**
* Start Homing of printer.
*
* @param[in] pDriver_Marlin - Driver_Marlin instance.
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinDriver_Marlin_StartHomingPtr) (LibMCDriver_Marlin_Driver_Marlin pDriver_Marlin);

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
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinGetVersionPtr) (LibMCDriver_Marlin_uint32 * pMajor, LibMCDriver_Marlin_uint32 * pMinor, LibMCDriver_Marlin_uint32 * pMicro);

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
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinGetLastErrorPtr) (LibMCDriver_Marlin_Base pInstance, const LibMCDriver_Marlin_uint32 nErrorMessageBufferSize, LibMCDriver_Marlin_uint32* pErrorMessageNeededChars, char * pErrorMessageBuffer, bool * pHasError);

/**
* Releases shared ownership of an Instance
*
* @param[in] pInstance - Instance Handle
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinReleaseInstancePtr) (LibMCDriver_Marlin_Base pInstance);

/**
* Acquires shared ownership of an Instance
*
* @param[in] pInstance - Instance Handle
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinAcquireInstancePtr) (LibMCDriver_Marlin_Base pInstance);

/**
* Injects an imported component for usage within this component
*
* @param[in] pNameSpace - NameSpace of the injected component
* @param[in] pSymbolAddressMethod - Address of the SymbolAddressMethod of the injected component
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinInjectComponentPtr) (const char * pNameSpace, LibMCDriver_Marlin_pvoid pSymbolAddressMethod);

/**
* Returns the address of the SymbolLookupMethod
*
* @param[out] pSymbolLookupMethod - Address of the SymbolAddressMethod
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinGetSymbolLookupMethodPtr) (LibMCDriver_Marlin_pvoid * pSymbolLookupMethod);

/**
* Creates a driver instance with a specific name.
*
* @param[in] pName - Name of driver to be created.
* @param[in] pType - Type of driver to be created.
* @param[in] pDriverEnvironment - Environment of this driver.
* @param[out] pInstance - New Driver instance
* @return error code or 0 (success)
*/
typedef LibMCDriver_MarlinResult (*PLibMCDriver_MarlinCreateDriverPtr) (const char * pName, const char * pType, LibMCDriverEnv_DriverEnvironment pDriverEnvironment, LibMCDriver_Marlin_Driver * pInstance);

/*************************************************************************************************************************
 Function Table Structure
**************************************************************************************************************************/

typedef struct {
	void * m_LibraryHandle;
	PLibMCDriver_MarlinDriver_GetNamePtr m_Driver_GetName;
	PLibMCDriver_MarlinDriver_GetTypePtr m_Driver_GetType;
	PLibMCDriver_MarlinDriver_GetVersionPtr m_Driver_GetVersion;
	PLibMCDriver_MarlinDriver_GetHeaderInformationPtr m_Driver_GetHeaderInformation;
	PLibMCDriver_MarlinDriver_Marlin_ConnectPtr m_Driver_Marlin_Connect;
	PLibMCDriver_MarlinDriver_Marlin_DisconnectPtr m_Driver_Marlin_Disconnect;
	PLibMCDriver_MarlinDriver_Marlin_SetAbsolutePositioningPtr m_Driver_Marlin_SetAbsolutePositioning;
	PLibMCDriver_MarlinDriver_Marlin_SetHeatedBedTargetTemperaturePtr m_Driver_Marlin_SetHeatedBedTargetTemperature;
	PLibMCDriver_MarlinDriver_Marlin_SetExtruderTargetTemperaturePtr m_Driver_Marlin_SetExtruderTargetTemperature;
	PLibMCDriver_MarlinDriver_Marlin_SetPidParametersPtr m_Driver_Marlin_SetPidParameters;
	PLibMCDriver_MarlinDriver_Marlin_UpdateStatePtr m_Driver_Marlin_UpdateState;
	PLibMCDriver_MarlinDriver_Marlin_GetCurrentPositionPtr m_Driver_Marlin_GetCurrentPosition;
	PLibMCDriver_MarlinDriver_Marlin_GetTargetPositionPtr m_Driver_Marlin_GetTargetPosition;
	PLibMCDriver_MarlinDriver_Marlin_GetExtruderPositionPtr m_Driver_Marlin_GetExtruderPosition;
	PLibMCDriver_MarlinDriver_Marlin_GetHeatedBedTemperaturePtr m_Driver_Marlin_GetHeatedBedTemperature;
	PLibMCDriver_MarlinDriver_Marlin_GetExtruderTemperaturePtr m_Driver_Marlin_GetExtruderTemperature;
	PLibMCDriver_MarlinDriver_Marlin_GetPidParametersPtr m_Driver_Marlin_GetPidParameters;
	PLibMCDriver_MarlinDriver_Marlin_CanExecuteMovementPtr m_Driver_Marlin_CanExecuteMovement;
	PLibMCDriver_MarlinDriver_Marlin_IsMovingPtr m_Driver_Marlin_IsMoving;
	PLibMCDriver_MarlinDriver_Marlin_IsHomedPtr m_Driver_Marlin_IsHomed;
	PLibMCDriver_MarlinDriver_Marlin_MoveToXYPtr m_Driver_Marlin_MoveToXY;
	PLibMCDriver_MarlinDriver_Marlin_MoveFastToXYPtr m_Driver_Marlin_MoveFastToXY;
	PLibMCDriver_MarlinDriver_Marlin_MoveToZPtr m_Driver_Marlin_MoveToZ;
	PLibMCDriver_MarlinDriver_Marlin_MoveFastToZPtr m_Driver_Marlin_MoveFastToZ;
	PLibMCDriver_MarlinDriver_Marlin_StartHomingPtr m_Driver_Marlin_StartHoming;
	PLibMCDriver_MarlinGetVersionPtr m_GetVersion;
	PLibMCDriver_MarlinGetLastErrorPtr m_GetLastError;
	PLibMCDriver_MarlinReleaseInstancePtr m_ReleaseInstance;
	PLibMCDriver_MarlinAcquireInstancePtr m_AcquireInstance;
	PLibMCDriver_MarlinInjectComponentPtr m_InjectComponent;
	PLibMCDriver_MarlinGetSymbolLookupMethodPtr m_GetSymbolLookupMethod;
	PLibMCDriver_MarlinCreateDriverPtr m_CreateDriver;
} sLibMCDriver_MarlinDynamicWrapperTable;

#endif // __LIBMCDRIVER_MARLIN_DYNAMICHEADER_CPPTYPES

