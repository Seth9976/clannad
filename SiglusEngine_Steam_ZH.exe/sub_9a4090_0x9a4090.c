// 函数: sub_9a4090
// 地址: 0x9a4090
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = *(arg3 + 8)
int32_t ebx_1 = *(arg3 + 4) - 6
int32_t* var_20 = arg2
int32_t esi = arg4

if (ebx_1 s> 0)
    sub_9a4330(eax, arg2, eax, esi)

int32_t i = ebx_1 - 1
int32_t ecx_1 = 1
int32_t var_8 = 1
int32_t i_2 = i

if (i s> 0)
    int32_t j_2 = 2
    int32_t j_3 = 2
    
    do
        if (j_2 s> 0)
            int32_t j_1 = j_2
            int32_t eax_3 = esi s>> ecx_1.b
            int32_t* esi_1 = arg2
            int32_t var_14_1 = eax_3
            int32_t edi_1 = eax_3
            int32_t j
            
            do
                sub_9a4160(eax_3, esi_1, eax, edi_1, 4 << ecx_1.b)
                eax_3 = edi_1 << 2
                esi_1 += eax_3
                j = j_1
                j_1 -= 1
            while (j != 1)
            j_2 = j_3
            arg2 = var_20
            i = i_2
            ecx_1 = var_8
        
        esi = arg4
        i -= 1
        ecx_1 += 1
        j_2 = rol.d(j_2, 1)
        var_8 = ecx_1
        j_3 = j_2
        i_2 = i
    while (i s> 0)

int32_t result = arg4

if (result s> 0)
    result = ((result - 1) u>> 5) + 1
    int32_t i_1
    
    do
        sub_9a44f0(arg2)
        arg2 -= 0xffffff80
        i_1 = result
        result -= 1
    while (i_1 != 1)

return result
