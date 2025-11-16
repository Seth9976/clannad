// 函数: sub_4c6e40
// 地址: 0x4c6e40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_c = ecx
int32_t ecx_1 = arg5
int32_t ebx = arg3
void* esi = arg2

if (esi s<= 0)
    esi = 0x10

int32_t eax = arg4

if (ebx s<= 0xffffffff)
    ebx = data_131d2c8

if (eax s<= 0xffffffff)
    eax = data_1af44a0

if (ecx_1 s<= 0xffffffff)
    ecx_1 = data_1af449c

if (esi s< 8)
    esi = 8
else if (esi s> 0x100)
    esi = 0x100

int32_t eax_1

if (data_1c04200 == esi && data_13740ac == ebx && data_1c041fc == eax && data_1c041f8 == ecx_1)
    eax_1 = sub_4d0f10(0x1c041d4, &data_1af44a4)

int32_t i

if (data_1c04200 != esi || data_13740ac != ebx || data_1c041fc != eax || data_1c041f8 != ecx_1
        || eax_1 != 0)
    int32_t var_1c_1 = arg6
    char ecx_5
    
    for (i = sub_4c5f40(eax, esi, &data_1af44a4, ebx, eax, ecx_1, ecx_1.b); i != 0; 
            i = sub_4c5f40(i, esi, &data_1af44a4, data_131d2c8, data_1af44a0, data_1af449c, ecx_5))
        i, ecx_5 = sub_4c6c70()
        
        if (i == 0)
            break
        
        int32_t var_1c_2 = arg6
else
    i = data_20a1b9c
    
    if (i != 0xffffffff)
        int32_t ecx_4 = i * 0xf
        i = *((ecx_4 << 2) + &data_20ae9c4)
        
        if (i s< 0x186a0)
            *((ecx_4 << 2) + &data_20ae9c4) = i + 1
            return i + 1

return i
