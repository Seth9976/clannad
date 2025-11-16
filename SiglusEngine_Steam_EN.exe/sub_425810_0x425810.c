// 函数: sub_425810
// 地址: 0x425810
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg4
char* eax = arg3
char* var_8 = eax

if (ebx != 0)
    ebx = 1

char* edx = eax

if (eax != 0)
    while (true)
        eax.b = *edx
        
        if (eax.b u>= 0x80 && (eax.b u< 0xa0 || eax.b u> 0xdf) && eax.b u< 0xfe)
            edx = &edx[2]
            continue
        
        if (eax.b == 0)
            break
        
        if (eax.b u>= 0x61 && eax.b u<= 0x7a)
            eax.b -= 0x20
            *edx = eax.b
        
        edx = &edx[1]
    
    eax = var_8

void* esi = &data_1374760
int32_t result = 0

while (true)
    if (*(esi + 0x4c) s> 0 && *(esi + 0x28) == arg2
            && (*(esi + 0x40) == ebx || *(esi + 0x44) == ebx) && sub_4d0f10(esi + 4, eax) == 0)
        if (arg5 == 0)
            *(esi + 0x4c) += 1
            
            if (arg6 != 0 && data_7037e8 != 0)
                sub_419520(var_8, 1)
        
        return result
    
    result += 1
    esi += 0x74
    
    if (result s>= 0x200)
        break
    
    eax = var_8

return 0xffffffff
