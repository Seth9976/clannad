// 函数: sub_5e4300
// 地址: 0x5e4300
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bca20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x8d0) = 2
int32_t* eax_11

if (*(arg1 + 0xc8) == 0)
    int32_t eax_17 = data_4ebe2ac
    int32_t* eax_18 = data_4ebe2b0
    
    if (eax_18 != 0)
        eax_18[1]
        eax_18[1] += 1
    
    operator new(arg1 + 0x8d0, eax_17, eax_18)
    int32_t eax_20 = data_4ebe2ec
    int32_t* eax_21 = data_4ebe2f0
    
    if (eax_21 != 0)
        eax_21[1]
        eax_21[1] += 1
    
    eax_11 = operator new[](arg1 + 0x8d0, eax_20, eax_21)
else
    int32_t eax_3 = data_4ebe2bc
    int32_t* eax_4 = data_4ebe2c0
    
    if (eax_4 != 0)
        eax_4[1]
        eax_4[1] += 1
    
    operator new(arg1 + 0x8d0, eax_3, eax_4)
    int32_t eax_6 = data_4ebe2ec
    int32_t* eax_7 = data_4ebe2f0
    
    if (eax_7 != 0)
        eax_7[1]
        eax_7[1] += 1
    
    int32_t var_8_1 = 0
    void var_24
    eax_11 = sub_54d190(arg1 + 0x798, 
        sub_6281e0(operator new[](arg1 + 0x8d0, eax_6, eax_7), arg1 + 0xb8, &var_24, 0, 0))
    int32_t var_8_2 = 0xffffffff
    int32_t* var_20
    
    if (var_20 != 0)
        eax_11 = &var_20[1]
        bool cond:1_1 = *eax_11 != 1
        *eax_11
        *eax_11 -= 1
        
        if (not(cond:1_1))
            (*(*var_20 + 4))(eax_2)
            eax_11 = &var_20[2]
            bool cond:2_1 = *eax_11 != 1
            *eax_11
            *eax_11 -= 1
            
            if (not(cond:2_1))
                eax_11 = (*(*var_20 + 8))()
    
    int32_t* ecx_8 = *(arg1 + 0x798)
    
    if (ecx_8 != 0)
        void var_1c
        sub_54d980(ecx_8, &var_1c, 0)
        int32_t var_8_3 = 1
        eax_11 = sub_5b17d0(arg1 + 0x9a8, &var_1c)
        int32_t var_8_4 = 0xffffffff
        int32_t* var_18
        
        if (var_18 != 0)
            eax_11 = &var_18[1]
            bool cond:3_1 = *eax_11 != 1
            *eax_11
            *eax_11 -= 1
            
            if (not(cond:3_1))
                (*(*var_18 + 4))(eax_2)
                eax_11 = &var_18[2]
                int32_t edi_1 = *eax_11
                *eax_11 -= 1
                
                if (edi_1 == 1)
                    int32_t eax_16 = (*(*var_18 + 8))()
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_16

fsbase->NtTib.ExceptionList = ExceptionList
return eax_11
