// 函数: sub_4e3310
// 地址: 0x4e3310
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* esi = arg4
struct IRegistrarBase::ATL::CRegObject::VTable* var_94c =
    &ATL::CRegObject::`vftable'{for `IRegistrarBase'}
int32_t var_948 = 0
int32_t var_944 = 0
int32_t var_940 = 0

if (esi != 0)
    int16_t* i = *esi
    
    while (i != 0)
        sub_4e1390(&var_94c, i, esi[1])
        i = esi[2]
        esi = &esi[2]

enum WIN32_ERROR result_2 = (*(*arg1 + 0x14))(&var_94c)
enum WIN32_ERROR result

if (result_2 s< NO_ERROR)
    sub_4e12c0(&var_94c)
    result = result_2
else
    HMODULE hModule = data_641a68
    int32_t var_938 = 0
    uint8_t filename
    uint32_t eax_4 = GetModuleFileNameA(hModule, &filename, 0x104)
    
    if (eax_4 == 0)
        result_2 = sub_4d9430()
    label_4e33c5:
        sub_4ded60(&var_938)
        sub_4e12c0(&var_94c)
        result = result_2
    else if (eax_4 != 0x104)
        char* edx = &filename
        
        do
            eax_4.b = *edx
            edx = &edx[1]
        while (eax_4.b != 0)
        
        void var_10b
        void* var_964_3 = &var_10b
        void* var_950 = edx - &var_10b + 1
        int32_t eax_6 = sub_4d9120(&var_950, edx - &var_10b + 1)
        int16_t* eax_10
        
        if (eax_6 s>= 0)
            void* esi_1 = var_950
            char eax_7
            
            if (esi_1 s<= 0x400)
                eax_7 = sub_4d9150(esi_1)
            
            int16_t* eax_9
            
            if (esi_1 s> 0x400 || eax_7 == 0)
                eax_9 = sub_4ded10(&var_938, esi_1)
            else
                __alloca_probe_16(esi_1)
                int32_t __saved_edi
                eax_9 = &__saved_edi
            
            eax_10 = sub_4d9200(eax_9, &filename, esi_1 u>> 1, 3)
        
        if (eax_6 s< 0 || eax_10 == 0)
            sub_4ded60(&var_938)
            sub_4e12c0(&var_94c)
            result = 0x8007000e
        else
            void var_934
            sub_4e09b0(eax_10, 0x208, &var_934, eax_10)
            HMODULE eax_11
            
            if (hModule != 0)
                eax_11 = GetModuleHandleA(nullptr)
            
            void* eax_12
            
            if (hModule == 0 || hModule == eax_11)
                int16_t var_524 = 0x22
                char var_522[0x416]
                
                if (sub_4d9270(&var_934, 0x20b, &var_522, &var_934) != 0)
                    int32_t eax_15 = sub_4d9240(&var_524)
                    (&var_524)[eax_15] = 0x22
                    
                    if ((eax_15 << 1) + 2 u>= 0x418)
                        ___report_rangecheckfailure()
                        noreturn
                    
                    *(&var_524 + (eax_15 << 1) + 2) = 0
                    eax_12 = &var_524
                    goto label_4e3540
                
                sub_4ded60(&var_938)
                sub_4e12c0(&var_94c)
                result = 0x80004005
            else
                eax_12 = &var_934
            label_4e3540:
                result_2 = sub_4e1390(&var_94c, u"Module", eax_12)
                
                if (result_2 s< NO_ERROR)
                    goto label_4e33c5
                
                enum WIN32_ERROR result_3
                int32_t ecx_14
                result_3, ecx_14 = sub_4e1390(&var_94c, u"Module_Raw", &var_934)
                result_2 = result_3
                
                if (result_2 s< NO_ERROR)
                    goto label_4e33c5
                
                int32_t var_964_9 = ecx_14
                struct IRegistrarBase::ATL::CRegObject::VTable** ecx_15 = &var_94c
                enum WIN32_ERROR result_1
                
                if (arg3 == 0)
                    result_1 = sub_4e1a10(ecx_15, eax_10, arg2)
                else
                    result_1 = sub_4e17a0(ecx_15, eax_10, arg2)
                
                sub_4ded60(&var_938)
                sub_4e12c0(&var_94c)
                result = result_1
    else
        sub_4ded60(&var_938)
        sub_4e12c0(&var_94c)
        result = 0x8007007a

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
