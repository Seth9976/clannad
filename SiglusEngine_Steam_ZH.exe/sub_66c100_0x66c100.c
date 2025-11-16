// 函数: sub_66c100
// 地址: 0x66c100
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* var_8 = arg1
int16_t* ebx = arg1
int32_t* var_28
int32_t** esi = &var_28
void* eax = *(ebx + 0x10)
var_28 = nullptr

if (eax u> 8)
    int32_t ecx
    ecx.b = mulu.dp.d(eax, 2) u>> 0x20 != 0
    int32_t var_2c_1 = neg.d(ecx) | (eax * 2)
    int32_t** eax_2 = sub_7431ed()
    var_28 = eax_2
    arg1 = *ebx
    esi = eax_2

int32_t* eax_5
int32_t edx
eax_5, edx = sub_748840(esi, arg1, eax * 2)
sub_66d5d0(eax_5, edx, &var_8, arg3, arg4, var_28)
int16_t* eax_6 = var_8

if (eax_6 == arg4)
    *arg2 = arg4
    arg2[1] = arg4
    return arg2

int16_t* esi_1 = eax_6

if (*(ebx + 0x14) != 0)
    int16_t** ecx_6 = arg2
    ecx_6[1] = &eax_6[1]
    *ecx_6 = eax_6
    return ecx_6

do
    if (sub_66d690(ebx, *esi_1) == 0)
        break
    
    esi_1 = &esi_1[1]
while (esi_1 != arg4)

*arg2 = var_8
arg2[1] = esi_1
return arg2
