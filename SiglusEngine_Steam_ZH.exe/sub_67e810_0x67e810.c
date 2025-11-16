// 函数: sub_67e810
// 地址: 0x67e810
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* eax
int32_t ecx
eax, ecx = sub_67f440(arg1, arg2)

if (eax == 0)
    eax.b = 0
    return eax

int32_t var_10_1 = ecx
int32_t* eax_1 = sub_55b0d0(arg1 + 0x3c, *(eax + 0x18))

if (eax_1 == 0)
    *arg3 = 0
    int32_t* eax_3
    eax_3.b = 1
    return eax_3

*arg3 = *eax_1
int32_t* eax_2
eax_2.b = 1
return eax_2
