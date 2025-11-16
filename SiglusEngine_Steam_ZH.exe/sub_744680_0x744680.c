// 函数: sub_744680
// 地址: 0x744680
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
int32_t var_8

if (esi == 0 || arg6 == 0)
    var_8 = 0xffffffff
else
    var_8 = arg6(esi, 0, 0, 1)

arg1 = nullptr
int32_t var_c = 0
int32_t ecx
int32_t edx
ecx, edx = _memset(arg2, 0, 0x2d0)
*arg2 = esi
*(arg2 + 0x2c0) = arg5
int32_t eax_3 = sub_6e4a50(&arg2[6])

if (arg3 != 0)
    ecx = sub_748840(sub_6e4ac0(&arg2[6], arg4), arg3, arg4)
    eax_3, edx = sub_6e4b50(&arg2[6], arg4)

if (var_8 != 0xffffffff)
    arg2[1] = 1

arg2[0xd] = 1
int32_t eax_5
int32_t ecx_1
int32_t edx_1
eax_5, edx_1, ecx_1 = sub_74c590(eax_3, edx, ecx, 1, 0x20)
arg2[0x12] = eax_5
arg2[0x13] = sub_74c590(eax_5, edx_1, ecx_1, 1, 0x10)
sub_6e4800(&arg2[0x1e], 0xffffffff)
int32_t result
int32_t ecx_2
int32_t edx_2
result, ecx_2, edx_2 = sub_743ac0(arg2, arg2[0x12], arg2[0x13], &arg1, &var_c, nullptr)
int32_t* esi_2 = arg1

if (result s>= 0)
    int32_t esi_3 = var_c
    int32_t* eax_9 = sub_74c590(esi_3 + 2, edx_2, ecx_2, esi_3 + 2, 4)
    int32_t ecx_3 = arg2[0x72]
    arg2[0x10] = eax_9
    arg2[0x17] = ecx_3
    *eax_9 = ecx_3
    *(arg2[0x10] + 4) = esi_3
    int32_t* eax_14
    int32_t ecx_4
    int32_t edx_3
    eax_14, ecx_4, edx_3 = sub_748840(arg2[0x10] + 8, arg1, esi_3 << 2)
    int32_t* eax_15
    int32_t ecx_5
    int32_t edx_4
    eax_15, edx_4, ecx_5 = sub_74c590(eax_14, edx_3, ecx_4, 1, 8)
    arg2[0xe] = eax_15
    arg2[0xf] = sub_74c590(eax_15, edx_4, ecx_5, 1, 8)
    *eax_15 = 0
    eax_15[1] = 0
    int32_t* ecx_6 = arg2[0xf]
    esi_2 = arg1
    *ecx_6 = arg2[2]
    ecx_6[1] = arg2[3]
    arg2[0x16] = 1
else
    *arg2 = 0
    sub_7448e0(arg2)

if (esi_2 != 0)
    _free(esi_2)

return result
