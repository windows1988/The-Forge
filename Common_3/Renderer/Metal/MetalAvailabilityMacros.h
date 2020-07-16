#pragma once

#ifdef TARGET_IOS

// iOS
#ifdef __IPHONE_13_0
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_13_0
#define ENABLE_HEAP_PLACEMENT
#define ENABLE_HEAP_RESOURCE_OPTIONS
#define ENABLE_ARGUMENT_BUFFER_USE_STAGES
#define ENABLE_RAYTRACING
#define ENABLE_INDIRECT_COMMAND_BUFFER_INHERIT_PIPELINE
#define ENABLE_OS_PROC_MEMORY
#endif // __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_13_0
#endif // __IPHONE_13_0

#ifdef __IPHONE_12_0
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_12_0
#define ENABLE_INDIRECT_COMMAND_BUFFERS
#define ENABLE_EVENT_SEMAPHORE
#define ENABLE_MEMORY_BARRIERS_COMPUTE
#endif // __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_12_0
#endif // __IPHONE_12_0

#ifdef __IPHONE_11_0
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_11_0
#define ENABLE_GPU_FAMILY_4
#define ENABLE_ARGUMENT_BUFFERS
#define ENABLE_COMMAND_BUFFER_DEBUG_MARKERS
#define ENABLE_TEXTURE_CUBE_ARRAYS
#define ENABLE_ROVS
#define ENABLE_TEXTURE_READ_WRITE
#define ENABLE_DEPTH_CLIP_MODE
#endif // __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_11_0
#endif // __IPHONE_11_0

#ifdef __IPHONE_10_3
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_10_3
#define ENABLE_GPU_TIMESTAMPS
#endif // __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_10_3
#endif // __IPHONE_10_3

#ifdef __IPHONE_10_0
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_10_0
#define ENABLE_HEAPS
#define ENABLE_FENCES
#define ENABLE_MEMORYLESS_TEXTURES
#define ENABLE_TESSELLATION
#endif // __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_10_0
#endif // __IPHONE_10_0

#ifdef __IPHONE_9_0
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_9_0
#define ENABLE_GPU_FAMILY_3
#endif // __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_9_0
#endif // __IPHONE_9_0

// Supported on all iOS
#define ENABLE_GPU_FAMILY_2
#define ENABLE_GPU_FAMILY_1

#else

// macOS
#ifdef MAC_OS_X_VERSION_10_15
#if MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_15
#define ENABLE_HEAP_PLACEMENT
#define ENABLE_HEAP_RESOURCE_OPTIONS
#define ENABLE_ARGUMENT_BUFFER_USE_STAGES
#define ENABLE_GPU_TIMESTAMPS
#define ENABLE_RAYTRACING
#endif // MAC_OS_X_VERSION_MIN_REQUIRED >= MAC_OS_X_VERSION_10_15
#endif // MAC_OS_X_VERSION_10_15

#ifdef MAC_OS_X_VERSION_10_14
#if MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_14
#define ENABLE_GPU_FAMILY_1_V4
#define ENABLE_INDIRECT_COMMAND_BUFFERS
#define ENABLE_EVENT_SEMAPHORE
#define ENABLE_MEMORY_BARRIERS_GRAPHICS
#define ENABLE_MEMORY_BARRIERS_COMPUTE
#define ENABLE_INDIRECT_COMMAND_BUFFER_INHERIT_PIPELINE
#endif // MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_14
#endif // MAC_OS_X_VERSION_10_14

#ifdef MAC_OS_X_VERSION_10_13
#if MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_13
#define ENABLE_GPU_FAMILY_1_V3
#define ENABLE_ARGUMENT_BUFFERS
#define ENABLE_HEAPS
#define ENABLE_FENCES
#define ENABLE_DISPLAY_SYNC_TOGGLE
#define ENABLE_COMMAND_BUFFER_DEBUG_MARKERS
#define ENABLE_ROVS
#define ENABLE_TEXTURE_READ_WRITE
#endif // MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_13
#endif // MAC_OS_X_VERSION_10_13

#ifdef MAC_OS_X_VERSION_10_12
#if MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_12
#define ENABLE_GPU_FAMILY_1_V2
#define ENABLE_SAMPLER_CLAMP_TO_BORDER
#define ENABLE_TESSELLATION
#endif // MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_12
#endif // MAC_OS_X_VERSION_10_12

// Supported for all macOS
#define ENABLE_TEXTURE_CUBE_ARRAYS
#define ENABLE_DEPTH_CLIP_MODE

#endif // TARGET_IOS