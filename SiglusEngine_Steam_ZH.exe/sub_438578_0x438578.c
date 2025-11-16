// 函数: sub_438578
// 地址: 0x438578
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_30 = edi
void*** result

if (arg2 == 0 || *(arg2 + 4) != 3 || *(arg2 + 0x10) != 2 || arg3 == 0 || *(arg3 + 4) != 3
        || *(arg3 + 0x10) != 9)
    result = nullptr
else
    void*** eax = sub_42cfa1(0x30)
    void*** result_1
    
    if (eax == 0)
        result_1 = nullptr
    else
        result_1 = sub_46b809(eax, arg3 + 0x10)
    
    if (result_1 == 0)
        result = nullptr
    else
        int32_t edi_2 = *(arg2 + 0x18)
        char* ebx_2 = *(arg3 + 0x18)
        int32_t var_34_2 = edi_2
        void var_18
        sub_74aa1b(&var_18, 0x10, "%u")
        void* eax_2 = &var_18
        char var_9_1 = 0
        char i
        
        do
            i = *eax_2
            eax_2 += 1
        while (i != 0)
        
        char* ecx_1 = ebx_2
        void* esi_1 = &ecx_1[1]
        
        do
            i = *ecx_1
            ecx_1 = &ecx_1[1]
        while (i != 0)
        
        void var_17
        char* eax_5 = sub_46b465(*(arg1 + 4), ecx_1 - esi_1 + eax_2 - &var_17 + 1, 1)
        
        if (eax_5 == 0)
            result = nullptr
        else
            char* var_34_3 = ebx_2
            int32_t var_38_2 = edi_2
            sub_74aa1b(eax_5, ecx_1 - esi_1 + eax_2 - &var_17 + 1, "%u%s")
            result = result_1
            *(eax_5 + ecx_1 - esi_1 + eax_2 - &var_17 + 1 - 1) = 0
            result[6] = eax_5

sub_745f2b(__security_cookie_1)
return result
