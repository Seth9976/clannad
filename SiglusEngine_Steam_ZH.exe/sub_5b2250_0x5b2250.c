// 函数: sub_5b2250
// 地址: 0x5b2250
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3

if (arg3 == arg2)
    return arg4

int32_t* edi = arg4
int32_t* ebx = arg3 + 4
arg4 = edi

do
    *edi = ebx[-1]
    edi[1] = *ebx
    edi[2] = ebx[1]
    
    if (&edi[3] != &ebx[2])
        sub_52e3c0(&edi[3], &ebx[2], 0, 0xffffffff)
    
    __builtin_memcpy(&edi[9], &ebx[8], 0x80)
    void* eax_6
    
    if (ebx == 0xffffff60)
        eax_6 = nullptr
    else
        eax_6 = &ebx[0x29]
    
    sub_5b1750(&arg4[0x2a], eax_6)
    arg4[0x57] = ebx[0x56]
    int32_t* ecx_3 = ebx[0x57]
    int32_t eax_9
    
    if (ecx_3 == 0)
        eax_9 = 0
    else
        eax_9 = (*(*ecx_3 + 8))()
    
    int32_t* ecx_4 = arg4[0x58]
    arg4[0x58] = eax_9
    
    if (ecx_4 != 0)
        (**ecx_4)(1)
    
    ebx = &ebx[0x59]
    edi = &arg4[0x59]
    arg4 = edi
while (&ebx[-1] != arg2)

return edi
