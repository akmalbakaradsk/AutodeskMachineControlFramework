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

Abstract: This is an autogenerated C++ header file in order to allow easy
development of MC Driver Duet. The implementer of MC Driver Duet needs to
derive concrete classes from the abstract classes in this header.

Interface version: 1.0.0

*/


#ifndef __LIBMCDRIVER_DUET_CPPINTERFACES
#define __LIBMCDRIVER_DUET_CPPINTERFACES

#include <string>
#include <memory>

#include "libmcdriver_duet_types.hpp"


#include "libmcenv_dynamic.hpp"

namespace LibMCDriver_Duet {
namespace Impl {

/**
 Forward declarations of class interfaces
*/
class IBase;
class IDriver;
class IDriver_Duet;



/*************************************************************************************************************************
 Parameter Cache definitions
**************************************************************************************************************************/

class ParameterCache {
	public:
		virtual ~ParameterCache() {}
};

template <class T1> class ParameterCache_1 : public ParameterCache {
	private:
		T1 m_param1;
	public:
		ParameterCache_1 (const T1 & param1)
			: m_param1 (param1)
		{
		}

		void retrieveData (T1 & param1)
		{
			param1 = m_param1;
		}
};

template <class T1, class T2> class ParameterCache_2 : public ParameterCache {
	private:
		T1 m_param1;
		T2 m_param2;
	public:
		ParameterCache_2 (const T1 & param1, const T2 & param2)
			: m_param1 (param1), m_param2 (param2)
		{
		}

		void retrieveData (T1 & param1, T2 & param2)
		{
			param1 = m_param1;
			param2 = m_param2;
		}
};

template <class T1, class T2, class T3> class ParameterCache_3 : public ParameterCache {
	private:
		T1 m_param1;
		T2 m_param2;
		T3 m_param3;
	public:
		ParameterCache_3 (const T1 & param1, const T2 & param2, const T3 & param3)
			: m_param1 (param1), m_param2 (param2), m_param3 (param3)
		{
		}

		void retrieveData (T1 & param1, T2 & param2, T3 & param3)
		{
			param1 = m_param1;
			param2 = m_param2;
			param3 = m_param3;
		}
};

template <class T1, class T2, class T3, class T4> class ParameterCache_4 : public ParameterCache {
	private:
		T1 m_param1;
		T2 m_param2;
		T3 m_param3;
		T4 m_param4;
	public:
		ParameterCache_4 (const T1 & param1, const T2 & param2, const T3 & param3, const T4 & param4)
			: m_param1 (param1), m_param2 (param2), m_param3 (param3), m_param4 (param4)
		{
		}

		void retrieveData (T1 & param1, T2 & param2, T3 & param3, T4 & param4)
		{
			param1 = m_param1;
			param2 = m_param2;
			param3 = m_param3;
			param4 = m_param4;
		}
};


/*************************************************************************************************************************
 Class interface for Base 
**************************************************************************************************************************/

class IBase {
private:
	std::unique_ptr<ParameterCache> m_ParameterCache;
public:
	/**
	* IBase::~IBase - virtual destructor of IBase
	*/
	virtual ~IBase() {};

	/**
	* IBase::ReleaseBaseClassInterface - Releases ownership of a base class interface. Deletes the reference, if necessary.
	* @param[in] pIBase - The base class instance to release
	*/
	static void ReleaseBaseClassInterface(IBase* pIBase)
	{
		if (pIBase) {
			pIBase->DecRefCount();
		}
	};

	/**
	* IBase::AcquireBaseClassInterface - Acquires shared ownership of a base class interface.
	* @param[in] pIBase - The base class instance to acquire
	*/
	static void AcquireBaseClassInterface(IBase* pIBase)
	{
		if (pIBase) {
			pIBase->IncRefCount();
		}
	};


	/**
	* IBase::GetLastErrorMessage - Returns the last error registered of this class instance
	* @param[out] sErrorMessage - Message of the last error registered
	* @return Has an error been registered already
	*/
	virtual bool GetLastErrorMessage(std::string & sErrorMessage) = 0;

	/**
	* IBase::ClearErrorMessages - Clears all registered messages of this class instance
	*/
	virtual void ClearErrorMessages() = 0;

	/**
	* IBase::RegisterErrorMessage - Registers an error message with this class instance
	* @param[in] sErrorMessage - Error message to register
	*/
	virtual void RegisterErrorMessage(const std::string & sErrorMessage) = 0;

	/**
	* IBase::IncRefCount - Increases the reference count of a class instance
	*/
	virtual void IncRefCount() = 0;

	/**
	* IBase::DecRefCount - Decreases the reference count of a class instance and free releases it, if the last reference has been removed
	* @return Has the object been released
	*/
	virtual bool DecRefCount() = 0;

	/**
	* IBase::_setCache - set parameter cache of object
	*/
	void _setCache(ParameterCache * pCache)
	{
		m_ParameterCache.reset(pCache);
	}

