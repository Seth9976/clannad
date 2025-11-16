// 函数: sub_594da0
// 地址: 0x594da0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b8308
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 4) != 0)
    int32_t var_5c = 0
    int32_t var_58_1 = 0
    int32_t var_54_1 = 0
    int32_t var_c_1 = 0
    void* eax_5 = data_bac458
    int32_t eax_6
    int32_t edx_1
    edx_1:eax_6 = muls.dp.d(0x2fa0be83, *(eax_5 + 0x15c) - *(eax_5 + 0x158))
    int32_t edx_2 = edx_1 s>> 6
    sub_5951c0(&var_5c, (edx_2 u>> 0x1f) + edx_2 + 1)
    int32_t* ebx_1 = data_bac458
    int32_t eax_10
    int32_t edx_4
    edx_4:eax_10 = muls.dp.d(0x2fa0be83, ebx_1[0x57] - ebx_1[0x56])
    int32_t edx_5 = edx_4 s>> 6
    
    if ((edx_5 u>> 0x1f) + edx_5 s> 0)
        int32_t esi_1 = var_5c
        int32_t* ecx_5 = nullptr
        int32_t i = 0
        int32_t edx_7
        
        do
            *(esi_1 + (i << 2)) = *(ecx_5 + ebx_1[0x56])
            i += 1
            int32_t eax_16
            int32_t edx_6
            edx_6:eax_16 = muls.dp.d(0x2fa0be83, ebx_1[0x57] - ebx_1[0x56])
            edx_7 = edx_6 s>> 6
            ecx_5 = &ecx_5[0x56]
        while (i s< (edx_7 u>> 0x1f) + edx_7)
    
    int32_t eax_17
    int32_t edx_8
    edx_8:eax_17 = muls.dp.d(0x2fa0be83, ebx_1[0x57] - ebx_1[0x56])
    int32_t edx_9 = edx_8 s>> 6
    int32_t edx_10 = var_5c
    *(edx_10 + (((edx_9 u>> 0x1f) + edx_9) << 2)) = *ebx_1
    int32_t ebx_4
    
    if (*(arg1 + 0xb8) == 0)
        ebx_4 = (var_58_1 - edx_10) s>> 2
    
    int32_t eax_21
    
    if (*(arg1 + 0xb8) != 0 || ebx_4 != (*(arg1 + 0x418) - *(arg1 + 0x414)) s>> 2)
        ebx_4 = (var_58_1 - edx_10) s>> 2
        eax_21 = *(data_bac4e0 + 0x30)
        
        if (eax_21 != 0)
            eax_21(*(arg1 + 0xe4), ebx_4, eax_4)
            edx_10 = var_5c
    
    int32_t esi_2 = 0
    
    if (ebx_4 s> 0)
        do
            if (*(arg1 + 0xb8) != 0 || esi_2 s>= (*(arg1 + 0x418) - *(arg1 + 0x414)) s>> 2)
                eax_21.b = 1
            else
                eax_21.b = 0
            
            int32_t var_20_1 = 7
            int32_t var_24_1 = 0
            int16_t var_34 = 0
            var_c_1.b = 1
            
            if (eax_21.b != 0 || *(edx_10 + (esi_2 << 2)) != *(*(arg1 + 0x414) + (esi_2 << 2)))
                eax_21 = *(edx_10 + (esi_2 << 2))
                
                if (eax_21 s>= 0 && eax_21 u< 0x35)
                    int16_t* edx_11 = (&data_ada6c0)[eax_21]
                    int32_t eax_25 = 0
                    int32_t var_38_1 = 7
                    int32_t var_3c_1 = 0
                    int16_t var_4c = 0
                    
                    if (*edx_11 != 0)
                        int16_t* eax_26 = edx_11
                        void* ecx_19
                        
                        do
                            ecx_19.w = *eax_26
                            eax_26 = &eax_26[1]
                        while (ecx_19.w != 0)
                        eax_25 = (eax_26 - &eax_26[1]) s>> 1
                    
                    sub_52e720(&var_4c, edx_11, eax_25)
                    var_c_1.b = 2
                    sub_52e3c0(&var_34, &var_4c, 0, 0xffffffff)
                    var_c_1.b = 1
                    
                    if (var_38_1 u>= 8)
                        j__free(var_4c.d)
                    
                    int32_t var_38_2 = 7
                    var_4c = 0
                    int32_t var_3c_2 = 0
                    eax_21 = *(data_bac4e0 + 0x34)
                    
                    if (eax_21 != 0)
                        eax_21(*(arg1 + 0xe4), esi_2, 0, &var_34, eax_4)
            
            var_c_1.b = 0
            
            if (var_20_1 u>= 8)
                j__free(var_34.d)
            
            edx_10 = var_5c
            esi_2 += 1
        while (esi_2 s< ebx_4)
    
    result = sub_5950b0(arg1 + 0x414, &var_5c)
    int32_t esi_3 = var_5c
    *(arg1 + 0xb8) = 0
    
    if (esi_3 != 0)
        result = j__free(esi_3)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_64)
return result
