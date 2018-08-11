#pragma once

#ifdef HEAP_LIBRARY
	#define HEAP_EXPORT __declspec(dllexport)
#else
	#define HEAP_EXPORT __declspec(dllimport)
#endif // HeapExport