	/**
	* IBase::_getCache - returns parameter cache of object
	*/
	ParameterCache* _getCache()
	{
		return m_ParameterCache.get();
	}

};


/**
 Definition of a shared pointer class for IBase
*/
template<class T>
class IBaseSharedPtr : public std::shared_ptr<T>
{
public:
	explicit IBaseSharedPtr(T* t = nullptr)
		: std::shared_ptr<T>(t, IBase::ReleaseBaseClassInterface)
	{
		t->IncRefCount();
	}

	// Reset function, as it also needs to properly set the deleter.
	void reset(T* t = nullptr)
	{
		std::shared_ptr<T>::reset(t, IBase::ReleaseBaseClassInterface);
	}

	// Get-function that increases the Base class's reference count
	T* getCoOwningPtr()
	{
		T* t = this->get();
		t->IncRefCount();
		return t;
	}
};


typedef IBaseSharedPtr<IBase> PIBase;


/*************************************************************************************************************************
 Class interface for Driver 
**************************************************************************************************************************/

class IDriver : public virtual IBase {
public:
	/**
	* IDriver::GetName - returns the name identifier of the driver
	* @return Name of the driver.
	*/
	virtual std::string GetName() = 0;

	/**
	* IDriver::GetType - returns the type identifier of the driver
	* @return Type of the driver.
	*/
	virtual std::string GetType() = 0;

	/**
	* IDriver::GetVersion - returns the version identifiers of the driver
	* @param[out] nMajor - Major version.
	* @param[out] nMinor - Minor version.
	* @param[out] nMicro - Micro version.
	* @param[out] sBuild - Build identifier.
	*/
	virtual void GetVersion(LibMCDriver_Duet_uint32 & nMajor, LibMCDriver_Duet_uint32 & nMinor, LibMCDriver_Duet_uint32 & nMicro, std::string & sBuild) = 0;

	/**
	* IDriver::GetHeaderInformation - returns the header information
	* @param[out] sNameSpace - NameSpace of the driver.
	* @param[out] sBaseName - BaseName of the driver.
	*/
	virtual void GetHeaderInformation(std::string & sNameSpace, std::string & sBaseName) = 0;

	/**
	* IDriver::QueryParameters - Stores the driver parameters in the driver environment.
	*/
	virtual void QueryParameters() = 0;

};

typedef IBaseSharedPtr<IDriver> PIDriver;


/*************************************************************************************************************************
 Class interface for Driver_Duet 
**************************************************************************************************************************/

class IDriver_Duet : public virtual IDriver {
public:
	/**
	* IDriver_Duet::Connect - Creates and initializes a new Duet Connector.
	* @param[in] sCOMPort - Device Port to connect to
	* @param[in] nBaudrate - Baudrate to use
	* @param[in] dStatusUpdateInterval - Timer interval [ms] for updating status
	* @param[in] nConnectTimeout - Timeout [ms] for connecting printer
	*/
	virtual void Connect(const std::string & sCOMPort, const LibMCDriver_Duet_uint32 nBaudrate, const LibMCDriver_Duet_double dStatusUpdateInterval, const LibMCDriver_Duet_uint32 nConnectTimeout) = 0;

	/**
	* IDriver_Duet::Disconnect - Disconnects from the Marlin board.
	*/
	virtual void Disconnect() = 0;

	/**
	* IDriver_Duet::SetAbsolutePositioning - Sets the positioning to absolute values (default true).
	* @param[in] bAbsolute - If true, sets positioning to absolute, if false to relative
	*/
	virtual void SetAbsolutePositioning(const bool bAbsolute) = 0;

	/**
	* IDriver_Duet::UpdatePositionState - Polls a new state from the printer.
	*/
	virtual void UpdatePositionState() = 0;

	/**
	* IDriver_Duet::GetCurrentPosition - Returns the current axis position.
	* @param[out] dX - X Value in mm
	* @param[out] dY - Y Value in mm
	* @param[out] dZ - Z Value in mm
	*/
	virtual void GetCurrentPosition(LibMCDriver_Duet_double & dX, LibMCDriver_Duet_double & dY, LibMCDriver_Duet_double & dZ) = 0;

	/**
	* IDriver_Duet::GetTargetPosition - Returns the current target position.
	* @param[out] dX - X Value in mm
	* @param[out] dY - Y Value in mm
	* @param[out] dZ - Z Value in mm
	*/
	virtual void GetTargetPosition(LibMCDriver_Duet_double & dX, LibMCDriver_Duet_double & dY, LibMCDriver_Duet_double & dZ) = 0;

	/**
	* IDriver_Duet::CanExecuteMovement - Returns if the movement buffer can receive another movement command..
	* @return True if a MoveTo or MoveFastTo command can be triggered.
	*/
	virtual bool CanExecuteMovement() = 0;

	/**
	* IDriver_Duet::IsMoving - Returns if the extruder is moving..
	* @return Extruder is moving
	*/
	virtual bool IsMoving() = 0;

	/**
	* IDriver_Duet::IsHomed - Returns if the printer is homed
	* @return True if printer is homed.
	*/
	virtual bool IsHomed() = 0;

	/**
	* IDriver_Duet::IsConnected - Returns if the printer is coneccted
	* @return True if printer is connected.
	*/
	virtual bool IsConnected() = 0;

