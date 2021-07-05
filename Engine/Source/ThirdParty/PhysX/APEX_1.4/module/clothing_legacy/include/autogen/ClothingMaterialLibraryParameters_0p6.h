// This code contains NVIDIA Confidential Information and is disclosed to you
// under a form of NVIDIA software license agreement provided separately to you.
//
// Notice
// NVIDIA Corporation and its licensors retain all intellectual property and
// proprietary rights in and to this software and related documentation and
// any modifications thereto. Any use, reproduction, disclosure, or
// distribution of this software and related documentation without an express
// license agreement from NVIDIA Corporation is strictly prohibited.
//
// ALL NVIDIA DESIGN SPECIFICATIONS, CODE ARE PROVIDED "AS IS.". NVIDIA MAKES
// NO WARRANTIES, EXPRESSED, IMPLIED, STATUTORY, OR OTHERWISE WITH RESPECT TO
// THE MATERIALS, AND EXPRESSLY DISCLAIMS ALL IMPLIED WARRANTIES OF NONINFRINGEMENT,
// MERCHANTABILITY, AND FITNESS FOR A PARTICULAR PURPOSE.
//
// Information and code furnished is believed to be accurate and reliable.
// However, NVIDIA Corporation assumes no responsibility for the consequences of use of such
// information or for any infringement of patents or other rights of third parties that may
// result from its use. No license is granted by implication or otherwise under any patent
// or patent rights of NVIDIA Corporation. Details are subject to change without notice.
// This code supersedes and replaces all information previously supplied.
// NVIDIA Corporation products are not authorized for use as critical
// components in life support devices or systems without express written approval of
// NVIDIA Corporation.
//
// Copyright (c) 2008-2017 NVIDIA Corporation. All rights reserved.

// This file was generated by NvParameterized/scripts/GenParameterized.pl


#ifndef HEADER_ClothingMaterialLibraryParameters_0p6_h
#define HEADER_ClothingMaterialLibraryParameters_0p6_h

#include "NvParametersTypes.h"

#ifndef NV_PARAMETERIZED_ONLY_LAYOUTS
#include "nvparameterized/NvParameterized.h"
#include "nvparameterized/NvParameterizedTraits.h"
#include "NvParameters.h"
#include "NvTraitsInternal.h"
#endif

namespace nvidia
{
namespace parameterized
{

#if PX_VC
#pragma warning(push)
#pragma warning(disable: 4324) // structure was padded due to __declspec(align())
#endif

namespace ClothingMaterialLibraryParameters_0p6NS
{

struct StiffnessScaling_Type;
struct ClothingMaterial_Type;

struct ClothingMaterial_DynamicArray1D_Type
{
	ClothingMaterial_Type* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct StiffnessScaling_Type
{
	float range;
	float scale;
};
struct ClothingMaterial_Type
{
	NvParameterized::DummyStringStruct materialName;
	float verticalStretchingStiffness;
	float horizontalStretchingStiffness;
	float bendingStiffness;
	float shearingStiffness;
	float zeroStretchStiffness;
	bool orthoBending;
	StiffnessScaling_Type verticalStiffnessScaling;
	StiffnessScaling_Type horizontalStiffnessScaling;
	StiffnessScaling_Type bendingStiffnessScaling;
	StiffnessScaling_Type shearingStiffnessScaling;
	float damping;
	float internalDamping;
	bool comDamping;
	float friction;
	uint32_t solverIterations;
	float solverFrequency;
	float gravityScale;
	float inertiaScale;
	float hardStretchLimitation;
	float maxDistanceBias;
	uint32_t hierarchicalSolverIterations;
};

struct ParametersStruct
{

	ClothingMaterial_DynamicArray1D_Type materials;

};

static const uint32_t checksum[] = { 0x88104dea, 0xfcee2625, 0x4738b22c, 0x20798b99, };

} // namespace ClothingMaterialLibraryParameters_0p6NS

#ifndef NV_PARAMETERIZED_ONLY_LAYOUTS
class ClothingMaterialLibraryParameters_0p6 : public NvParameterized::NvParameters, public ClothingMaterialLibraryParameters_0p6NS::ParametersStruct
{
public:
	ClothingMaterialLibraryParameters_0p6(NvParameterized::Traits* traits, void* buf = 0, int32_t* refCount = 0);

	virtual ~ClothingMaterialLibraryParameters_0p6();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("ClothingMaterialLibraryParameters");
	}

	const char* className(void) const
	{
		return(staticClassName());
	}

	static const uint32_t ClassVersion = ((uint32_t)0 << 16) + (uint32_t)6;

