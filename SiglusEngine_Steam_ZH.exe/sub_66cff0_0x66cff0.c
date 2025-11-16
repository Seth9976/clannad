// 函数: sub_66cff0
// 地址: 0x66cff0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6592
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_3c = arg1
int32_t var_6c = 6
int32_t* eax_3 = sub_66f630(&var_6c, 5)
int32_t var_8_1 = 0
int32_t* var_30

if (arg1 != eax_3)
    sub_670c00(arg1)
    var_30 = arg1
    var_8_1.b = 1
    
    if (arg1 != 0)
        sub_6703f0(arg1, eax_3)

int32_t var_8_2 = 0xffffffff
sub_670c00(&var_6c)
int32_t* esi_1 = arg1[2]
int32_t* var_38 = esi_1
char result

if (sub_66d700(arg2, 0x7d) == 0)
    while (true)
        int32_t var_5c = 0
        int32_t var_8_3 = 2
        int32_t var_4c = 0
        var_8_3.b = 3
        sub_66c1d0(arg2)
        
        if (arg2[3].b == 0)
            char* ecx_6 = *arg2
            
            if (ecx_6 != arg2[1])
                if (arg2[2] == 0xa)
                    arg2[4] += 1
                
                arg2[2] = zx.d(*ecx_6)
                *arg2 = &ecx_6[1]
                goto label_66d0de
            
        label_66d29a:
            arg2[2] = 0xffffffff
        label_66d2a1:
            
            if (arg2[2] != 0xffffffff)
                arg2[3].b = 1
        else
            arg2[3].b = 0
        label_66d0de:
            
            if (arg2[2] != 0x22)
                goto label_66d2a1
            
            if (sub_66c9a0(&var_5c, arg2) != 0)
                sub_66c1d0(arg2)
                
                if (arg2[3].b == 0)
                    char* ecx_9 = *arg2
                    
                    if (ecx_9 == arg2[1])
                        goto label_66d29a
                    
                    if (arg2[2] == 0xa)
                        arg2[4] += 1
                    
                    arg2[2] = zx.d(*ecx_9)
                    *arg2 = &ecx_9[1]
                else
                    arg2[3].b = 0
                
                if (arg2[2] != 0x3a)
                    goto label_66d2a1
                
                if (sub_66be90(&var_4c, arg2) != 0)
                    int32_t var_2c
                    char* eax_12 = sub_66ffa0(&var_5c, &var_2c)
                    var_8_3.b = 4
                    void** eax_13
                    int32_t** ecx_13
                    eax_13, ecx_13 = sub_6700c0(esi_1, eax_12)
                    void** esi_2 = eax_13
                    
                    if (esi_2 == *var_38)
                    label_66d1c8:
                        int32_t** var_80_5 = ecx_13
                        var_30 = eax_12
                        int32_t** var_84_1 = &var_30
                        int32_t* eax_18 = sub_66f8e0(ecx_13)
                        sub_66fcf0(var_38, &var_3c, esi_2, &eax_18[4], eax_18)
                        esi_2 = var_3c
                    else
                        int32_t* edx_2 = &esi_2[4]
                        int32_t eax_15 = edx_2[4]
                        int32_t var_34_1 = eax_15
                        
                        if (esi_2[9] u>= 0x10)
                            edx_2 = *edx_2
                        
                        int32_t ecx_14 = *(eax_12 + 0x10)
                        
                        if (*(eax_12 + 0x14) u< 0x10)
                            var_30 = eax_12
                        else
                            var_30 = *eax_12
                            eax_15 = var_34_1
                        
                        if (ecx_14 u< var_34_1)
                            eax_15 = ecx_14
                        
                        int32_t eax_17
                        eax_17, ecx_13 = sub_6701a0(eax_15, edx_2, var_30, eax_15)
                        bool cond:2_1 = eax_17 s< 0
                        
                        if (eax_17 == 0)
                            ecx_13 = *(eax_12 + 0x10)
                            
                            if (ecx_13 u>= var_34_1)
                                eax_17.b = ecx_13 != var_34_1
                            else
                                eax_17 = 0xffffffff
                            
                            cond:2_1 = eax_17 s< 0
                        
                        eax_17.b = cond:2_1
                        
                        if (eax_17.b != 0)
                            goto label_66d1c8
                    
                    var_30 = &esi_2[0xa]
                    
                    if (&esi_2[0xa] != &var_4c)
                        sub_670c00(&esi_2[0xa])
                        void* var_34_2 = &esi_2[0xa]
                        var_8_3.b = 5
                        
                        if (esi_2 != 0xffffffd8)
                            sub_6703f0(&esi_2[0xa], &var_4c)
                    
                    int32_t var_18
                    
                    if (var_18 u>= 0x10)
                        j__free(var_2c)
                    
                    sub_670c00(&var_4c)
                    int32_t var_8_4 = 0xffffffff
                    sub_670c00(&var_5c)
                    sub_66c1d0(arg2)
                    
                    if (arg2[3].b == 0)
                        char* ecx_23 = *arg2
                        
                        if (ecx_23 != arg2[1])
                            if (arg2[2] == 0xa)
                                arg2[4] += 1
                            
                            arg2[2] = zx.d(*ecx_23)
                            *arg2 = &ecx_23[1]
                            goto label_66d271
                        
                        arg2[2] = 0xffffffff
                    else
                        arg2[3].b = 0
                    label_66d271:
                        
                        if (arg2[2] == 0x2c)
                            esi_1 = var_38
                            continue
                    
                    if (arg2[2] != 0xffffffff)
                        arg2[3].b = 1
                    
                    result = sub_66d700(arg2, 0x7d)
                    break
        
        sub_670c00(&var_4c)
        sub_670c00(&var_5c)
        result = 0
        break
else
    result = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
