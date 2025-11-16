// 函数: sub_6c03b0
// 地址: 0x6c03b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8
int32_t* eax = &var_8
int32_t ecx_1 = arg5 - arg3
int32_t var_c = ecx_1
int32_t edi = arg2[2]
int32_t edx_1 = edi - *arg2
var_8 = edx_1

if (ecx_1 s>= edx_1)
    eax = &var_c

int32_t ecx_3 = arg6 - arg4
int32_t ebx = arg2[3]
int32_t edx_3 = ebx - arg2[1]
int32_t var_10 = ecx_3
var_8 = *eax
int32_t* eax_2 = &var_c

if (ecx_3 s>= edx_3)
    eax_2 = &var_10

var_c = edx_3
int32_t ecx_4 = *eax_2
int32_t eax_4 = arg1 - 1

switch (eax_4)
    case 0
        *arg2 = edi - var_8
    case 1
        eax_4 = var_8 + *arg2
        arg2[2] = eax_4
    case 2
        arg2[1] = ebx - ecx_4
    case 3
        arg2[1] = ebx - ecx_4
        *arg2 = edi - var_8
    case 4
        arg2[1] = ebx - ecx_4
        eax_4 = var_8 + *arg2
        arg2[2] = eax_4
    case 5
        int32_t eax_6 = arg2[1] + ecx_4
        arg2[3] = eax_6
        return eax_6
    case 6
        int32_t eax_7 = arg2[1]
        *arg2 = edi - var_8
        int32_t eax_8 = eax_7 + ecx_4
        arg2[3] = eax_8
        return eax_8
    case 7
        arg2[2] = var_8 + *arg2
        int32_t eax_12 = arg2[1] + ecx_4
        arg2[3] = eax_12
        return eax_12

return eax_4