	static uint32_t staticVersion(void)
	{
		return ClassVersion;
	}

	uint32_t version(void) const
	{
		return(staticVersion());
	}

	static const uint32_t ClassAlignment = 8;

	static const uint32_t* staticChecksum(uint32_t& bits)
	{
		bits = 8 * sizeof(ClothingMaterialLibraryParameters_0p6NS::checksum);
		return ClothingMaterialLibraryParameters_0p6NS::checksum;
	}

	static void freeParameterDefinitionTable(NvParameterized::Traits* traits);

	const uint32_t* checksum(uint32_t& bits) const
	{
		return staticChecksum(bits);
	}

	const ClothingMaterialLibraryParameters_0p6NS::ParametersStruct& parameters(void) const
	{
		ClothingMaterialLibraryParameters_0p6* tmpThis = const_cast<ClothingMaterialLibraryParameters_0p6*>(this);
		return *(static_cast<ClothingMaterialLibraryParameters_0p6NS::ParametersStruct*>(tmpThis));
	}

	ClothingMaterialLibraryParameters_0p6NS::ParametersStruct& parameters(void)
	{
		return *(static_cast<ClothingMaterialLibraryParameters_0p6NS::ParametersStruct*>(this));
	}

	virtual NvParameterized::ErrorType getParameterHandle(const char* long_name, NvParameterized::Handle& handle) const;
	virtual NvParameterized::ErrorType getParameterHandle(const char* long_name, NvParameterized::Handle& handle);

	void initDefaults(void);

protected:

	virtual const NvParameterized::DefinitionImpl* getParameterDefinitionTree(void);
	virtual const NvParameterized::DefinitionImpl* getParameterDefinitionTree(void) const;


	virtual void getVarPtr(const NvParameterized::Handle& handle, void*& ptr, size_t& offset) const;

private:

	void buildTree(void);
	void initDynamicArrays(void);
	void initStrings(void);
	void initReferences(void);
	void freeDynamicArrays(void);
	void freeStrings(void);
	void freeReferences(void);

	static bool mBuiltFlag;
	static NvParameterized::MutexType mBuiltFlagMutex;
};

class ClothingMaterialLibraryParameters_0p6Factory : public NvParameterized::Factory
{
	static const char* const vptr;

public:

	virtual void freeParameterDefinitionTable(NvParameterized::Traits* traits)
	{
		ClothingMaterialLibraryParameters_0p6::freeParameterDefinitionTable(traits);
	}

	virtual NvParameterized::Interface* create(NvParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(ClothingMaterialLibraryParameters_0p6), ClothingMaterialLibraryParameters_0p6::ClassAlignment);
		if (!NvParameterized::IsAligned(newPtr, ClothingMaterialLibraryParameters_0p6::ClassAlignment))
		{
			NV_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ClothingMaterialLibraryParameters_0p6");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(ClothingMaterialLibraryParameters_0p6)); // always initialize memory allocated to zero for default values
		return NV_PARAM_PLACEMENT_NEW(newPtr, ClothingMaterialLibraryParameters_0p6)(paramTraits);
	}

	virtual NvParameterized::Interface* finish(NvParameterized::Traits* paramTraits, void* bufObj, void* bufStart, int32_t* refCount)
	{
		if (!NvParameterized::IsAligned(bufObj, ClothingMaterialLibraryParameters_0p6::ClassAlignment)
		        || !NvParameterized::IsAligned(bufStart, ClothingMaterialLibraryParameters_0p6::ClassAlignment))
		{
			NV_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ClothingMaterialLibraryParameters_0p6");
			return 0;
		}

		// Init NvParameters-part
		// We used to call empty constructor of ClothingMaterialLibraryParameters_0p6 here
		// but it may call default constructors of members and spoil the data
		NV_PARAM_PLACEMENT_NEW(bufObj, NvParameterized::NvParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (ClothingMaterialLibraryParameters_0p6*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (ClothingMaterialLibraryParameters_0p6::staticClassName());
	}

	virtual uint32_t getVersion()
	{
		return (ClothingMaterialLibraryParameters_0p6::staticVersion());
	}

	virtual uint32_t getAlignment()
	{
		return (ClothingMaterialLibraryParameters_0p6::ClassAlignment);
	}

	virtual const uint32_t* getChecksum(uint32_t& bits)
	{
		return (ClothingMaterialLibraryParameters_0p6::staticChecksum(bits));
	}
};
#endif // NV_PARAMETERIZED_ONLY_LAYOUTS

} // namespace parameterized
} // namespace nvidia

#if PX_VC
#pragma warning(pop)
#endif

#endif
