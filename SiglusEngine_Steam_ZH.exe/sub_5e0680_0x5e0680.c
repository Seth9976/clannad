// 函数: sub_5e0680
// 地址: 0x5e0680
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg1
int32_t ebx = 0
int32_t result = (*(edi + 0x80) - *(edi + 0x7c)) s/ 0x8c

if (result s> 0)
    int32_t esi_2 = 0
    
    do
        int32_t var_14_1 = arg6
        sub_5e1960(*(edi + 0x7c) + esi_2, arg2, arg1.b, arg3, arg4, arg5)
        arg1 = *(edi + 0x80) - *(edi + 0x7c)
        ebx += 1
        esi_2 += 0x8c
        result = arg1 s/ 0x8c
    while (ebx s< result)

return result
