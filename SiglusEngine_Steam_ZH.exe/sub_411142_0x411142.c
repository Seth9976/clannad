// 函数: sub_411142
// 地址: 0x411142
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
int32_t* eax = arg1[0x9c]

if (eax != 0)
    return (*(*eax + 8))(eax)

int32_t ecx_1 = arg1[0x9b]
arg1[0x9b] = ecx_1 - 1

if (ecx_1 == 1)
    sub_40b6a2(arg1)
    j__free(arg1)

return ecx_1 - 1
