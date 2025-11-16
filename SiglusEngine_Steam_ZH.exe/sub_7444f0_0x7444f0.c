// 函数: sub_7444f0
// 地址: 0x7444f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
int32_t* var_18 = 0xffffffff
int32_t var_14 = 0xffffffff
int32_t* eax = esi[0xf]
void* var_28 = esi[0x12]
int32_t* edi = *eax
int32_t* ebx = eax[1]
int32_t* eax_1 = esi[0x72]
arg1 = eax_1
int32_t eax_2
int32_t edx
eax_2, edx = sub_7442b0(esi, var_28)
int32_t ecx = esi[0xb1]

if (ecx == 0 || esi[0xb3] == 0)
    esi[4] = 0xffffffff
    esi[5] = 0xffffffff
    esi[2] = 0xffffffff
    esi[3] = 0xffffffff
else
    ecx(*esi, 0, 0, 2)
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = sx.q(esi[0xb3](*esi))
    esi[4] = eax_5
    esi[5] = edx_1
    esi[2] = eax_5
    esi[3] = edx_1

int32_t ecx_1 = esi[5]

if ((esi[4] & ecx_1) == 0xffffffff)
    return 0xffffff7d

void* eax_9 = esi[0x10]
int32_t* result
int32_t* edx_3
result, edx_3 = sub_744070(esi, esi[4], ecx_1, eax_9 + 8, *(eax_9 + 4), &arg1, &var_18)

if (edx_3 s<= 0 && (edx_3 s< 0 || result u< 0))
    return result

void* eax_12 = esi[0x10]
int32_t var_28_2 = 0
int32_t var_2c_2 = *(eax_12 + 4)
void* var_30_1 = eax_12 + 8

if (sub_743250(esi, 0, nullptr, edi, ebx, result, edx_3, var_18, var_14, arg1) s< 0)
    return 0xffffff80

int32_t* eax_16 = esi[0xe]
*eax_16 = 0
eax_16[1] = 0
*esi[0x10] = eax_1
int32_t** eax_18 = esi[0xf]
*eax_18 = edi
eax_18[1] = ebx
int32_t* eax_19 = esi[0x11]
*eax_19 = eax_2
eax_19[1] = edx
void* eax_20 = esi[0x11]
int32_t temp1 = *(eax_20 + 8)
*(eax_20 + 8) -= eax_2
*(eax_20 + 0xc) = sbb.d(*(eax_20 + 0xc), edx, temp1 u< eax_2)
void* eax_21 = esi[0x11]
int32_t temp2 = *(eax_21 + 0xc)

if (temp2 s<= 0 && (temp2 s< 0 || *(eax_21 + 8) u< 0))
    *(eax_21 + 8) = 0
    *(eax_21 + 0xc) = 0

return sub_745630(esi, edi, ebx)
