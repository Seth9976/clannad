// 函数: sub_630a70
// 地址: 0x630a70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg1[1]
int32_t esi = *arg1
int32_t eax_1 = ecx - esi

if (eax_1 u> arg2)
    int32_t eax_2 = esi + arg2
    arg1[1] = eax_2
    return eax_2

if (eax_1 u< arg2)
    if (arg3 u>= ecx || esi u> arg3)
        sub_597940(arg1, esi - ecx + arg2)
    else
        sub_597940(arg1, esi - ecx + arg2)
        arg3 = &arg3[*arg1 - esi]
    
    char* ecx_3 = arg1[1]
    _memset(ecx_3, *arg3, *arg1 - ecx_3 + arg2)
    eax_1 = *arg1 + arg2
    arg1[1] = eax_1

return eax_1
