// 函数: sub_5b9060
// 地址: 0x5b9060
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (*(arg1 + 0xc0) == 0)
labelid_1:
    result = 0xffffffff
else
    int32_t ecx = *(arg1 + 0xb4)
    int32_t ebx_1 = 0
    
    if (ecx s<= 0)
    label_5b90bd:
        result = 0xffffffff
    else
        int32_t* eax_4 = *(arg1 + 0xbc)
        
        while (*eax_4 != arg2)
            ebx_1 += 1
            eax_4 = &eax_4[2]
            
            if (ebx_1 s>= ecx)
                goto label_5b90bd_2
        
        if (ebx_1 == 0xffffffff || *(*(arg1 + 0xbc) + (ebx_1 << 3) + 4) != 0x53)
        label_5b90bd_1:
            result = 0xffffffff
        else
            int32_t edi_1 = 0
            
            if (*(arg1 + 0xb0) s<= 0)
            label_5b90bd_2:
                result = 0xffffffff
            else
                while (true)
                    int32_t var_2c
                    sub_5b8a90(arg1, &var_2c, 
                        *(*(arg1 + 0xc0) + ((*(arg1 + 0xb4) * edi_1 + ebx_1) << 2)))
                    void** eax_7 = arg3
                    int32_t var_8_1 = 0
                    int32_t ecx_8 = eax_7[4]
                    
                    if (eax_7[5] u>= 8)
                        eax_7 = *eax_7
                    
                    int32_t var_48_2 = ecx_8
                    int16_t* var_1c
                    int32_t var_18
                    
                    if (sub_536340(&var_2c, ecx_8, var_1c, eax_7) == 0)
                        int32_t result_1 = *(*(arg1 + 0xb8) + (edi_1 << 2))
                        
                        if (var_18 u>= 8)
                            j__free(var_2c)
                        
                        result = result_1
                        break
                    
                    int32_t var_8_2 = 0xffffffff
                    
                    if (var_18 u>= 8)
                        j__free(var_2c)
                    
                    edi_1 += 1
                    
                    if (edi_1 s>= *(arg1 + 0xb0))
                        goto label_5b90bd_2

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
