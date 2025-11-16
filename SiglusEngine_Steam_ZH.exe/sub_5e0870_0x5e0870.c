// 函数: sub_5e0870
// 地址: 0x5e0870
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bc720
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i_1 = 0xfffffffe
int32_t result
void* ecx_1

if (*(arg1 + 0x78) == 0)
label_5e0918:
    int32_t i = 0
    result = (*(arg1 + 0x80) - *(arg1 + 0x7c)) s/ 0x8c
    
    if (result s> 0)
        result = 0
        int32_t result_1 = 0
        
        do
            void* ecx_5 = *(arg1 + 0x7c) + result
            void* var_64_1 = ecx_5
            
            if (sub_5e1bf0(ecx_5) != 0)
                i_1 = i
            
            ecx_1 = *(arg1 + 0x80) - *(arg1 + 0x7c)
            result_1 += 0x8c
            i += 1
            result = result_1
        while (i s< ecx_1 s/ 0x8c)
        
        if (i_1 == 0xffffffff)
            goto label_5e0a5c
        
        if (i_1 s>= 0)
            void* var_64_2 = ecx_1
            sub_6018e0(data_bac468 + 0x304, 1)
            int16_t var_48
            int16_t* eax_14 = sub_5e1e50(i_1 * 0x8c + *(arg1 + 0x7c), &var_48)
            int32_t var_8_1 = 1
            int32_t* ecx_12 = data_bac4a0 + 0x200
            
            if (ecx_12 != eax_14)
                sub_52e3c0(ecx_12, eax_14, 0, 0xffffffff)
            
            int32_t var_8_2 = 0xffffffff
            int32_t var_34
            
            if (var_34 u>= 8)
                j__free(var_48.d)
            
            int32_t var_34_1 = 7
            int32_t var_38_1 = 0
            var_48 = 0
            goto label_5e0ad1
else
    void* eax_3
    
    if (*(data_bac4a0 + 0xcc) == 0)
        eax_3.b = *(data_bac484 + 0x138)
        
        if (eax_3.b == 0)
            eax_3.b = *(data_bac498 + 2)
            eax_3.b = eax_3.b == 0
        else
            eax_3.b = 0
    else
        eax_3.b = 0
    
    void* ecx = data_bac4c8
    
    if (*(ecx + 0x64) != 2)
        if (*(ecx + 0x97c) == 2)
            if (eax_3.b != 0 && *(data_bac458 + 0x3a9) != 0)
                goto label_5e0918
            
            ecx_1 = ecx + 0x970
            goto label_5e0900
        
        ecx_1 = ecx + 0x1d20
        
        if (*(ecx_1 + 0xc) != 2 || (eax_3.b != 0 && *(data_bac458 + 0x3e8) != 0))
            goto label_5e0918
        
        if (sub_6b1fd0(ecx_1) == 0)
            goto label_5e0918
    else
        if (eax_3.b != 0)
            if (sub_634fe0() != 0)
                goto label_5e0918
            
            ecx = data_bac4c8
        
        ecx_1 = ecx + 0x58
    label_5e0900:
        
        if (sub_6b1fd0(ecx_1) == 0)
            goto label_5e0918
    
    i_1 = 0xffffffff
label_5e0a5c:
    void* var_64_5 = ecx_1
    sub_6018e0(data_bac468 + 0x304, 2)
    int16_t var_30
    sub_52e820(&var_30, 0xaf1974)
    int32_t var_8_3 = 0
    int32_t* ecx_17 = data_bac4a0 + 0x200
    
    if (ecx_17 != &var_30)
        sub_52e3c0(ecx_17, &var_30, 0, 0xffffffff)
    
    int32_t var_8_4 = 0xffffffff
    int32_t var_1c
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    int32_t var_1c_1 = 7
    int32_t var_20_1 = 0
    var_30 = 0
label_5e0ad1:
    
    if (arg2 != 0)
        sub_677bb0(i_1)
        sub_676760()
    
    result = sub_6508f0(data_bac504 + 0x10)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
