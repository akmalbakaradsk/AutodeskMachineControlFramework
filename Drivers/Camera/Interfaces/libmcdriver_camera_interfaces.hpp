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
development of MC Driver Camera. The implementer of MC Driver Camera needs to
derive concrete classes from the abstract classes in this header.

Interface version: 1.0.0

*/


#ifndef __LIBMCDRIVER_CAMERA_CPPINTERFACES
#define __LIBMCDRIVER_CAMERA_CPPINTERFACES

#include <string>
#include <memory>

#include "libmcdriver_camera_types.hpp"


#include "libmcdriverenv_dynamic.hpp"

namespace LibMCDriver_Camera {
namespace Impl {

/**
 Forward declarations of class interfaces
*/
class IBase;
class IDriver;
class IIterator;
class IPNGImage;
class IDriver_Camera;
class IRaspiCameraDevice;
class IRaspiCameraDeviceIterator;
class IDriver_RaspiCamera;



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
	virtual void GetVersion(LibMCDriver_Camera_uint32 & nMajor, LibMCDriver_Camera_uint32 & nMinor, LibMCDriver_Camera_uint32 & nMicro, std::string & sBuild) = 0;

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
 Class interface for Iterator 
**************************************************************************************************************************/

class IIterator : public virtual IBase {
public:
	/**
	* IIterator::MoveNext - Iterates to the next resource in the list.
	* @return Iterates to the next resource in the list.
	*/
	virtual bool MoveNext() = 0;

	/**
	* IIterator::MovePrevious - Iterates to the previous resource in the list.
	* @return Iterates to the previous resource in the list.
	*/
	virtual bool MovePrevious() = 0;

	/**
	* IIterator::GetCurrent - Returns the resource the iterator points at.
	* @return returns the resource instance.
	*/
	virtual IBase * GetCurrent() = 0;

	/**
	* IIterator::Clone - Creates a new resource iterator with the same resource list.
	* @return returns the cloned Iterator instance
	*/
	virtual IIterator * Clone() = 0;

	/**
	* IIterator::Count - Returns the number of resources the iterator captures.
	* @return returns the number of resources the iterator captures.
	*/
	virtual LibMCDriver_Camera_uint64 Count() = 0;

};

typedef IBaseSharedPtr<IIterator> PIIterator;


/*************************************************************************************************************************
 Class interface for PNGImage 
**************************************************************************************************************************/

class IPNGImage : public virtual IBase {
public:
	/**
	* IPNGImage::GetWidth - Returns width of the image.
	* @return width of the image in pixels.
	*/
	virtual LibMCDriver_Camera_uint64 GetWidth() = 0;

	/**
	* IPNGImage::GetHeight - Returns height of the image.
	* @return height of the image in pixels.
	*/
	virtual LibMCDriver_Camera_uint64 GetHeight() = 0;

	/**
	* IPNGImage::GetPixelFormat - Returns pixel format of the image.
	* @return Pixel format of the image.
	*/
	virtual LibMCDriver_Camera::eImagePixelFormat GetPixelFormat() = 0;

	/**
	* IPNGImage::GetRawData - Returns raw data of the image.
	* @param[in] nPNGDataBufferSize - Number of elements in buffer
	* @param[out] pPNGDataNeededCount - will be filled with the count of the written structs, or needed buffer size.
	* @param[out] pPNGDataBuffer - uint8 buffer of Binary data of PNG image captured.
	*/
	virtual void GetRawData(LibMCDriver_Camera_uint64 nPNGDataBufferSize, LibMCDriver_Camera_uint64* pPNGDataNeededCount, LibMCDriver_Camera_uint8 * pPNGDataBuffer) = 0;