	/**
	* IDriver_Duet::MoveToXY - Moves to/by a certain position by a linear move. Takes the relative/absolute mode into account. Fails if it cannot execute a movement.
	* @param[in] dX - X Value in mm
	* @param[in] dY - Y Value in mm
	* @param[in] dE - E Value in mm
	* @param[in] dSpeed - Movement speed in mm/s
	*/
	virtual void MoveToXY(const LibMCDriver_Duet_double dX, const LibMCDriver_Duet_double dY, const LibMCDriver_Duet_double dE, const LibMCDriver_Duet_double dSpeed) = 0;

	/**
	* IDriver_Duet::MoveFastToXY - Moves to/by a certain position by a fast move. Takes the relative/absolute mode into account. Fails if it cannot execute a movement.
	* @param[in] dX - X Value in mm
	* @param[in] dY - Y Value in mm
	* @param[in] dSpeed - Movement speed in mm/s
	*/
	virtual void MoveFastToXY(const LibMCDriver_Duet_double dX, const LibMCDriver_Duet_double dY, const LibMCDriver_Duet_double dSpeed) = 0;

	/**
	* IDriver_Duet::MoveToZ - Moves to/by a certain position by a linear move. Takes the relative/absolute mode into account. Fails if it cannot execute a movement.
	* @param[in] dZ - Z Value in mm
	* @param[in] dSpeed - Movement speed in mm/s
	*/
	virtual void MoveToZ(const LibMCDriver_Duet_double dZ, const LibMCDriver_Duet_double dSpeed) = 0;

	/**
	* IDriver_Duet::MoveFastToZ - Moves to/by a certain position by a fast move. Takes the relative/absolute mode into account. Fails if it cannot execute a movement.
	* @param[in] dZ - Z Value in mm
	* @param[in] dSpeed - Movement speed in mm/s
	*/
	virtual void MoveFastToZ(const LibMCDriver_Duet_double dZ, const LibMCDriver_Duet_double dSpeed) = 0;

	/**
	* IDriver_Duet::StartHoming - Start Homing of printer.
	*/
	virtual void StartHoming() = 0;

	/**
	* IDriver_Duet::EmergencyStop - Used for emergency stopping. Shuts down the machine, turns off all the steppers and heaters, and if possible, turns off the power supply.
	*/
	virtual void EmergencyStop() = 0;

	/**
	* IDriver_Duet::SetAxisPosition - Set the current position of given axis to the specified value.
	* @param[in] sAxis - Axis whose value is to be set.
	* @param[in] dValue - New value for given Axis.
	*/
	virtual void SetAxisPosition(const std::string & sAxis, const LibMCDriver_Duet_double dValue) = 0;

	/**
	* IDriver_Duet::PowerOff - Turn off the high-voltage power supply.
	*/
	virtual void PowerOff() = 0;

};

typedef IBaseSharedPtr<IDriver_Duet> PIDriver_Duet;


/*************************************************************************************************************************
 Global functions declarations
**************************************************************************************************************************/
class CWrapper {
public:
	// Injected Components
	static LibMCEnv::PWrapper sPLibMCEnvWrapper;

	/**
	* Ilibmcdriver_duet::GetVersion - retrieves the binary version of this library.
	* @param[out] nMajor - returns the major version of this library
	* @param[out] nMinor - returns the minor version of this library
	* @param[out] nMicro - returns the micro version of this library
	*/
	static void GetVersion(LibMCDriver_Duet_uint32 & nMajor, LibMCDriver_Duet_uint32 & nMinor, LibMCDriver_Duet_uint32 & nMicro);

	/**
	* Ilibmcdriver_duet::GetLastError - Returns the last error recorded on this object
	* @param[in] pInstance - Instance Handle
	* @param[out] sErrorMessage - Message of the last error
	* @return Is there a last error to query
	*/
	static bool GetLastError(IBase* pInstance, std::string & sErrorMessage);

	/**
	* Ilibmcdriver_duet::ReleaseInstance - Releases shared ownership of an Instance
	* @param[in] pInstance - Instance Handle
	*/
	static void ReleaseInstance(IBase* pInstance);

	/**
	* Ilibmcdriver_duet::AcquireInstance - Acquires shared ownership of an Instance
	* @param[in] pInstance - Instance Handle
	*/
	static void AcquireInstance(IBase* pInstance);

	/**
	* Ilibmcdriver_duet::CreateDriver - Creates a driver instance with a specific name.
	* @param[in] sName - Name of driver to be created.
	* @param[in] sType - Type of driver to be created.
	* @param[in] pDriverEnvironment - Environment of this driver.
	* @return New Driver instance
	*/
	static IDriver * CreateDriver(const std::string & sName, const std::string & sType, LibMCEnv::PDriverEnvironment pDriverEnvironment);

};

LibMCDriver_DuetResult LibMCDriver_Duet_GetProcAddress (const char * pProcName, void ** ppProcAddress);

} // namespace Impl
} // namespace LibMCDriver_Duet

#endif // __LIBMCDRIVER_DUET_CPPINTERFACES