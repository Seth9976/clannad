// 函数: sub_5b8ee0
// 地址: 0x5b8ee0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9babb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (*(arg1 + 0xc0) == 0)
label_5b8f3c:
    result = 0xffffffff
else
    int32_t ecx = *(arg1 + 0xb4)
    
    if (ecx s<= 0)
    label_5b8f3c_1:
        result = 0xffffffff
    else
        int32_t* eax_3 = *(arg1 + 0xbc)
        int32_t edi_1 = 0
        
        while (*eax_3 != arg2)
            edi_1 += 1
            eax_3 = &eax_3[2]
            
            if (edi_1 s>= ecx)
                goto label_5b8f3c_2
        
        if (edi_1 == 0xffffffff || *(*(arg1 + 0xbc) + (edi_1 << 3) + 4) != 0x53)
        label_5b8f3c_2:
            result = 0xffffffff
        else
            int32_t* var_2c
            sub_6ae650(&var_2c, arg3)
            int32_t esi_1 = 0
            int32_t var_8_1 = 0
            int32_t var_18
            int32_t result_1
            
            if (*(arg1 + 0xb0) s<= 0)
            label_5b9021:
                result_1 = 0xffffffff
            else
                while (true)
                    int32_t var_44
                    sub_5b8a90(arg1, &var_44, 
                        *(*(arg1 + 0xc0) + ((*(arg1 + 0xb4) * esi_1 + edi_1) << 2)))
                    var_8_1.b = 1
                    int32_t var_5c
                    int16_t* eax_6 = sub_6ae650(&var_5c, &var_44)
                    var_8_1.b = 2
                    int32_t* ecx_10 = &var_2c
                    int32_t var_1c
                    int32_t var_78_2 = var_1c
                    
                    if (var_18 u>= 8)
                        ecx_10 = var_2c
                    
                    var_8_1.b = 1
                    int32_t eax_7
                    eax_7.b = sub_536340(eax_6, ecx_10, *(eax_6 + 0x10), ecx_10) == 0
                    int32_t var_48
                    
                    if (var_48 u>= 8)
                        j__free(var_5c)
                        eax_7.b = eax_7.b
                    
                    int32_t var_30
                    
                    if (eax_7.b != 0)
                        result_1 = *(*(arg1 + 0xb8) + (esi_1 << 2))
                        
                        if (var_30 u>= 8)
                            j__free(var_44)
                        
                        break
                    
                    var_8_1.b = eax_7.b
                    
                    if (var_30 u>= 8)
                        j__free(var_44)
                    
                    esi_1 += 1
                    
                    if (esi_1 s>= *(arg1 + 0xb0))
                        goto label_5b9021
            
            if (var_18 u>= 8)
                j__free(var_2c)
            
            result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
