// 函数: sub_635890
// 地址: 0x635890
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = data_bac4a0
int32_t edx = arg3

if (*(eax + 0xcc) == 0)
    eax = data_bac484
    
    if (*(eax + 0x138) == 0)
        eax = data_bac498
        arg3.b = *(eax + 2) == 0
    else
        arg3.b = 0
else
    arg3.b = 0

if (edx == 0x100)
    if (sub_635240(eax, arg2, arg3.b, arg4) != 0)
        return 1
else if (edx == 0x102)
    if (sub_635430(eax, arg2, arg3.b, arg4) != 0)
        return 1
else if (edx != 0x101)
    if (sub_635790(eax, edx, arg3.b, arg2, arg4) != 0)
        return 1
else if (sub_6355a0(eax, arg2, arg3.b, arg4) != 0)
    return 1

return 0
