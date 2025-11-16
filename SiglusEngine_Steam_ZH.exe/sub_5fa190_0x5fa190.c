// 函数: sub_5fa190
// 地址: 0x5fa190
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9bd46b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
void* var_cc = esi
int32_t* result = arg4

if (arg3 s< result)
    int32_t ecx = arg3 * 0x164
    arg4 = result - arg3
    int32_t var_d0_1 = ecx
    void* i
    
    do
        int32_t* edi_2 = *(esi + 0xa4) + ecx
        int32_t esi_1 = *edi_2
        sub_5979b0(arg2, &arg2[3][1])
        int32_t* ecx_2 = *arg2
        
        if (ecx_2 == arg2[1])
            ecx_2 = nullptr
        
        *(ecx_2 + arg2[3]) = esi_1
        arg2[3] = &arg2[3][1]
        int32_t esi_2 = edi_2[1]
        sub_5979b0(arg2, &arg2[3][1])
        int32_t* ecx_4 = *arg2
        
        if (ecx_4 == arg2[1])
            ecx_4 = nullptr
        
        *(ecx_4 + arg2[3]) = esi_2
        arg2[3] = &arg2[3][1]
        int32_t esi_3 = edi_2[2]
        sub_5979b0(arg2, &arg2[3][1])
        int32_t* ecx_6 = *arg2
        void* const var_e8_4 = 0xffffffff
        
        if (ecx_6 == arg2[1])
            ecx_6 = nullptr
        
        int32_t var_ac_1 = 7
        void* var_b0_1 = nullptr
        *(ecx_6 + arg2[3]) = esi_3
        arg2[3] = &arg2[3][1]
        int32_t var_ec_1 = 0
        int16_t var_c0 = 0
        sub_52e3c0(&var_c0, &edi_2[3], var_ec_1, var_e8_4)
        int32_t var_c_1 = 0
        sub_5979b0(arg2, &arg2[3][1])
        int32_t* ecx_9 = *arg2
        int16_t* edx_1 = &var_c0
        
        if (ecx_9 == arg2[1])
            ecx_9 = nullptr
        
        *(ecx_9 + arg2[3]) = var_b0_1
        arg2[3] = &arg2[3][1]
        int16_t* ecx_10 = var_c0.d
        void* esi_5 = var_b0_1 * 2
        int32_t eax_18 = var_ac_1
        
        if (eax_18 u>= 8)
            edx_1 = ecx_10
        
        if (esi_5 s> 0)
            sub_5979b0(arg2, arg2[3] + esi_5)
            int32_t* ecx_12 = *arg2
            
            if (ecx_12 == arg2[1])
                ecx_12 = nullptr
            
            sub_748840(arg2[3] + ecx_12, edx_1, esi_5, eax_2)
            eax_18 = var_ac_1
            arg2[3] += esi_5
            ecx_10 = var_c0.d
        
        int32_t var_c_2 = 0xffffffff
        
        if (eax_18 u>= 8)
            j__free(ecx_10)
        
        int32_t eax_23 = arg2[3]
        void var_98
        __builtin_memcpy(&var_98, &edi_2[9], 0x80)
        sub_5979b0(arg2, eax_23 + 0x80)
        int32_t* eax_25 = *arg2
        
        if (eax_25 == arg2[1])
            eax_25 = nullptr
        
        __builtin_memcpy(arg2[3] + eax_25, &var_98, 0x80)
        arg2[3] -= 0xffffff80
        sub_5be990(&edi_2[0x29], arg2)
        int32_t esi_7 = edi_2[0x57]
        sub_5979b0(arg2, &arg2[3][1])
        int32_t* ecx_16 = *arg2
        
        if (ecx_16 == arg2[1])
            ecx_16 = nullptr
        
        *(ecx_16 + arg2[3]) = esi_7
        arg2[3] = &arg2[3][1]
        result = edi_2[1]
        
        if (result == 0xb)
            void var_a8
            int32_t* edi_6 = *sub_58c590(&var_a8, &edi_2[0x58])
            int32_t* var_a4
            
            if (var_a4 != 0)
                bool cond:4_1 = var_a4[1] != 1
                var_a4[1]
                var_a4[1] -= 1
                
                if (not(cond:4_1))
                    (*(*var_a4 + 4))(eax_2)
                    bool cond:6_1 = var_a4[2] != 1
                    var_a4[2]
                    var_a4[2] -= 1
                    
                    if (not(cond:6_1))
                        (*(*var_a4 + 8))()
            
            result = sub_5b6110(edi_6, arg2)
        else if (result == 0x15)
            void var_a0
            int32_t* edi_7 = *sub_58c640(&var_a0, &edi_2[0x58])
            int32_t* var_9c
            
            if (var_9c != 0)
                bool cond:5_1 = var_9c[1] != 1
                var_9c[1]
                var_9c[1] -= 1
                
                if (not(cond:5_1))
                    (*(*var_9c + 4))(eax_2)
                    bool cond:7_1 = var_9c[2] != 1
                    var_9c[2]
                    var_9c[2] -= 1
                    
                    if (not(cond:7_1))
                        (*(*var_9c + 8))()
            
            result = sub_5b62b0(edi_7, arg2)
        
        esi = var_cc
        ecx = var_d0_1 + 0x164
        i = arg4
        arg4 -= 1
        var_d0_1 = ecx
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
