// 函数: sub_67e730
// 地址: 0x67e730
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* eax
int32_t ecx
eax, ecx = sub_67f440(arg1, arg2)

if (eax == 0)
    return 0xffffffff

int32_t var_18_1 = ecx
int32_t* eax_2
int32_t ecx_3
eax_2, ecx_3 = sub_55b0d0(arg1 + 0x3c, *(eax + 0x18))
int32_t result

if (eax_2 == 0)
    result = 0
else
    result = *eax_2

int32_t var_18_2 = ecx_3
int32_t* eax_3 = sub_55b0d0(arg1 + 0x3c, *(eax + 0x18))

if (eax_3 != 0)
    *eax_3 = arg3

return result
