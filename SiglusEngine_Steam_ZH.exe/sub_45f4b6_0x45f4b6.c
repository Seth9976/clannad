// 函数: sub_45f4b6
// 地址: 0x45f4b6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = *arg1
int32_t edi
int32_t var_1c = edi
int32_t var_8 = eax_1
int32_t* ebx_1

if (eax_1 != 0)
    int32_t eax_5 = *arg4
    ebx_1 = arg3
    
    if (*ebx_1 == eax_5)
        int32_t esi_2 = eax_5 * 2
        int32_t eax_8 = sub_745f3f(esi_2 * 0x44)
        int32_t var_c_1
        
        if (eax_8 == 0)
            var_c_1 = 0
        else
            sub_61cdd0(eax_8, 0x44, esi_2, sub_52e900)
            var_c_1 = eax_8
        
        int32_t eax_9 = var_c_1
        
        if (eax_9 == 0)
            return 0
        
        arg3 = nullptr
        
        if (*ebx_1 u> 0)
            int32_t edx_2 = var_8 - eax_9
            
            do
                arg3 += 1
                __builtin_memcpy(eax_9, edx_2 + eax_9, 0x44)
                eax_9 += 0x44
            while (arg3 u< *ebx_1)
        
        *arg4 = esi_2
        j__free(var_8)
        var_8 = var_c_1
else
    int32_t eax_2 = sub_745f3f(0x88)
    
    if (eax_2 == 0)
        var_8 = 0
    else
        sub_61cdd0(eax_2, 0x44, 2, sub_52e900)
        var_8 = eax_2
    
    if (var_8 == 0)
        return 0
    
    ebx_1 = arg3
    *ebx_1 = 0
    *arg4 = 2

__builtin_memcpy(*ebx_1 * 0x44 + var_8, arg2, 0x44)
*ebx_1 += 1
*arg1 = var_8
return 1
