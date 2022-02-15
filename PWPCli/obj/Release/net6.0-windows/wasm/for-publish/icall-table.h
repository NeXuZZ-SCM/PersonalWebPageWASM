#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
187,
194,
195,
196,
197,
198,
199,
200,
201,
202,
205,
206,
372,
373,
375,
404,
405,
406,
426,
427,
428,
429,
430,
521,
522,
523,
526,
567,
568,
569,
572,
574,
576,
578,
583,
591,
592,
593,
594,
595,
596,
597,
598,
599,
600,
601,
602,
603,
604,
605,
606,
607,
608,
609,
610,
611,
612,
613,
614,
615,
616,
617,
701,
702,
703,
704,
705,
706,
707,
708,
709,
710,
711,
712,
713,
714,
715,
716,
717,
718,
719,
720,
721,
722,
723,
724,
725,
859,
860,
868,
871,
873,
879,
880,
882,
883,
887,
889,
890,
891,
892,
894,
895,
896,
899,
900,
903,
904,
905,
980,
981,
983,
991,
992,
993,
994,
995,
999,
1000,
1001,
1002,
1003,
1004,
1006,
1007,
1008,
1010,
1011,
1013,
1017,
1018,
1019,
1292,
1508,
1509,
8142,
8143,
8145,
8146,
8147,
8148,
8149,
8151,
8153,
8155,
8156,
8164,
8166,
8170,
8171,
8173,
8175,
8177,
8189,
8198,
8199,
8201,
8202,
8203,
8204,
8205,
8207,
8209,
9244,
9248,
9250,
9251,
9252,
9253,
9318,
9319,
9320,
9337,
9338,
9339,
9340,
9374,
9421,
9424,
9434,
9435,
9436,
9437,
9702,
9703,
9708,
9709,
9757,
9758,
9759,
9787,
9793,
9800,
9810,
9813,
9905,
9915,
9925,
9926,
9927,
9928,
9929,
9930,
9936,
9952,
9973,
9974,
9983,
9985,
9992,
9993,
9996,
9998,
10003,
10009,
10010,
10017,
10019,
10029,
10032,
10033,
10034,
10045,
10057,
10063,
10064,
10065,
10067,
10068,
10078,
10097,
10119,
10120,
10121,
10122,
10123,
10140,
10145,
10150,
10181,
10182,
10672,
10673,
10753,
10832,
11093,
11094,
11103,
11104,
11105,
11111,
11189,
11361,
11362,
12062,
12063,
12893,
12912,
12919,
12920,
12922,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
float ves_icall_System_Math_Abs_single (float);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
int ves_icall_System_Math_ILogB (double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
int ves_icall_System_MathF_ILogB (float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
void ves_icall_RuntimeType_GetPacking_raw (int,int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_EntryPoint_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_InternalImageRuntimeVersion_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsLogging ();
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 187,
ves_icall_System_Array_InternalCreate,
// token 194,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 195,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 196,
ves_icall_System_Array_CanChangePrimitive,
// token 197,
ves_icall_System_Array_FastCopy_raw,
// token 198,
ves_icall_System_Array_GetLength_raw,
// token 199,
ves_icall_System_Array_GetLowerBound_raw,
// token 200,
ves_icall_System_Array_GetGenericValue_icall,
// token 201,
ves_icall_System_Array_GetValueImpl_raw,
// token 202,
ves_icall_System_Array_SetGenericValue_icall,
// token 205,
ves_icall_System_Array_SetValueImpl_raw,
// token 206,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 372,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 373,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 375,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 404,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 405,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 406,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 426,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 427,
ves_icall_System_Enum_ToObject_raw,
// token 428,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 429,
ves_icall_System_Enum_get_underlying_type_raw,
// token 430,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 521,
ves_icall_System_Environment_get_ProcessorCount,
// token 522,
ves_icall_System_Environment_get_TickCount,
// token 523,
ves_icall_System_Environment_get_TickCount64,
// token 526,
ves_icall_System_Environment_FailFast_raw,
// token 567,
ves_icall_System_GC_GetCollectionCount,
// token 568,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 569,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 572,
ves_icall_System_GC_SuppressFinalize_raw,
// token 574,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 576,
ves_icall_System_GC_GetGCMemoryInfo,
// token 578,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 583,
ves_icall_System_Object_MemberwiseClone_raw,
// token 591,
ves_icall_System_Math_Abs_double,
// token 592,
ves_icall_System_Math_Abs_single,
// token 593,
ves_icall_System_Math_Acos,
// token 594,
ves_icall_System_Math_Acosh,
// token 595,
ves_icall_System_Math_Asin,
// token 596,
ves_icall_System_Math_Asinh,
// token 597,
ves_icall_System_Math_Atan,
// token 598,
ves_icall_System_Math_Atan2,
// token 599,
ves_icall_System_Math_Atanh,
// token 600,
ves_icall_System_Math_Cbrt,
// token 601,
ves_icall_System_Math_Ceiling,
// token 602,
ves_icall_System_Math_Cos,
// token 603,
ves_icall_System_Math_Cosh,
// token 604,
ves_icall_System_Math_Exp,
// token 605,
ves_icall_System_Math_Floor,
// token 606,
ves_icall_System_Math_Log,
// token 607,
ves_icall_System_Math_Log10,
// token 608,
ves_icall_System_Math_Pow,
// token 609,
ves_icall_System_Math_Sin,
// token 610,
ves_icall_System_Math_Sinh,
// token 611,
ves_icall_System_Math_Sqrt,
// token 612,
ves_icall_System_Math_Tan,
// token 613,
ves_icall_System_Math_Tanh,
// token 614,
ves_icall_System_Math_FusedMultiplyAdd,
// token 615,
ves_icall_System_Math_ILogB,
// token 616,
ves_icall_System_Math_Log2,
// token 617,
ves_icall_System_Math_ModF,
// token 701,
ves_icall_System_MathF_Acos,
// token 702,
ves_icall_System_MathF_Acosh,
// token 703,
ves_icall_System_MathF_Asin,
// token 704,
ves_icall_System_MathF_Asinh,
// token 705,
ves_icall_System_MathF_Atan,
// token 706,
ves_icall_System_MathF_Atan2,
// token 707,
ves_icall_System_MathF_Atanh,
// token 708,
ves_icall_System_MathF_Cbrt,
// token 709,
ves_icall_System_MathF_Ceiling,
// token 710,
ves_icall_System_MathF_Cos,
// token 711,
ves_icall_System_MathF_Cosh,
// token 712,
ves_icall_System_MathF_Exp,
// token 713,
ves_icall_System_MathF_Floor,
// token 714,
ves_icall_System_MathF_Log,
// token 715,
ves_icall_System_MathF_Log10,
// token 716,
ves_icall_System_MathF_Pow,
// token 717,
ves_icall_System_MathF_Sin,
// token 718,
ves_icall_System_MathF_Sinh,
// token 719,
ves_icall_System_MathF_Sqrt,
// token 720,
ves_icall_System_MathF_Tan,
// token 721,
ves_icall_System_MathF_Tanh,
// token 722,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 723,
ves_icall_System_MathF_ILogB,
// token 724,
ves_icall_System_MathF_Log2,
// token 725,
ves_icall_System_MathF_ModF,
// token 859,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 860,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 868,
ves_icall_RuntimeType_make_array_type_raw,
// token 871,
ves_icall_RuntimeType_make_byref_type_raw,
// token 873,
ves_icall_RuntimeType_MakePointerType_raw,
// token 879,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 880,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 882,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 883,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 887,
ves_icall_RuntimeType_GetPacking_raw,
// token 889,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 890,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 891,
ves_icall_System_RuntimeType_getFullName_raw,
// token 892,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 894,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 895,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 896,
ves_icall_RuntimeType_GetFields_native_raw,
// token 899,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 900,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 903,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 904,
ves_icall_RuntimeType_get_Name_raw,
// token 905,
ves_icall_RuntimeType_get_Namespace_raw,
// token 980,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 981,
ves_icall_reflection_get_token_raw,
// token 983,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 991,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 992,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 993,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 994,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 995,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 999,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 1000,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1001,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1002,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1003,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 1004,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1006,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1007,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 1008,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1010,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 1011,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1013,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1017,
ves_icall_System_String_FastAllocateString_raw,
// token 1018,
ves_icall_System_String_InternalIsInterned_raw,
// token 1019,
ves_icall_System_String_InternalIntern_raw,
// token 1292,
ves_icall_System_Type_internal_from_handle_raw,
// token 1508,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1509,
ves_icall_System_ValueType_Equals_raw,
// token 8142,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 8143,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 8145,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 8146,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 8147,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 8148,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 8149,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 8151,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 8153,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 8155,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 8156,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 8164,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 8166,
mono_monitor_exit_icall_raw,
// token 8170,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 8171,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 8173,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 8175,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 8177,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 8189,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 8198,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 8199,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 8201,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 8202,
ves_icall_System_Threading_Thread_GetState_raw,
// token 8203,
ves_icall_System_Threading_Thread_SetState_raw,
// token 8204,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 8205,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 8207,
ves_icall_System_Threading_Thread_YieldInternal,
// token 8209,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 9244,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 9248,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 9250,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 9251,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 9252,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 9253,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 9318,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 9319,
ves_icall_System_GCHandle_InternalFree_raw,
// token 9320,
ves_icall_System_GCHandle_InternalGet_raw,
// token 9337,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 9338,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 9339,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 9340,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 9374,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 9421,
mono_object_hash_icall_raw,
// token 9424,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 9434,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 9435,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 9436,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 9437,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 9702,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 9703,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 9708,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 9709,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 9757,
mono_digest_get_public_token,
// token 9758,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 9759,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 9787,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 9793,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 9800,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 9810,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 9813,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 9905,
ves_icall_System_Reflection_RuntimeAssembly_get_EntryPoint_raw,
// token 9915,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 9925,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 9926,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 9927,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 9928,
ves_icall_System_Reflection_RuntimeAssembly_InternalImageRuntimeVersion_raw,
// token 9929,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9930,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 9936,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9952,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9973,
ves_icall_reflection_get_token_raw,
// token 9974,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9983,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9985,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 9992,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 9993,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 9996,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 9998,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 10003,
ves_icall_reflection_get_token_raw,
// token 10009,
ves_icall_get_method_info_raw,
// token 10010,
ves_icall_get_method_attributes,
// token 10017,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 10019,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 10029,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 10032,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 10033,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 10034,
ves_icall_reflection_get_token_raw,
// token 10045,
ves_icall_InternalInvoke_raw,
// token 10057,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 10063,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 10064,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 10065,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 10067,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 10068,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 10078,
ves_icall_InternalInvoke_raw,
// token 10097,
ves_icall_reflection_get_token_raw,
// token 10119,
ves_icall_reflection_get_token_raw,
// token 10120,
ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw,
// token 10121,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 10122,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 10123,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 10140,
ves_icall_reflection_get_token_raw,
// token 10145,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 10150,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10181,
ves_icall_reflection_get_token_raw,
// token 10182,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 10672,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 10673,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 10753,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 10832,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 11093,
ves_icall_ModuleBuilder_basic_init_raw,
// token 11094,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 11103,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 11104,
ves_icall_ModuleBuilder_getToken_raw,
// token 11105,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 11111,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 11189,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 11361,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 11362,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 12062,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 12063,
ves_icall_System_Diagnostics_Debugger_Log,
// token 12893,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 12912,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 12919,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 12920,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 12922,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
0,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
};