	/**
	* IPNGImage::SaveToFile - Saves PNG Image on Disk.
	* @return Filename to save PNG to.
	*/
	virtual std::string SaveToFile() = 0;

};

typedef IBaseSharedPtr<IPNGImage> PIPNGImage;


/*************************************************************************************************************************
 Class interface for Driver_Camera 
**************************************************************************************************************************/

class IDriver_Camera : public virtual IDriver {
public:
	/**
	* IDriver_Camera::CapturePNGImage - Captures an image from the camera and returns a PNG image.
	* @return Instance of the PNG Image.
	*/
	virtual IPNGImage * CapturePNGImage() = 0;

};

typedef IBaseSharedPtr<IDriver_Camera> PIDriver_Camera;


/*************************************************************************************************************************
 Class interface for RaspiCameraDevice 
**************************************************************************************************************************/

class IRaspiCameraDevice : public virtual IBase {
public:
	/**
	* IRaspiCameraDevice::GetDeviceString - Returns path to the camera device.
	* @return Path to camera device.
	*/
	virtual std::string GetDeviceString() = 0;

};

typedef IBaseSharedPtr<IRaspiCameraDevice> PIRaspiCameraDevice;


/*************************************************************************************************************************
 Class interface for RaspiCameraDeviceIterator 
**************************************************************************************************************************/

class IRaspiCameraDeviceIterator : public virtual IIterator {
public:
	/**
	* IRaspiCameraDeviceIterator::GetCameraDevice - Returns the camera device the iterator points at.
	* @return returns the camera device instance.
	*/
	virtual IRaspiCameraDevice * GetCameraDevice() = 0;

};

typedef IBaseSharedPtr<IRaspiCameraDeviceIterator> PIRaspiCameraDeviceIterator;


/*************************************************************************************************************************
 Class interface for Driver_RaspiCamera 
**************************************************************************************************************************/

class IDriver_RaspiCamera : public virtual IDriver_Camera {
public:
	/**
	* IDriver_RaspiCamera::QueryDevices - Looks for cameras on the Raspberry PI.
	* @return Iterator Instance through all found devices.
	*/
	virtual IRaspiCameraDeviceIterator * QueryDevices() = 0;

	/**
	* IDriver_RaspiCamera::Initialize - Initialize the camera on the Raspberry PI.
	* @param[in] sDeviceString - Path to camera device.
	* @param[in] nWidth - Width of Image in Pixels.
	* @param[in] nHeight - Height of Image in Pixels.
	* @param[in] ePixelformat - Pixel format of the image.
	*/
	virtual void Initialize(const std::string & sDeviceString, const LibMCDriver_Camera_uint32 nWidth, const LibMCDriver_Camera_uint32 nHeight, const LibMCDriver_Camera::eImagePixelFormat ePixelformat) = 0;

};

typedef IBaseSharedPtr<IDriver_RaspiCamera> PIDriver_RaspiCamera;


/*************************************************************************************************************************
 Global functions declarations
**************************************************************************************************************************/
class CWrapper {
public:
	// Injected Components
	static LibMCDriverEnv::PWrapper sPLibMCDriverEnvWrapper;

	/**
	* Ilibmcdriver_camera::GetVersion - retrieves the binary version of this library.
	* @param[out] nMajor - returns the major version of this library
	* @param[out] nMinor - returns the minor version of this library
	* @param[out] nMicro - returns the micro version of this library
	*/
	static void GetVersion(LibMCDriver_Camera_uint32 & nMajor, LibMCDriver_Camera_uint32 & nMinor, LibMCDriver_Camera_uint32 & nMicro);

	/**
	* Ilibmcdriver_camera::GetLastError - Returns the last error recorded on this object
	* @param[in] pInstance - Instance Handle
	* @param[out] sErrorMessage - Message of the last error
	* @return Is there a last error to query
	*/
	static bool GetLastError(IBase* pInstance, std::string & sErrorMessage);

	/**
	* Ilibmcdriver_camera::ReleaseInstance - Releases shared ownership of an Instance
	* @param[in] pInstance - Instance Handle
	*/
	static void ReleaseInstance(IBase* pInstance);

	/**
	* Ilibmcdriver_camera::AcquireInstance - Acquires shared ownership of an Instance
	* @param[in] pInstance - Instance Handle
	*/
	static void AcquireInstance(IBase* pInstance);

	/**
	* Ilibmcdriver_camera::CreateDriver - Creates a driver instance with a specific name.
	* @param[in] sName - Name of driver to be created.
	* @param[in] sType - Type of driver to be created.
	* @param[in] pDriverEnvironment - Environment of this driver.
	* @return New Driver instance
	*/
	static IDriver * CreateDriver(const std::string & sName, const std::string & sType, LibMCDriverEnv::PDriverEnvironment pDriverEnvironment);

};

LibMCDriver_CameraResult LibMCDriver_Camera_GetProcAddress (const char * pProcName, void ** ppProcAddress);

} // namespace Impl
} // namespace LibMCDriver_Camera

#endif // __LIBMCDRIVER_CAMERA_CPPINTERFACES
