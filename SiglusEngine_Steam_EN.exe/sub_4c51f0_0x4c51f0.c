// 函数: sub_4c51f0
// 地址: 0x4c51f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg3 u<= 0x1f)
    void* eax_5 = *(arg3 * 0x210 + 0x1bfffd4)
    
    if (eax_5 != 0)
        int32_t ebx = *(eax_5 + 4)
        
        if (ebx s<= 0)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return 0
        
        int32_t var_218 = ebx
        int32_t esi_1 = ebx s>> 1
        int32_t edi = 0
        char var_210[0x208]
        sub_4cfd70(&var_210, arg2)
        char (* ecx_5)[0x208] = &var_210
        
        while (true)
            char eax_9 = *ecx_5
            
            if (eax_9 u>= 0x80 && (eax_9 u< 0xa0 || eax_9 u> 0xdf) && eax_9 u< 0xfe)
                ecx_5 = &(*ecx_5)[2]
                continue
            
            if (eax_9 == 0)
                break
            
            if (eax_9 u>= 0x61 && eax_9 u<= 0x7a)
                *ecx_5 = eax_9 - 0x20
            
            ecx_5 = &(*ecx_5)[1]
        
        do
            int32_t eax_13 = sub_4d0f10(&var_210, eax_5 + 0xc + esi_1 * 0x3c)
            int32_t eax_14
            int32_t esi_2
            
            if (eax_13 s>= 0)
                if (eax_13 s<= 0)
                    if (arg4 != 0)
                        sub_4cfd70(arg4, arg3 * 0x210 + &data_1bfffd8)
                    
                    sub_5f02dd(eax_1 ^ &__saved_ebp)
                    return eax_5 + 0xc + esi_1 * 0x3c
                
                eax_14 = esi_1
                edi = esi_1
                esi_2 = esi_1 + var_218
            else
                eax_14 = esi_1
                var_218 = esi_1
                esi_2 = esi_1 + edi
            
            esi_1 = esi_2 u>> 1
            
            if (esi_1 == eax_14)
                break
        while (esi_1 u< ebx)
        
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 0

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
