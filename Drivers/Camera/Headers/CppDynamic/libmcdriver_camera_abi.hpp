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
 use of MC Driver Camera

Interface version: 1.0.0

*/

#ifndef __LIBMCDRIVER_CAMERA_HEADER_CPP
#define __LIBMCDRIVER_CAMERA_HEADER_CPP

#ifdef __LIBMCDRIVER_CAMERA_EXPORTS
#ifdef _WIN32
#define LIBMCDRIVER_CAMERA_DECLSPEC __declspec (dllexport)
#else // _WIN32
#define LIBMCDRIVER_CAMERA_DECLSPEC __attribute__((visibility("default")))
#endif // _WIN32
#else // __LIBMCDRIVER_CAMERA_EXPORTS
#define LIBMCDRIVER_CAMERA_DECLSPEC
#endif // __LIBMCDRIVER_CAMERA_EXPORTS

#include "libmcdriver_camera_types.hpp"

#include "libmcdriverenv_dynamic.hpp"

#ifdef __cplusplus
extern "C" {
#endif

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
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_driver_getname(LibMCDriver_Camera_Driver pDriver, const LibMCDriver_Camera_uint32 nNameBufferSize, LibMCDriver_Camera_uint32* pNameNeededChars, char * pNameBuffer);

/**
* returns the type identifier of the driver
*
* @param[in] pDriver - Driver instance.
* @param[in] nTypeBufferSize - size of the buffer (including trailing 0)
* @param[out] pTypeNeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pTypeBuffer -  buffer of Type of the driver., may be NULL
* @return error code or 0 (success)
*/
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_driver_gettype(LibMCDriver_Camera_Driver pDriver, const LibMCDriver_Camera_uint32 nTypeBufferSize, LibMCDriver_Camera_uint32* pTypeNeededChars, char * pTypeBuffer);

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
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_driver_getversion(LibMCDriver_Camera_Driver pDriver, LibMCDriver_Camera_uint32 * pMajor, LibMCDriver_Camera_uint32 * pMinor, LibMCDriver_Camera_uint32 * pMicro, const LibMCDriver_Camera_uint32 nBuildBufferSize, LibMCDriver_Camera_uint32* pBuildNeededChars, char * pBuildBuffer);

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
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_driver_getheaderinformation(LibMCDriver_Camera_Driver pDriver, const LibMCDriver_Camera_uint32 nNameSpaceBufferSize, LibMCDriver_Camera_uint32* pNameSpaceNeededChars, char * pNameSpaceBuffer, const LibMCDriver_Camera_uint32 nBaseNameBufferSize, LibMCDriver_Camera_uint32* pBaseNameNeededChars, char * pBaseNameBuffer);

/**
* Stores the driver parameters in the driver environment.
*
* @param[in] pDriver - Driver instance.
* @return error code or 0 (success)
*/
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_driver_queryparameters(LibMCDriver_Camera_Driver pDriver);

/*************************************************************************************************************************
 Class definition for Iterator
**************************************************************************************************************************/

/**
* Iterates to the next resource in the list.
*
* @param[in] pIterator - Iterator instance.
* @param[out] pHasNext - Iterates to the next resource in the list.
* @return error code or 0 (success)
*/
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_iterator_movenext(LibMCDriver_Camera_Iterator pIterator, bool * pHasNext);

/**
* Iterates to the previous resource in the list.
*
* @param[in] pIterator - Iterator instance.
* @param[out] pHasPrevious - Iterates to the previous resource in the list.
* @return error code or 0 (success)
*/
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_iterator_moveprevious(LibMCDriver_Camera_Iterator pIterator, bool * pHasPrevious);

/**
* Returns the resource the iterator points at.
*
* @param[in] pIterator - Iterator instance.
* @param[out] pCurrentInstance - returns the resource instance.
* @return error code or 0 (success)
*/
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_iterator_getcurrent(LibMCDriver_Camera_Iterator pIterator, LibMCDriver_Camera_Base * pCurrentInstance);

/**
* Creates a new resource iterator with the same resource list.
*
* @param[in] pIterator - Iterator instance.
* @param[out] pOutIterator - returns the cloned Iterator instance
* @return error code or 0 (success)
*/
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_iterator_clone(LibMCDriver_Camera_Iterator pIterator, LibMCDriver_Camera_Iterator * pOutIterator);

/**
* Returns the number of resources the iterator captures.
*
* @param[in] pIterator - Iterator instance.
* @param[out] pCount - returns the number of resources the iterator captures.
* @return error code or 0 (success)
*/
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_iterator_count(LibMCDriver_Camera_Iterator pIterator, LibMCDriver_Camera_uint64 * pCount);

/*************************************************************************************************************************
 Class definition for PNGImage
**************************************************************************************************************************/

/**
* Returns width of the image.
*
* @param[in] pPNGImage - PNGImage instance.
* @param[out] pWidth - width of the image in pixels.
* @return error code or 0 (success)
*/
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_pngimage_getwidth(LibMCDriver_Camera_PNGImage pPNGImage, LibMCDriver_Camera_uint64 * pWidth);

/**
* Returns height of the image.
*
* @param[in] pPNGImage - PNGImage instance.
* @param[out] pHeight - height of the image in pixels.
* @return error code or 0 (success)
*/
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_pngimage_getheight(LibMCDriver_Camera_PNGImage pPNGImage, LibMCDriver_Camera_uint64 * pHeight);

/**
* Returns pixel format of the image.
*
* @param[in] pPNGImage - PNGImage instance.
* @param[out] pPixelformat - Pixel format of the image.
* @return error code or 0 (success)
*/
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_pngimage_getpixelformat(LibMCDriver_Camera_PNGImage pPNGImage, LibMCDriver_Camera::eImagePixelFormat * pPixelformat);

/**
* Returns raw data of the image.
*
* @param[in] pPNGImage - PNGImage instance.
* @param[in] nPNGDataBufferSize - Number of elements in buffer
* @param[out] pPNGDataNeededCount - will be filled with the count of the written elements, or needed buffer size.
* @param[out] pPNGDataBuffer - uint8 buffer of Binary data of PNG image captured.
* @return error code or 0 (success)
*/
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_pngimage_getrawdata(LibMCDriver_Camera_PNGImage pPNGImage, const LibMCDriver_Camera_uint64 nPNGDataBufferSize, LibMCDriver_Camera_uint64* pPNGDataNeededCount, LibMCDriver_Camera_uint8 * pPNGDataBuffer);

/**
* Saves PNG Image on Disk.
*
* @param[in] pPNGImage - PNGImage instance.
* @param[in] nFileNameBufferSize - size of the buffer (including trailing 0)
* @param[out] pFileNameNeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pFileNameBuffer -  buffer of Filename to save PNG to., may be NULL
* @return error code or 0 (success)
*/
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_pngimage_savetofile(LibMCDriver_Camera_PNGImage pPNGImage, const LibMCDriver_Camera_uint32 nFileNameBufferSize, LibMCDriver_Camera_uint32* pFileNameNeededChars, char * pFileNameBuffer);

/*************************************************************************************************************************
 Class definition for Driver_Camera
**************************************************************************************************************************/

/**
* Captures an image from the camera and returns a PNG image.
*
* @param[in] pDriver_Camera - Driver_Camera instance.
* @param[out] pPNGImage - Instance of the PNG Image.
* @return error code or 0 (success)
*/
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_driver_camera_capturepngimage(LibMCDriver_Camera_Driver_Camera pDriver_Camera, LibMCDriver_Camera_PNGImage * pPNGImage);

/*************************************************************************************************************************
 Class definition for RaspiCameraDevice
**************************************************************************************************************************/

/**
* Returns path to the camera device.
*
* @param[in] pRaspiCameraDevice - RaspiCameraDevice instance.
* @param[in] nDeviceStringBufferSize - size of the buffer (including trailing 0)
* @param[out] pDeviceStringNeededChars - will be filled with the count of the written bytes, or needed buffer size.
* @param[out] pDeviceStringBuffer -  buffer of Path to camera device., may be NULL
* @return error code or 0 (success)
*/
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_raspicameradevice_getdevicestring(LibMCDriver_Camera_RaspiCameraDevice pRaspiCameraDevice, const LibMCDriver_Camera_uint32 nDeviceStringBufferSize, LibMCDriver_Camera_uint32* pDeviceStringNeededChars, char * pDeviceStringBuffer);

/*************************************************************************************************************************
 Class definition for RaspiCameraDeviceIterator
**************************************************************************************************************************/

/**
* Returns the camera device the iterator points at.
*
* @param[in] pRaspiCameraDeviceIterator - RaspiCameraDeviceIterator instance.
* @param[out] pCurrentInstance - returns the camera device instance.
* @return error code or 0 (success)
*/
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_raspicameradeviceiterator_getcameradevice(LibMCDriver_Camera_RaspiCameraDeviceIterator pRaspiCameraDeviceIterator, LibMCDriver_Camera_RaspiCameraDevice * pCurrentInstance);

/*************************************************************************************************************************
 Class definition for Driver_RaspiCamera
**************************************************************************************************************************/

/**
* Looks for cameras on the Raspberry PI.
*
* @param[in] pDriver_RaspiCamera - Driver_RaspiCamera instance.
* @param[out] pDeviceIterator - Iterator Instance through all found devices.
* @return error code or 0 (success)
*/
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_driver_raspicamera_querydevices(LibMCDriver_Camera_Driver_RaspiCamera pDriver_RaspiCamera, LibMCDriver_Camera_RaspiCameraDeviceIterator * pDeviceIterator);

/**
* Initialize the camera on the Raspberry PI.
*
* @param[in] pDriver_RaspiCamera - Driver_RaspiCamera instance.
* @param[in] pDeviceString - Path to camera device.
* @param[in] nWidth - Width of Image in Pixels.
* @param[in] nHeight - Height of Image in Pixels.
* @param[in] ePixelformat - Pixel format of the image.
* @return error code or 0 (success)
*/
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_driver_raspicamera_initialize(LibMCDriver_Camera_Driver_RaspiCamera pDriver_RaspiCamera, const char * pDeviceString, LibMCDriver_Camera_uint32 nWidth, LibMCDriver_Camera_uint32 nHeight, LibMCDriver_Camera::eImagePixelFormat ePixelformat);

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
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_getversion(LibMCDriver_Camera_uint32 * pMajor, LibMCDriver_Camera_uint32 * pMinor, LibMCDriver_Camera_uint32 * pMicro);

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
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_getlasterror(LibMCDriver_Camera_Base pInstance, const LibMCDriver_Camera_uint32 nErrorMessageBufferSize, LibMCDriver_Camera_uint32* pErrorMessageNeededChars, char * pErrorMessageBuffer, bool * pHasError);

/**
* Releases shared ownership of an Instance
*
* @param[in] pInstance - Instance Handle
* @return error code or 0 (success)
*/
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_releaseinstance(LibMCDriver_Camera_Base pInstance);

/**
* Acquires shared ownership of an Instance
*
* @param[in] pInstance - Instance Handle
* @return error code or 0 (success)
*/
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_acquireinstance(LibMCDriver_Camera_Base pInstance);

/**
* Injects an imported component for usage within this component
*
* @param[in] pNameSpace - NameSpace of the injected component
* @param[in] pSymbolAddressMethod - Address of the SymbolAddressMethod of the injected component
* @return error code or 0 (success)
*/
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_injectcomponent(const char * pNameSpace, LibMCDriver_Camera_pvoid pSymbolAddressMethod);

/**
* Returns the address of the SymbolLookupMethod
*
* @param[out] pSymbolLookupMethod - Address of the SymbolAddressMethod
* @return error code or 0 (success)
*/
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_getsymbollookupmethod(LibMCDriver_Camera_pvoid * pSymbolLookupMethod);

/**
* Creates a driver instance with a specific name.
*
* @param[in] pName - Name of driver to be created.
* @param[in] pType - Type of driver to be created.
* @param[in] pDriverEnvironment - Environment of this driver.
* @param[out] pInstance - New Driver instance
* @return error code or 0 (success)
*/
LIBMCDRIVER_CAMERA_DECLSPEC LibMCDriver_CameraResult libmcdriver_camera_createdriver(const char * pName, const char * pType, LibMCDriverEnv_DriverEnvironment pDriverEnvironment, LibMCDriver_Camera_Driver * pInstance);

#ifdef __cplusplus
}
#endif

#endif // __LIBMCDRIVER_CAMERA_HEADER_CPP

