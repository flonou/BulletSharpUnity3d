#include "main.h"

extern "C"
{
	EXPORT btDefaultCollisionConstructionInfo* btDefaultCollisionConstructionInfo_new();
	EXPORT btPoolAllocator* btDefaultCollisionConstructionInfo_getCollisionAlgorithmPool(btDefaultCollisionConstructionInfo* obj);
	EXPORT int btDefaultCollisionConstructionInfo_getCustomCollisionAlgorithmMaxElementSize(btDefaultCollisionConstructionInfo* obj);
	EXPORT int btDefaultCollisionConstructionInfo_getDefaultMaxCollisionAlgorithmPoolSize(btDefaultCollisionConstructionInfo* obj);
	EXPORT int btDefaultCollisionConstructionInfo_getDefaultMaxPersistentManifoldPoolSize(btDefaultCollisionConstructionInfo* obj);
	EXPORT btPoolAllocator* btDefaultCollisionConstructionInfo_getPersistentManifoldPool(btDefaultCollisionConstructionInfo* obj);
	EXPORT int btDefaultCollisionConstructionInfo_getUseEpaPenetrationAlgorithm(btDefaultCollisionConstructionInfo* obj);
	EXPORT void btDefaultCollisionConstructionInfo_setCollisionAlgorithmPool(btDefaultCollisionConstructionInfo* obj, btPoolAllocator* value);
	EXPORT void btDefaultCollisionConstructionInfo_setCustomCollisionAlgorithmMaxElementSize(btDefaultCollisionConstructionInfo* obj, int value);
	EXPORT void btDefaultCollisionConstructionInfo_setDefaultMaxCollisionAlgorithmPoolSize(btDefaultCollisionConstructionInfo* obj, int value);
	EXPORT void btDefaultCollisionConstructionInfo_setDefaultMaxPersistentManifoldPoolSize(btDefaultCollisionConstructionInfo* obj, int value);
	EXPORT void btDefaultCollisionConstructionInfo_setPersistentManifoldPool(btDefaultCollisionConstructionInfo* obj, btPoolAllocator* value);
	EXPORT void btDefaultCollisionConstructionInfo_setUseEpaPenetrationAlgorithm(btDefaultCollisionConstructionInfo* obj, int value);
	EXPORT void btDefaultCollisionConstructionInfo_delete(btDefaultCollisionConstructionInfo* obj);

	EXPORT btDefaultCollisionConfiguration* btDefaultCollisionConfiguration_new();
	EXPORT btDefaultCollisionConfiguration* btDefaultCollisionConfiguration_new2(const btDefaultCollisionConstructionInfo* constructionInfo);
	EXPORT btVoronoiSimplexSolver* btDefaultCollisionConfiguration_getSimplexSolver(btDefaultCollisionConfiguration* obj);
	EXPORT void btDefaultCollisionConfiguration_setConvexConvexMultipointIterations(btDefaultCollisionConfiguration* obj);
	EXPORT void btDefaultCollisionConfiguration_setConvexConvexMultipointIterations2(btDefaultCollisionConfiguration* obj, int numPerturbationIterations);
	EXPORT void btDefaultCollisionConfiguration_setConvexConvexMultipointIterations3(btDefaultCollisionConfiguration* obj, int numPerturbationIterations, int minimumPointsPerturbationThreshold);
	EXPORT void btDefaultCollisionConfiguration_setPlaneConvexMultipointIterations(btDefaultCollisionConfiguration* obj);
	EXPORT void btDefaultCollisionConfiguration_setPlaneConvexMultipointIterations2(btDefaultCollisionConfiguration* obj, int numPerturbationIterations);
	EXPORT void btDefaultCollisionConfiguration_setPlaneConvexMultipointIterations3(btDefaultCollisionConfiguration* obj, int numPerturbationIterations, int minimumPointsPerturbationThreshold);
}