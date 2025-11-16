// 函数: sub_42aa66
// 地址: 0x42aa66
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
void* edi_1 = arg2
int32_t ebx = 5

if (arg2 u>= *(arg1 + 4))
    return nullptr

uint32_t eax_2 = _tolower(sx.d(*arg2))

if (eax_2 == 0x66)
    ebx = 7
    edi_1 = &arg2[1]
else if (eax_2 == 0x68)
    ebx = 6
    edi_1 = &arg2[1]

if (arg3 != 0)
    *arg3 = ebx

return edi_1 - arg2
