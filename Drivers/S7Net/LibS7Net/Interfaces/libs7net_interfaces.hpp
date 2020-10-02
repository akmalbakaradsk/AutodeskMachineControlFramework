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
development of S7Net Library Wrapper. The implementer of S7Net Library Wrapper needs to
derive concrete classes from the abstract classes in this header.

Interface version: 1.2.0

*/


#ifndef __LIBS7NET_CPPINTERFACES
#define __LIBS7NET_CPPINTERFACES

#include <string>
#include <memory>

#include "libs7net_types.hpp"



namespace LibS7Net {
namespace Impl {

/**
 Forward declarations of class interfaces
*/
class IBase;
class IPLCReadData;
class IPLC;



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
 Class interface for PLCReadData 
**************************************************************************************************************************/

class IPLCReadData : public virtual IBase {
public:
	/**
	* IPLCReadData::GetData - Returns the binary data.
	* @param[in] nDataBufferSize - Number of elements in buffer
	* @param[out] pDataNeededCount - will be filled with the count of the written structs, or needed buffer size.
	* @param[out] pDataBuffer - uint8 buffer of Binary data.
	*/
	virtual void GetData(LibS7Net_uint64 nDataBufferSize, LibS7Net_uint64* pDataNeededCount, LibS7Net_uint8 * pDataBuffer) = 0;

};

typedef IBaseSharedPtr<IPLCReadData> PIPLCReadData;


/*************************************************************************************************************************
 Class interface for PLC 
**************************************************************************************************************************/

class IPLC : public virtual IBase {
public:
	/**
	* IPLC::Connect - Connects to a PLC Instance
	* @param[in] eCPUType - CPU type to connect to.
	* @param[in] sIP - IP address to connect to.
	* @param[in] nRack - Rack to connect to.
	* @param[in] nSlot - Slot to connect to.
	*/
	virtual void Connect(const LibS7Net::eCPUType eCPUType, const std::string & sIP, const LibS7Net_uint32 nRack, const LibS7Net_uint32 nSlot) = 0;

	/**
	* IPLC::IsConnected - Checks if the socket is connected and polls the other peer (the plc) to see if it is connected.
	* @return Flag if the socket is connected.
	*/
	virtual bool IsConnected() = 0;

	/**
	* IPLC::IsAvailable - Returns true if a connection to the plc can be established.
	* @return Flag if the socket is connected.
	*/
	virtual bool IsAvailable() = 0;

	/**
	* IPLC::GetSlot - Returns slot of the CPU of the plc.
	* @return Slot of the CPU of the plc.
	*/
	virtual LibS7Net_uint32 GetSlot() = 0;

	/**
	* IPLC::GetRack - Returns rack of the plc.
	* @return Rack of the plc.
	*/
	virtual LibS7Net_uint32 GetRack() = 0;

	/**
	* IPLC::GetCPUType - Returns Cpu type of the plc.
	* @return Cpu type of the plc.
	*/
	virtual LibS7Net::eCPUType GetCPUType() = 0;

	/**
	* IPLC::GetIPAddress - Returns Ip address of the plc.
	* @return Ip address of the plc.
	*/
	virtual std::string GetIPAddress() = 0;

	/**
	* IPLC::WriteBytes - Writes bytes into a PLC DB.
	* @param[in] nDB - ID of DB.
	* @param[in] nOffset - Address to write into.
	* @param[in] nBytesBufferSize - Number of elements in buffer
	* @param[in] pBytesBuffer - ByteArray to write.
	*/
	virtual void WriteBytes(const LibS7Net_uint32 nDB, const LibS7Net_uint32 nOffset, const LibS7Net_uint64 nBytesBufferSize, const LibS7Net_uint8 * pBytesBuffer) = 0;

	/**
	* IPLC::ReadBytes - Read bytes from a PLC DB.
	* @param[in] nDB - ID of DB.
	* @param[in] nOffset - Address to write into.
	* @param[in] nCount - Number of bytes to read.
	* @return Read Data Instance.
	*/
	virtual IPLCReadData * ReadBytes(const LibS7Net_uint32 nDB, const LibS7Net_uint32 nOffset, const LibS7Net_uint32 nCount) = 0;

};

typedef IBaseSharedPtr<IPLC> PIPLC;


/*************************************************************************************************************************
 Global functions declarations
**************************************************************************************************************************/
class CWrapper {
public:
	/**
	* Ilibs7net::GetVersion - retrieves the binary version of this library.
	* @param[out] nMajor - returns the major version of this library
	* @param[out] nMinor - returns the minor version of this library
	* @param[out] nMicro - returns the micro version of this library
	*/
	static void GetVersion(LibS7Net_uint32 & nMajor, LibS7Net_uint32 & nMinor, LibS7Net_uint32 & nMicro);

	/**
	* Ilibs7net::GetLastError - Returns the last error recorded on this object
	* @param[in] pInstance - Instance Handle
	* @param[out] sErrorMessage - Message of the last error
	* @return Is there a last error to query
	*/
	static bool GetLastError(IBase* pInstance, std::string & sErrorMessage);

	/**
	* Ilibs7net::AcquireInstance - Acquire shared ownership of an Instance
	* @param[in] pInstance - Instance Handle
	*/
	static void AcquireInstance(IBase* pInstance);

	/**
	* Ilibs7net::ReleaseInstance - Releases shared ownership of an Instance
	* @param[in] pInstance - Instance Handle
	*/
	static void ReleaseInstance(IBase* pInstance);

	/**
	* Ilibs7net::CreatePLC - Returns a PLC instance
	* @param[in] sCOMHost - Path to COM Host
	* @return PLC Instance
	*/
	static IPLC * CreatePLC(const std::string & sCOMHost);

};

LibS7NetResult LibS7Net_GetProcAddress (const char * pProcName, void ** ppProcAddress);

} // namespace Impl
} // namespace LibS7Net

#endif // __LIBS7NET_CPPINTERFACES
