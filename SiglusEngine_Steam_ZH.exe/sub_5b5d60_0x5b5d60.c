// 函数: sub_5b5d60
// 地址: 0x5b5d60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba8e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14 = arg1

if (arg3 s< arg4)
    int32_t** esi_1 = arg2
    result = arg3 * 0x30c
    void* i_1 = arg4 - arg3
    arg4 = result
    void* i
    
    do
        void* edi_2 = *(arg1 + 0xa4) + result
        esi_1 = sub_5b6110(edi_2 + 0x158, esi_1)
        sub_5b62b0(edi_2 + 0x210, nullptr)
        sub_5b6570(edi_2 + 0xa0, nullptr)
        int32_t edi_3 = *(edi_2 + 0x2c8)
        sub_5979b0(nullptr, *0xc + 4)
        int32_t* ecx_3 = *nullptr
        
        if (ecx_3 == *4)
            ecx_3 = nullptr
        
        *(ecx_3 + *0xc) = edi_3
        *0xc += 4
        int32_t edi_5 = *(edi_2 + 0x2d0)
        sub_5979b0(nullptr, *0xc + 4)
        int32_t* ecx_4 = *nullptr
        
        if (ecx_4 == *4)
            ecx_4 = nullptr
        
        int32_t var_18_1 = 7
        void* var_1c_1 = nullptr
        *(ecx_4 + *0xc) = edi_5
        *0xc += 4
        int16_t var_2c = 0
        sub_52e3c0(&var_2c, edi_2 + 0x2e0, 0, 0xffffffff)
        int32_t var_8_1 = 0
        sub_5979b0(nullptr, *0xc + 4)
        int32_t* ecx_6 = *nullptr
        int16_t* edx_1 = &var_2c
        
        if (ecx_6 == *4)
            ecx_6 = nullptr
        
        *(ecx_6 + *0xc) = var_1c_1
        *0xc += 4
        int16_t* ecx_7 = var_2c.d
        void* edi_7 = var_1c_1 * 2
        int32_t eax_15 = var_18_1
        
        if (eax_15 u>= 8)
            edx_1 = ecx_7
        
        if (edi_7 s> 0)
            sub_5979b0(nullptr, *0xc + edi_7)
            int32_t ecx_8 = *nullptr
            
            if (ecx_8 == *4)
                ecx_8 = 0
            
            sub_748840(*0xc + ecx_8, edx_1, edi_7, eax_2)
            eax_15 = var_18_1
            *0xc += edi_7
            ecx_7 = var_2c.d
        
        int32_t var_8_2 = 0xffffffff
        
        if (eax_15 u>= 8)
            j__free(ecx_7)
        
        int32_t var_18_2 = 7
        var_2c = 0
        int32_t var_1c_2 = 0
        int32_t edi_8 = *(edi_2 + 0x2f8)
        sub_5979b0(nullptr, *0xc + 4)
        int32_t* ecx_9 = *nullptr
        
        if (ecx_9 == *4)
            ecx_9 = nullptr
        
        *(ecx_9 + *0xc) = edi_8
        *0xc += 4
        int32_t edi_10 = *(edi_2 + 0x2fc)
        sub_5979b0(nullptr, *0xc + 4)
        int32_t* ecx_10 = *nullptr
        
        if (ecx_10 == *4)
            ecx_10 = nullptr
        
        *(ecx_10 + *0xc) = edi_10
        *0xc += 4
        result = &arg4[0xc3]
        arg1 = var_14
        arg4 = result
        i = i_1
        i_1 -= 1
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
