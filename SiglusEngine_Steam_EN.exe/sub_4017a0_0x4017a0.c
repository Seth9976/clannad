// 函数: sub_4017a0
// 地址: 0x4017a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t edx = arg6
uint32_t ebx = arg4
int32_t ebp = arg7
int32_t esi = arg5
int32_t edi = ebp
uint32_t var_28 = edx
int32_t var_24 = edi
uint32_t var_20 = edx
int32_t var_1c = ebp
void var_10

if (esi s<= ebp && (esi s< ebp || ebx u< edx))
    while (true)
        int32_t eax_2 = sbb.d(edi, esi, edx u< ebx)
        uint32_t ebp_1
        
        if (eax_2 s> 0 || (eax_2 s>= 0 && edx - ebx u>= 0x2134))
            uint32_t eax_3
            int32_t edx_2
            eax_3, edx_2 = __alldiv(edx + ebx, adc.d(edi, esi, edx + ebx u< edx), 2, 0)
            ebp_1 = eax_3
            arg5 = edx_2
        else
            ebp_1 = ebx
            arg5 = esi
        
        sub_401760(arg1, ebp_1, arg5)
        uint32_t eax_5
        int32_t edx_3
        eax_5, edx_3 = sub_4013c0(arg1, &var_10, 0xffffffff, 0xffffffff)
        
        if (eax_5 == 0xffffff80 && edx_3 == 0xffffffff)
            return 0xffffff80
        
        int32_t eax_6
        
        if (edx_3 s>= 0 && (edx_3 s> 0 || eax_5 u>= 0))
            eax_6 = sub_40ffd0(&var_10)
        
        if (edx_3 s< 0 || (edx_3 s<= 0 && eax_5 u< 0) || eax_6 != arg8)
            var_28 = ebp_1
            var_24 = arg5
            
            if (edx_3 s>= 0 && (edx_3 s> 0 || eax_5 u>= 0))
                var_20 = eax_5
                var_1c = edx_3
        else
            int32_t var_4
            int32_t eax_8
            int32_t edx_4
            edx_4:eax_8 = sx.q(var_4)
            int32_t var_c
            int32_t eax_10
            int32_t edx_5
            edx_5:eax_10 = sx.q(var_c)
            int32_t ebx_2 = eax_8 + eax_10
            ebx = ebx_2 + eax_5
            esi = adc.d(adc.d(edx_4, edx_5, eax_8 + eax_10 u< eax_8), edx_3, ebx_2 + eax_5 u< ebx_2)
        
        if (esi s>= var_24)
            if (esi s> var_24)
                break
            
            if (ebx u>= var_28)
                break
        
        edx = var_28
        edi = var_24
    
    ebp = arg7

sub_401760(arg1, var_20, var_1c)
int32_t result
int32_t edx_7
result, edx_7 = sub_4013c0(arg1, &var_10, 0xffffffff, 0xffffffff)

if (result == 0xffffff80 && edx_7 == 0xffffffff)
    return result

int32_t esi_3

if (esi s> ebp)
label_401963:
    arg1[0xd] = arg9 + 1
    int32_t eax_17 = _malloc(((arg9 + 1) << 3) + 8)
    int32_t edx_11 = arg1[0xd]
    arg1[0xe] = eax_17
    arg1[0x10] = _malloc(edx_11 << 2)
    int32_t eax_19 = arg1[0xe]
    *(eax_19 + ((arg9 + 1) << 3)) = ebx
    *(eax_19 + ((arg9 + 1) << 3) + 4) = esi
    esi_3 = arg9
label_401996:
    int32_t ecx_9 = arg1[0xe]
    *(ecx_9 + (esi_3 << 3)) = arg2
    *(ecx_9 + (esi_3 << 3) + 4) = arg3
    *(arg1[0x10] + (esi_3 << 2)) = arg8
    return 0

if (esi s< ebp)
    if (edx_7 s< 0 || (edx_7 s<= 0 && result u< 0))
        goto label_401963
else if (ebx u>= arg6 || edx_7 s< 0 || (edx_7 s<= 0 && result u< 0))
    goto label_401963

esi_3 = arg9
int32_t eax_12 = sub_40ffd0(&var_10)

if (sub_4017a0(arg1, var_20, var_1c, arg1[2], arg1[3], arg6, ebp, eax_12, esi_3 + 1) != 0xffffff80)
    goto label_401996

return 0xffffff80
