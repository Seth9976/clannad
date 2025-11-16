// 函数: sub_6584e0
// 地址: 0x6584e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0f88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = data_bac504
int32_t* result = *arg1

if (result != arg1[1])
    int32_t* result_1 = result
    arg1[3] = 0
    
    if (result_1 == arg1[1])
        result_1 = nullptr
    
    *(ebx + 0x4b038) = *result_1
    *(ebx + 0x4b03c) = result_1[1]
    arg1[3] += 8
    sub_5bd6a0(ebx + 0x556b8, arg1)
    sub_5b61c0(ebx + 0x4b130, arg1)
    sub_5b61c0(ebx + 0x4b1e8, arg1)
    sub_665ec0()
    arg1[3] += 4
    void** edi_1 = ebx + 0x4b2c8
    int32_t eax_5 = *arg1
    
    if (eax_5 == arg1[1])
        eax_5 = 0
    
    sub_630fa0(edi_1, *(arg1[3] + eax_5 - 4))
    int32_t i = 0
    
    if ((edi_1[1] - *edi_1) s/ 0x1c s> 0)
        int32_t ebx_1 = 0
        
        do
            int32_t* edi_3 = *edi_1 + ebx_1
            int32_t var_30
            int16_t* eax_10 = sub_5b0600(arg1, &var_30)
            int32_t var_8_1 = 0
            
            if (edi_3 != eax_10)
                sub_52e3c0(edi_3, eax_10, 0, 0xffffffff)
            
            int32_t var_8_2 = 0xffffffff
            int32_t var_1c
            
            if (var_1c u>= 8)
                j__free(var_30)
            
            char* ecx_11 = *arg1
            edi_1 = ebx + 0x4b2c8
            
            if (ecx_11 == arg1[1])
                ecx_11 = nullptr
            
            i += 1
            int32_t eax_11
            eax_11.b = ecx_11[arg1[3]]
            *(*edi_1 + ebx_1 + 0x18) = eax_11.b
            arg1[3] += 1
            ebx_1 += 0x1c
        while (i s< (edi_1[1] - *edi_1) s/ 0x1c)
    
    arg1[1] = *arg1
    result.b = 1
    arg1[3] = 0
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
