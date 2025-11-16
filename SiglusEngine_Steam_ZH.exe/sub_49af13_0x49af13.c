// 函数: sub_49af13
// 地址: 0x49af13
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t esi
int32_t var_c = esi
float esi_1 = arg6
int32_t i_1 = esi_1 << 2
int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg1)
arg6.w = temp0
int16_t x87control
int16_t x87status_1
x87control, x87status_1 = __fldcw_memmem16(arg6.w | 0xc00)

if (i_1 u> 0)
    int32_t* eax_3 = arg5
    float* ecx_2 = arg4 - eax_3
    int32_t edi
    int32_t var_10_1 = edi
    int32_t i
    
    do
        *eax_3 = int.d(fconvert.t(fconvert.s(fconvert.t(*(ecx_2 + eax_3)))))
        eax_3 = &eax_3[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16(arg6.w)
return (*(*arg2 + 0x1bc))(arg2, arg3, arg4, esi_1)
