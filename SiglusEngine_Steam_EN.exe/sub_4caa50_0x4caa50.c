// 函数: sub_4caa50
// 地址: 0x4caa50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* ebx = arg3
int32_t var_14 = 0
uint32_t var_c = 0
sub_4ca1e0(arg2, arg2, ebx, arg4, &var_14, &var_c, arg7)
int32_t var_18 = 0
BOOL var_10 = 0
int32_t i_1 = arg2 * arg4
uint32_t eax_3 = i_1 << 2
sub_4d6960(eax_3, &var_10, &var_18, eax_3, arg7)
BOOL eax_4 = var_10
uint32_t edx_1 = var_c

if (i_1 s> 0)
    int32_t i
    
    do
        uint32_t ecx_2 = zx.d(*ebx)
        uint32_t esi_2 = zx.d(*edx_1) - ecx_2
        var_c = ecx_2
        int32_t ecx_3
        
        if (esi_2 + 0xf u> 0x1e)
            uint32_t ecx_4 = var_c
            int32_t esi_3 = esi_2 s>> 1
            ecx_3 = ecx_4 - esi_3
            
            if (ecx_4 - esi_3 s< 0)
                ecx_3 = 0
            else if (ecx_3 s> 0xff)
                ecx_3 = 0xff
        else
            ecx_3.b = *ebx
        
        *eax_4 = ecx_3.b
        uint32_t ecx_5 = zx.d(ebx[1])
        uint32_t esi_5 = zx.d(*(edx_1 + 1)) - ecx_5
        var_c = ecx_5
        int32_t ecx_6
        
        if (esi_5 + 0xf u> 0x1e)
            uint32_t ecx_7 = var_c
            int32_t esi_6 = esi_5 s>> 1
            ecx_6 = ecx_7 - esi_6
            
            if (ecx_7 - esi_6 s< 0)
                ecx_6 = 0
            else if (ecx_6 s> 0xff)
                ecx_6 = 0xff
        else
            ecx_6.b = ebx[1]
        
        *(eax_4 + 1) = ecx_6.b
        uint32_t ecx_8 = zx.d(ebx[2])
        uint32_t esi_8 = zx.d(*(edx_1 + 2)) - ecx_8
        var_c = ecx_8
        int32_t ecx_9
        
        if (esi_8 + 0xf u> 0x1e)
            uint32_t ecx_10 = var_c
            int32_t esi_9 = esi_8 s>> 1
            ecx_9 = ecx_10 - esi_9
            
            if (ecx_10 - esi_9 s< 0)
                ecx_9 = 0
            else if (ecx_9 s> 0xff)
                ecx_9 = 0xff
        else
            ecx_9.b = ebx[2]
        
        *(eax_4 + 2) = ecx_9.b
        uint32_t ecx_11 = zx.d(ebx[3])
        uint32_t esi_11 = zx.d(*(edx_1 + 3)) - ecx_11
        var_c = ecx_11
        int32_t ecx_12
        
        if (esi_11 + 0xf u> 0x1e)
            uint32_t ecx_13 = var_c
            int32_t esi_12 = esi_11 s>> 1
            ecx_12 = ecx_13 - esi_12
            
            if (ecx_13 - esi_12 s< 0)
                ecx_12 = 0
            else if (ecx_12 s> 0xff)
                ecx_12 = 0xff
        else
            ecx_12.b = ebx[3]
        
        *(eax_4 + 3) = ecx_12.b
        ebx = &ebx[4]
        eax_4 += 4
        edx_1 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)

sub_4d6c40(&var_14, &var_c)
*arg5 = var_18
*arg6 = var_10
return arg6
