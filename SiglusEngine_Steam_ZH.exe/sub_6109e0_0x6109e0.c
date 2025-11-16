// 函数: sub_6109e0
// 地址: 0x6109e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bec90
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_a8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_94 = 0
int32_t var_1c = 7
int32_t var_20 = 0
int16_t var_30 = 0
int32_t var_8_1 = 0
int32_t* esi = data_bac50c
int32_t var_7c = 0
int32_t eax_6
int32_t edx
edx:eax_6 = muls.dp.d(0x2aaaaaab, esi[1] - *esi)
int32_t edx_1 = edx s>> 3
int16_t* result

if ((edx_1 u>> 0x1f) + edx_1 s<= 0)
label_610ada:
    *(arg3 + 0x14) = 7
    *(arg3 + 0x10) = 0
    *arg3 = 0
    sub_52e720(arg3, &data_ad7c90, nullptr)
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    result = arg3
else
    void* edi_1 = data_bac4d8
    int32_t ebx_1 = 0
    
    while (true)
        void* ecx_4 = *esi + ebx_1
        void* eax_10
        
        if (*(edi_1 + 0x8c) u< 8)
            eax_10 = edi_1 + 0x78
        else
            eax_10 = *(edi_1 + 0x78)
        
        int32_t var_ac_1 = *(edi_1 + 0x88)
        
        if (sub_536340(ecx_4, ecx_4, *(ecx_4 + 0x10), eax_10) == 0)
            break
        
        ebx_1 += 0x30
        var_7c += 1
        int32_t eax_12
        int32_t edx_2
        edx_2:eax_12 = muls.dp.d(0x2aaaaaab, esi[1] - *esi)
        int32_t edx_3 = edx_2 s>> 3
        
        if (var_7c s>= (edx_3 u>> 0x1f) + edx_3)
            goto label_610ada
    
    int32_t ebx_2 = var_7c
    
    if (ebx_2 s< 0)
        goto label_610ada
    
    int32_t eax_16
    int32_t edx_4
    edx_4:eax_16 = muls.dp.d(0x2aaaaaab, esi[1] - *esi)
    int32_t edx_5 = edx_4 s>> 3
    
    if (ebx_2 s>= (edx_5 u>> 0x1f) + edx_5)
        goto label_610ada
    
    int32_t ecx_14 = ebx_2 * 0x30
    int32_t var_7c_1 = ecx_14
    
    while (true)
        void** eax_21 = *esi + ecx_14
        int32_t var_64_1 = 7
        int32_t var_68_1 = 0
        int16_t var_78 = 0
        sub_52e3c0(&var_78, eax_21, 0, 0xffffffff)
        int32_t esi_2 = 3
        var_8_1.b = 1
        int32_t var_34_1 = 7
        int32_t var_38_1 = 0
        int16_t var_48 = 0
        sub_52e720(&var_48, 0xaf39e0, 3)
        var_8_1.b = 2
        int16_t var_60
        int16_t* eax_23 = sub_60e8c0(&var_78, arg2, &var_60, &var_78, arg4, arg5, &var_48)
        var_8_1.b = 3
        
        if (&var_30 != eax_23)
            sub_52e3c0(&var_30, eax_23, 0, 0xffffffff)
        
        int32_t var_4c
        
        if (var_4c u>= 8)
            j__free(var_60.d)
        
        var_8_1.b = 1
        int32_t var_4c_1 = 7
        int32_t var_50_1 = 0
        var_60 = 0
        
        if (var_34_1 u>= 8)
            j__free(var_48.d)
        
        int16_t* lpFileName = &var_30
        
        if (var_1c u>= 8)
            lpFileName = var_30.d
        
        uint32_t eax_24 = GetFileAttributesW(lpFileName)
        
        if (eax_24 == 0xffffffff || (eax_24.b & 0x10) != 0)
            int32_t var_34_2 = 7
            int32_t var_38_2 = 0
            esi_2 = 2
            var_48 = 0
            sub_52e720(&var_48, 0xaf39e8, 3)
            var_8_1.b = 4
            int16_t* eax_26 = sub_60e8c0(&var_78, arg2, &var_60, &var_78, arg4, arg5, &var_48)
            var_8_1.b = 5
            
            if (&var_30 != eax_26)
                sub_52e3c0(&var_30, eax_26, 0, 0xffffffff)
            
            if (var_4c_1 u>= 8)
                j__free(var_60.d)
            
            var_8_1.b = 1
            int32_t var_4c_2 = 7
            int32_t var_50_2 = 0
            var_60 = 0
            
            if (var_34_2 u>= 8)
                j__free(var_48.d)
            
            int16_t* lpFileName_1 = &var_30
            
            if (var_1c u>= 8)
                lpFileName_1 = var_30.d
            
            uint32_t eax_27 = GetFileAttributesW(lpFileName_1)
            
            if (eax_27 == 0xffffffff || (eax_27.b & 0x10) != 0)
                int32_t var_34_3 = 7
                int32_t var_38_3 = 0
                esi_2 = 1
                var_48 = 0
                sub_52e720(&var_48, 0xaf39f0, 3)
                var_8_1.b = 6
                int16_t* eax_29 = sub_60e8c0(&var_78, arg2, &var_60, &var_78, arg4, arg5, &var_48)
                var_8_1.b = 7
                
                if (&var_30 != eax_29)
                    sub_52e3c0(&var_30, eax_29, 0, 0xffffffff)
                
                if (var_4c_2 u>= 8)
                    j__free(var_60.d)
                
                var_4c = 7
                int32_t var_50_3 = 0
                var_60 = 0
                
                if (var_34_3 u>= 8)
                    j__free(var_48.d)
                
                int16_t* lpFileName_2 = &var_30
                
                if (var_1c u>= 8)
                    lpFileName_2 = var_30.d
                
                uint32_t eax_30 = GetFileAttributesW(lpFileName_2)
                
                if (eax_30 == 0xffffffff || (eax_30.b & 0x10) != 0)
                    var_8_1.b = 0
                    
                    if (var_64_1 u>= 8)
                        j__free(var_78.d)
                    
                    esi = data_bac50c
                    var_7c_1 += 0x30
                    ebx_2 += 1
                    int32_t eax_31
                    int32_t edx_9
                    edx_9:eax_31 = muls.dp.d(0x2aaaaaab, esi[1] - *esi)
                    int32_t edx_10 = edx_9 s>> 3
                    
                    if (ebx_2 s>= (edx_10 u>> 0x1f) + edx_10)
                        goto label_610ada
                    
                    ecx_14 = var_7c_1
                    continue
        
        var_8_1.b = 0
        
        if (var_64_1 u>= 8)
            j__free(var_78.d)
        
        if (arg6 != 0)
            *arg6 = esi_2
        
        *(arg3 + 0x14) = 7
        *(arg3 + 0x10) = 0
        *arg3 = 0
        sub_52e3c0(arg3, &var_30, 0, 0xffffffff)
        
        if (var_1c u>= 8)
            j__free(var_30.d)
        
        result = arg3
        break

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
