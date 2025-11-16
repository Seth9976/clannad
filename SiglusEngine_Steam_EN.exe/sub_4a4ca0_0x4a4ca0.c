// 函数: sub_4a4ca0
// 地址: 0x4a4ca0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
int32_t var_8 = ebx
int32_t esi = 0
int32_t eax = 0
char* ecx = arg3
bool cond:0_1

while (true)
    ebx.b = *ecx
    
    if (ebx.b == 0)
        eax += 1
        
        if (eax s< arg4)
            esi += 1
            cond:0_1 = esi s> arg2
            
            if (esi == arg2)
                break
            
            ecx = &ecx[1]
            continue
    else if (ebx.b u< 0x80 || (ebx.b u>= 0xa0 && ebx.b u<= 0xdf) || ebx.b u>= 0xfe)
        eax += 1
        
        if (eax s< arg4)
            ecx = &ecx[1]
            continue
    else
        eax += 2
        
        if (eax s< arg4)
            ecx = &ecx[2]
            continue
    
    cond:0_1 = esi s> arg2
    break

if (cond:0_1)
    return arg2

return esi
