// 函数: sub_5fa480
// 地址: 0x5fa480
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9bd498
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_4c = arg1

if (arg3 s< arg4)
    result = arg3 * 0x164
    arg4 -= arg3
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
    int32_t i
    
    do
        int32_t* ecx = *arg2
        void* edi_2 = *(arg1 + 0xa4) + result
        
        if (ecx == arg2[1])
            ecx = nullptr
        
        *edi_2 = *(ecx + arg2[3])
        arg2[3] += 4
        int32_t eax_7 = *arg2
        
        if (eax_7 == arg2[1])
            eax_7 = 0
        
        *(edi_2 + 4) = *(arg2[3] + eax_7)
        arg2[3] += 4
        int32_t eax_9 = *arg2
        
        if (eax_9 == arg2[1])
            eax_9 = 0
        
        *(edi_2 + 8) = *(arg2[3] + eax_9)
        arg2[3] += 4
        int32_t var_34
        void** eax_11 = sub_5b0600(arg2, &var_34)
        int32_t var_c_1 = 0
        
        if (edi_2 + 0xc != eax_11)
            sub_52e3c0(edi_2 + 0xc, eax_11, 0, 0xffffffff)
        
        int32_t var_c_2 = 0xffffffff
        int32_t var_20
        
        if (var_20 u>= 8)
            j__free(var_34)
        
        int32_t eax_12 = *arg2
        
        if (eax_12 == arg2[1])
            eax_12 = 0
        
        __builtin_memcpy(edi_2 + 0x24, arg2[3] + eax_12, 0x80)
        arg2[3] -= 0xffffff80
        sub_5bea80(edi_2 + 0xa4, arg2)
        int32_t* ecx_6 = *arg2
        
        if (ecx_6 == arg2[1])
            ecx_6 = nullptr
        
        *(edi_2 + 0x15c) = *(ecx_6 + arg2[3])
        arg2[3] += 4
        int32_t eax_15 = *(edi_2 + 4)
        
        if (eax_15 == 0xb)
            void var_44
            int32_t* edi_4 = *sub_58c590(&var_44, edi_2 + 0x160)
            int32_t* var_40
            
            if (var_40 != 0)
                bool cond:4_1 = var_40[1] != 1
                var_40[1]
                var_40[1] -= 1
                
                if (not(cond:4_1))
                    (*(*var_40 + 4))(eax_4)
                    bool cond:6_1 = var_40[2] != 1
                    var_40[2]
                    var_40[2] -= 1
                    
                    if (not(cond:6_1))
                        (*(*var_40 + 8))()
            
            sub_5b61c0(edi_4, arg2)
        else if (eax_15 == 0x15)
            void var_3c
            int32_t* edi_5 = *sub_58c640(&var_3c, edi_2 + 0x160)
            int32_t* var_38
            
            if (var_38 != 0)
                bool cond:5_1 = var_38[1] != 1
                var_38[1]
                var_38[1] -= 1
                
                if (not(cond:5_1))
                    (*(*var_38 + 4))(eax_4)
                    bool cond:7_1 = var_38[2] != 1
                    var_38[2]
                    var_38[2] -= 1
                    
                    if (not(cond:7_1))
                        (*(*var_38 + 8))()
            
            sub_5b6390(edi_5, arg2)
        
        arg1 = var_4c
        result = &result_1[0x59]
        i = arg4
        arg4 -= 1
        result_1 = result
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_54)
return result
