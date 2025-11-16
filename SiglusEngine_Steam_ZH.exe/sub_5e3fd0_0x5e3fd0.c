// 函数: sub_5e3fd0
// 地址: 0x5e3fd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bc9e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x7a0) = 2
int32_t* eax_11

if (*(arg1 + 0xb0) == 0)
    int32_t eax_15 = data_4ebe2ac
    int32_t* eax_16 = data_4ebe2b0
    
    if (eax_16 != 0)
        eax_16[1]
        eax_16[1] += 1
    
    operator new(arg1 + 0x7a0, eax_15, eax_16)
    int32_t eax_18 = data_4ebe2ec
    int32_t* eax_19 = data_4ebe2f0
    
    if (eax_19 != 0)
        eax_19[1]
        eax_19[1] += 1
    
    eax_11 = operator new[](arg1 + 0x7a0, eax_18, eax_19)
else
    int32_t eax_3 = data_4ebe2bc
    int32_t* eax_4 = data_4ebe2c0
    
    if (eax_4 != 0)
        eax_4[1]
        eax_4[1] += 1
    
    operator new(arg1 + 0x7a0, eax_3, eax_4)
    int32_t eax_6 = data_4ebe2ec
    int32_t* eax_7 = data_4ebe2f0
    
    if (eax_7 != 0)
        eax_7[1]
        eax_7[1] += 1
    
    int32_t var_8_1 = 0
    void var_18
    eax_11 = sub_54d190(arg1 + 0x790, 
        sub_6281e0(operator new[](arg1 + 0x7a0, eax_6, eax_7), arg1 + 0xa0, &var_18, 0, 0))
    int32_t var_8_2 = 0xffffffff
    int32_t* var_14
    
    if (var_14 != 0)
        bool cond:1_1 = var_14[1] != 1
        eax_11 = var_14[1]
        var_14[1] -= 1
        
        if (not(cond:1_1))
            (*(*var_14 + 4))(eax_2)
            eax_11 = &var_14[2]
            int32_t edi_1 = *eax_11
            *eax_11 -= 1
            
            if (edi_1 == 1)
                int32_t eax_14 = (*(*var_14 + 8))()
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_14

fsbase->NtTib.ExceptionList = ExceptionList
return eax_11
