// 函数: sub_4c8760
// 地址: 0x4c8760
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* esi = data_20af158
char* ebx = arg2
char* var_10 = esi
int32_t eax = sub_4c8720(ebx)
int32_t temp0 = arg5 & 2
int32_t result = arg4

if (temp0 == 0 && eax s< result)
    int32_t ebx_2 = result - eax
    int32_t edi_2 = __builtin_memset(arg3 + esi, 0x20202020, ebx_2 u>> 2 << 2)
    esi = &esi[ebx_2]
    __builtin_memset(edi_2, 0x20, ebx_2 & 3)
    result = arg4
    data_20af158 = esi

uint32_t i = zx.d(*ebx)

if (i != 0)
    void* ecx_8 = esi - var_10
    
    do
        ebx = &ebx[1]
        *(esi + arg3) = i.b
        
        if (i s>= 0x80)
            if (i - 0xa0 u> 0x3f)
                int32_t eax_1
                eax_1.b = *ebx
                ecx_8 += 2
                *(esi + arg3 + 1) = eax_1.b
                esi = &esi[2]
                ebx = &ebx[1]
            else
                esi = &esi[1]
                ecx_8 += 1
            
            result = arg4
        else
            esi = &esi[1]
            ecx_8 += 1
        
        data_20af158 = esi
        
        if (result s> 0 && ecx_8 s>= result)
            break
        
        i = zx.d(*ebx)
    while (i != 0)

if (temp0 != 0 && eax s< result)
    int32_t eax_2 = result - eax
    arg4 = eax_2
    result = 0x20202020
    __builtin_memset(__builtin_memset(arg3 + esi, 0x20202020, eax_2 u>> 2 << 2), 0x20, eax_2 & 3)
    data_20af158 = &esi[eax_2]

return result
