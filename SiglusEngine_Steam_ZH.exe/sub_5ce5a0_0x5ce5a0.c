// 函数: sub_5ce5a0
// 地址: 0x5ce5a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bbe40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_bac484
void* var_14 = esi
void* result = data_bac510

if (*(data_bac4a8 + 4) s> *(result + 0x10b9c))
    int32_t* var_2c = nullptr
    int32_t var_28_1 = 0
    var_2c = sub_5d4eb0()
    int32_t var_8_1 = 0
    int32_t ecx_1 = *(esi + 0x118)
    int32_t* ebx_1 = data_bac4a8
    int32_t var_18_1 = ecx_1 - 1
    char var_24
    
    if (ecx_1 - 1 s>= 0)
        int32_t ecx_3 = ecx_1 - 1
        bool cond:4_1
        
        do
            int64_t* eax_9 = *(esi + 0x10c)
                + mods.dp.d(sx.q(*(esi + 0x11c) + ecx_3), *(esi + 0x108)) * 0x2e60 + 0x2e50
            var_24.d = eax_9
            int32_t edx_2
            edx_2.w = *(eax_9 + 0xc)
            int32_t ecx_6 = eax_9[1].d
            int64_t var_44 = *eax_9
            int32_t var_3c_1 = ecx_6
            int16_t var_38_1 = edx_2.w
            uint32_t eax_11
            
            if (var_44.w == 0)
                eax_11 = var_44.d u>> 0x10
            
            if (var_44.w != 0 || eax_11 != 0 || var_44:4.w != eax_11.w || var_44:4.d u>> 0x10 != 0
                    || ecx_6.w != 0 || ecx_6 u>> 0x10 != 0 || edx_2.w != 0)
                void** eax_14 = sub_5d48a0(ebx_1, &var_44)
                void** edi_1 = *ebx_1
                char eax_15
                
                if (eax_14 != edi_1)
                    eax_15 = sub_5cd6f0(&var_44, &eax_14[4])
                
                void*** eax_16
                
                if (eax_14 == edi_1 || eax_15 != 0)
                    void** var_20 = edi_1
                    eax_16 = &var_20
                else
                    void** var_1c = eax_14
                    eax_16 = &var_1c
                
                void** eax_17 = *eax_16
                
                if (eax_17 != edi_1)
                    int64_t* edx_4 = var_24.d
                    int32_t var_54_1 = edx_4[1].d
                    int32_t ecx_10
                    ecx_10.w = *(edx_4 + 0xc)
                    int16_t var_50_1 = ecx_10.w
                    int32_t ecx_11 = eax_17[8]
                    int32_t* eax_18 = eax_17[9]
                    int64_t var_5c = *edx_4
                    int32_t var_4c_1 = ecx_11
                    
                    if (eax_18 != 0)
                        eax_18[1]
                        eax_18[1] += 1
                    
                    var_8_1.b = 1
                    int32_t* eax_20
                    void* ecx_13
                    eax_20, ecx_13 = sub_5d5070(&var_5c)
                    int32_t* var_70_3 = eax_20
                    void* var_74_1 = &eax_20[4]
                    void* var_34
                    sub_5d50d0(&var_2c, &var_34, ecx_13)
                    var_8_1.b = 0
                    
                    if (eax_18 != 0)
                        bool cond:2_1 = eax_18[1] != 1
                        eax_18[1]
                        eax_18[1] -= 1
                        
                        if (not(cond:2_1))
                            (*(*eax_18 + 4))(eax_2)
                            bool cond:3_1 = eax_18[2] != 1
                            eax_18[2]
                            eax_18[2] -= 1
                            
                            if (not(cond:3_1))
                                (*(*eax_18 + 8))()
                    
                    ebx_1 = data_bac4a8
                    
                    if (var_28_1 s>= *(data_bac510 + 0x10b9c))
                        break
                
                esi = var_14
            
            ecx_3 = var_18_1 - 1
            cond:4_1 = var_18_1 - 1 s>= 0
            var_18_1 = ecx_3
        while (cond:4_1)
    
    if (ebx_1 != &var_2c)
        sub_5d4e30(ebx_1, *(*ebx_1 + 4))
        void* eax_28 = *ebx_1
        var_24 = 0
        int32_t var_70_5 = var_24.d
        *(eax_28 + 4) = eax_28
        int32_t* eax_29 = *ebx_1
        *eax_29 = eax_29
        void* eax_30 = *ebx_1
        *(eax_30 + 8) = eax_30
        ebx_1[1] = 0
        sub_5d4fb0(ebx_1, &var_2c, var_70_5)
    
    int32_t var_8_2 = 0xffffffff
    int32_t* eax_31 = var_2c
    sub_5d47e0(&var_2c, &var_24, *eax_31, eax_31)
    result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
return result
