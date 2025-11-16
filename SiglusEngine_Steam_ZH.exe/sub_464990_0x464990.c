// 函数: sub_464990
// 地址: 0x464990
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
arg1[1] = 0

if (arg2 != 0x3e)
    void* eax_1 = *arg1
    *(eax_1 + 0x14) = 0xc
    *(eax_1 + 0x18) = 0x3e
    *(eax_1 + 0x1c) = arg2
    (*eax_1)(arg1)

if (arg3 != 0x1d8)
    void* eax_2 = *arg1
    *(eax_2 + 0x14) = 0x15
    *(eax_2 + 0x18) = 0x1d8
    *(eax_2 + 0x1c) = arg3
    (*eax_2)(arg1)

int32_t* eax_3 = arg1[3]
int32_t edx = *arg1
__builtin_memset(arg1, 0, 0x1d8)
*arg1 = edx
arg1[3] = eax_3
arg1[4] = 1
sub_4983a0(arg1)
arg1[2] = 0
arg1[6] = 0
__builtin_memset(&arg1[0x2a], 0, 0x30)
arg1[0x4d] = 0
sub_466620(arg1)
int32_t (__stdcall** result)(int32_t* arg1) = sub_497870(arg1)
arg1[5] = 0xc8
return result
