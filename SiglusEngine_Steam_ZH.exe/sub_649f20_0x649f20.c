// 函数: sub_649f20
// 地址: 0x649f20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = arg4 * 2

if (arg2 s<= 0 || eax_1 s<= 0)
    eax_1.b = 0
    return eax_1

arg3[4] = eax_1
arg3[3] = arg2
sub_5979b0(arg3, (eax_1 * arg2) << 2)
int32_t ebx = *arg3

if (ebx == arg3[1])
    ebx = 0

int32_t edi = *arg5

if (edi == arg5[1])
    edi = 0

sub_6c97b0(0, arg3[3], ebx, arg3[4], edi, arg5[3], arg5[4], 0, 0)
int32_t eax_5
int32_t edx_2
edx_2:eax_5 = sx.q(arg2)
sub_6c97b0(arg3, arg3[3], ebx, arg3[4], edi, arg5[3], arg5[4], neg.d((eax_5 - edx_2) s>> 1), arg4)
int32_t eax_11
int32_t edx_4
edx_4:eax_11 = sx.q(arg2)
sub_6c97b0(arg3, arg3[3], ebx, arg3[4], edi, arg5[3], arg5[4], (eax_11 - edx_4) s>> 1, arg4)
int32_t eax_15
eax_15.b = 1
return eax_15
