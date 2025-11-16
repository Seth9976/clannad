// 函数: sub_60eaf0
// 地址: 0x60eaf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b24e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = data_bac50c
int32_t edi = 0
int32_t var_54 = 0
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x2aaaaaab, esi[1] - *esi)
int32_t edx_1 = edx s>> 3
int16_t* result

if ((edx_1 u>> 0x1f) + edx_1 s<= 0)
label_60ebad:
    *(arg1 + 0x14) = 7
    *(arg1 + 0x10) = 0
    *arg1 = 0
    sub_52e720(arg1, &data_ad7c90, nullptr)
    result = arg1
else
    void* ebx_1 = data_bac4d8
    int32_t eax_7 = 0
    int32_t var_48_1 = 0
    
    while (true)
        void* ecx_3 = *esi + eax_7
        void* eax_8
        
        if (*(ebx_1 + 0x8c) u< 8)
            eax_8 = ebx_1 + 0x78
        else
            eax_8 = *(ebx_1 + 0x78)
        
        int32_t var_68_1 = *(ebx_1 + 0x88)
        
        if (sub_536340(ecx_3, ecx_3, *(ecx_3 + 0x10), eax_8) == 0)
            break
        
        edi += 1
        var_48_1 += 0x30
        int32_t eax_10
        int32_t edx_2
        edx_2:eax_10 = muls.dp.d(0x2aaaaaab, esi[1] - *esi)
        int32_t edx_3 = edx_2 s>> 3
        eax_7 = var_48_1
        
        if (edi s>= (edx_3 u>> 0x1f) + edx_3)
            goto label_60ebad
    
    if (edi s< 0)
        goto label_60ebad
    
    int32_t eax_14
    int32_t edx_4
    edx_4:eax_14 = muls.dp.d(0x2aaaaaab, esi[1] - *esi)
    int32_t edx_5 = edx_4 s>> 3
    
    if (edi s>= (edx_5 u>> 0x1f) + edx_5)
        goto label_60ebad
    
    int32_t ebx_3 = edi * 0x30
    
    while (true)
        void** eax_19 = *esi + ebx_3
        int16_t var_44 = 0
        int32_t var_30_1 = 7
        int32_t var_34_1 = 0
        sub_52e3c0(&var_44, eax_19, 0, 0xffffffff)
        int32_t var_8_1 = 0
        PWSTR lpFileName_1
        sub_60e310(&var_44, data_bac4d8 + 0x18, &lpFileName_1, &var_44, arg2)
        var_8_1.b = 1
        PWSTR lpFileName = &lpFileName_1
        int32_t var_18
        
        if (var_18 u>= 8)
            lpFileName = lpFileName_1
        
        uint32_t eax_21 = GetFileAttributesW(lpFileName)
        
        if (eax_21 != 0xffffffff && (eax_21.b & 0x10) == 0)
            *(arg1 + 0x14) = 7
            *(arg1 + 0x10) = 0
            *arg1 = 0
            sub_52e3c0(arg1, &lpFileName_1, 0, 0xffffffff)
            
            if (var_18 u>= 8)
                j__free(lpFileName_1)
            
            int32_t var_18_1 = 7
            int32_t var_1c_2 = 0
            lpFileName_1.w = 0
            
            if (var_30_1 u>= 8)
                j__free(var_44.d)
            
            result = arg1
            break
        
        if (var_18 u>= 8)
            j__free(lpFileName_1)
        
        int32_t var_8_2 = 0xffffffff
        var_18 = 7
        int32_t var_1c_1 = 0
        lpFileName_1.w = 0
        
        if (var_30_1 u>= 8)
            j__free(var_44.d)
        
        esi = data_bac50c
        edi += 1
        ebx_3 += 0x30
        int32_t eax_22
        int32_t edx_8
        edx_8:eax_22 = muls.dp.d(0x2aaaaaab, esi[1] - *esi)
        int32_t edx_9 = edx_8 s>> 3
        
        if (edi s>= (edx_9 u>> 0x1f) + edx_9)
            goto label_60ebad

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
