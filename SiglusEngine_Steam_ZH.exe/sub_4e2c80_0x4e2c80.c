// 函数: sub_4e2c80
// 地址: 0x4e2c80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
int32_t ecx
int32_t result = sub_762e12(ecx)
arg2[3] = result

if (result == 0)
    void* eax = *arg1
    *(eax + 0x14) = 0x3f
    _strncpy(eax + 0x18, &data_b0018c, 0x50)
    result = (**arg1)(arg1)

*arg2 = sub_4e2ba0
arg2[1] = sub_4e2c00
arg2[2] = sub_4e2c60
return result
