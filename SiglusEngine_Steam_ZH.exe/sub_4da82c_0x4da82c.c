// 函数: sub_4da82c
// 地址: 0x4da82c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
ecx.b = *(arg1 + 0x56)
*(zx.d(arg1[0x15].w) + arg1 + 0x1f74) = ecx.b
int32_t edi
int32_t var_18 = edi
sub_4d9d51(&arg1[0x19])
sub_4d9d51(&arg1[0x20])
sub_4d9ef2(arg1[0x1f], &arg1[0x2e], arg1)
sub_4d9ef2(arg1[0x26], &arg1[0x26b], arg1)
sub_4d9d51(&arg1[0x27])
void* esi = 0x12

while (*(&arg1[zx.d(*(esi + 0xacda84))] + 0xf9a) == 0)
    esi -= 1
    
    if (esi s< 3)
        break

int32_t ecx_3 = arg1[0x17]
arg1[0x16] += esi * 3 + 0x11
uint32_t eax_10 = (arg1[0x16] + 0xa) u>> 3
uint32_t ecx_5 = (ecx_3 + 0xa) u>> 3

if (ecx_5 u<= eax_10)
    eax_10 = ecx_5

if (arg3 + 2 u> eax_10 || arg2 == 0)
    int32_t eax_20
    
    if (ecx_5 != eax_10)
        sub_4d984c(arg1, arg4 + 4, 3)
        sub_4da0df(arg1, esi + 1, arg1[0x1f] + 1, arg1[0x26] + 1)
        sub_4da273(arg1, &arg1[0x2e], &arg1[0x26b])
        eax_20 = arg1[0x16]
    else
        sub_4d984c(arg1, arg4 + 2, 3)
        sub_4da273(arg1, &arg1[0x2a8], &arg1[0x3c8])
        eax_20 = arg1[0x17]
    
    arg1[0x18] += eax_20 + 3
else
    sub_4d984c(arg1, arg4, 3)
    arg1[0x18] = ((arg1[0x18] + 0xa) & 0xfffffff8) + ((arg3 + 2) << 3)
    sub_4d9997(arg3.w, arg1, arg2, 1)

sub_4d9a29(arg1)

if (arg4 != 0)
    sub_4d9913(arg1)
    arg1[0x18] += 7

return arg1[0x18] u>> 3
