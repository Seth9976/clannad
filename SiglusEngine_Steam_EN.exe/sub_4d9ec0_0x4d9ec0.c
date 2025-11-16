// 函数: sub_4d9ec0
// 地址: 0x4d9ec0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_605467
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_140 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
HRESULT result

if (data_6400ec == 0 || data_6400f4 == 0)
    CRITICAL_SECTION* lpCriticalSection = data_20f33f8 + 0x10
    CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
    int32_t var_8_1 = 0
    EnterCriticalSection(lpCriticalSection)
    struct ITypeLib pptlib_1 = data_6400ec
    HRESULT result_1 = E_FAIL
    char var_12c_1 = 1
    
    if (pptlib_1 != 0)
        result_1 = 0
    label_4da1a7:
        
        if (pptlib_1 != 0 && data_6400f4 == 0)
            struct ITypeLib pptlib_4 = pptlib_1
            result_1 = sub_4d9cb0()
    else
        void* rguid = data_6400e4
        uint16_t wVerMinor = data_6400ea
        int32_t edi
        edi.w = data_6400e8
        struct ITypeLib pptlib = pptlib_1
        int32_t* var_120
        int32_t* var_11c
        
        if (data_20f33e8.d != *rguid || data_20f33e8:4 != *(rguid + 4)
                || data_20f33e8:8 != *(rguid + 8) || data_20f33e8:0xc != *(rguid + 0xc)
                || edi.w != 0xffff || wVerMinor != 0xffff)
            result_1 = LoadRegTypeLib(rguid, edi.w, wVerMinor, arg1, &pptlib)
        label_4da0a1:
            
            if (result_1 s< 0)
            label_4da19e:
                pptlib_1 = data_6400ec
                goto label_4da1a7
            
            var_11c = nullptr
            var_8_1.b = 2
            struct ITypeLib pptlib_2 = pptlib
            result_1 = (*(*pptlib_2 + 0x18))(pptlib_2, data_6400e0, &var_11c)
            
            if (result_1 s>= 0)
                int32_t* eax_17 = var_11c
                int32_t* var_128_1 = eax_17
                
                if (eax_17 != 0)
                    (*(*eax_17 + 4))(eax_17)
                    eax_17 = var_11c
                
                var_120 = nullptr
                var_8_1.b = 4
                
                if ((**eax_17)(eax_17, 0x61cfcc, &var_120) s>= 0)
                    sub_4df7b0(&var_120)
                
                data_6400ec = var_128_1
                void* eax_20 = data_20f33f8
                int32_t* var_128_2 = nullptr
                void* ecx_10
                
                if (eax_20 == 0)
                    ecx_10 = nullptr
                else
                    ecx_10 = eax_20 + 4
                
                void* var_144_10 = ecx_10
                sub_4d9ae0(ecx_10)
                var_8_1.b = 3
                int32_t* eax_21 = var_120
                
                if (eax_21 != 0)
                    (*(*eax_21 + 8))(eax_21)
                
                var_8_1.b = 2
                
                if (var_128_2 != 0)
                    (*(*var_128_2 + 8))(var_128_2)
            
            struct ITypeLib pptlib_3 = pptlib
            (*(*pptlib_3 + 8))(pptlib_3)
            var_8_1.b = 0
            int32_t* eax_23 = var_11c
            
            if (eax_23 != 0)
                (*(*eax_23 + 8))(eax_23)
            
            goto label_4da19e
        
        uint8_t filename
        uint32_t eax_7 = GetModuleFileNameA(data_641a68, &filename, 0x104)
        
        if (eax_7 == 0 || eax_7 == 0x104)
            goto label_4da19e
        
        var_11c = nullptr
        char* edx_1 = &filename
        var_8_1.b = 1
        
        do
            eax_7.b = *edx_1
            edx_1 = &edx_1[1]
        while (eax_7.b != 0)
        
        void var_117
        void* var_144_2 = &var_117
        var_120 = edx_1 - &var_117 + 1
        int32_t eax_8 = sub_4d9120(&var_120, edx_1 - &var_117 + 1)
        void* szFile
        
        if (eax_8 s>= 0)
            int32_t* esi_1 = var_120
            char eax_9
            
            if (esi_1 s<= 0x400)
                eax_9 = sub_4d9150(esi_1)
            
            int32_t* eax_11
            
            if (esi_1 s> 0x400 || eax_9 == 0)
                eax_11 = sub_4ded10(&var_11c, esi_1)
            else
                __alloca_probe_16(esi_1)
                eax_11 = &var_140
            
            szFile = sub_4d9200(eax_11, &filename, esi_1 u>> 1, 3)
        
        if (eax_8 s>= 0 && szFile != 0)
            var_8_1.b = 0
            result_1 = LoadTypeLib(szFile, &pptlib)
            sub_4ded60(&var_11c)
            goto label_4da0a1
        
        sub_4ded60(&var_11c)
        result_1 = E_OUTOFMEMORY
    
    LeaveCriticalSection(lpCriticalSection)
    result = result_1
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_5f02dd(eax_2 ^ &__saved_ebp)
return result
