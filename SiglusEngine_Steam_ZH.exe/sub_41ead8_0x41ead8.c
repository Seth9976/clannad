// 函数: sub_41ead8
// 地址: 0x41ead8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = &data_ab7610
arg1[8] = *arg2
arg1[1] = arg2[1]
int32_t edi
int32_t var_24 = edi
arg1[0x18] = arg2[2]
arg1[0x19] = arg2[3]
__builtin_memcpy(&arg1[0xf], &arg2[0xa], 0x18)
int32_t eax_4 = 0xb4ebd0

if (arg2[0x10] == 0)
    eax_4 = 0xb4eb50

arg1[0xd] = eax_4
int32_t* eax_6 = arg3 u>> 3
arg1[0x1e] = eax_6
arg1[0x15] = 0
int32_t eax_7
eax_7.b = arg3 != 0
arg1[0x16] = 0
arg1[3] = eax_7
arg1[2] = arg4
arg1[6] = arg2[0x13]
int32_t eax_10 = arg1[1]
int32_t eax_11

if (eax_10 == 0x29 || eax_10 == 0x28)
    eax_11 = 1
else
    eax_11 = 0

bool cond:2 = arg1[6] == 0
arg1[7] = eax_11
arg1[0xe] = 0
arg1[4] = arg2[0x12]
arg1[5] = 0
arg1[0x17] = 0

if (not(cond:2))
    int32_t ecx = arg2[0x13]
    long double x87_r7_1 = fconvert.t(0.00392156886f)
    float var_14 = fconvert.s(float.t(zx.d((ecx u>> 8).b)) * x87_r7_1)
    float var_10_1 = fconvert.s(float.t(zx.d(ecx.b)) * x87_r7_1)
    float var_c_1 = fconvert.s(float.t(ecx u>> 0x18) * x87_r7_1)
    arg1[9] = fconvert.s(float.t(zx.d((ecx u>> 0x10).b)) * x87_r7_1)
    void* edi_3 = &arg1[0xa]
    float* esi_1 = &var_14
    *edi_3 = *esi_1
    void* edi_4 = edi_3 + 4
    void* esi_2 = &esi_1[1]
    *edi_4 = *esi_2
    *(edi_4 + 4) = *(esi_2 + 4)

if (arg4 != 2)
    goto label_41ebe3

if (arg1[1] != 0x3d)
    arg1[4] = 0
label_41ebe3:
    
    if (arg4 == 3)
        arg1[4] = 0

int32_t ecx_2 = arg1[0xf]
int32_t esi_5 = arg1[0x10]
int32_t edi_7 = arg1[0x12]
int32_t eax_21 = arg1[0x11] - ecx_2
arg1[0x1a] = eax_21
int32_t esi_6 = arg1[0x13]
arg1[0x1b] = edi_7 - esi_5
int32_t edi_9 = arg1[0x14]
arg1[0x1d] = eax_21 * eax_6
arg1[0x1c] = edi_9 - esi_6

if (eax_7 != 0)
    arg1[8] += ecx_2 * eax_6 + arg1[0x18] * arg1[0x10] + arg1[0x19] * esi_6
    arg1[0x11] = arg1[0x1a]
    arg1[0x12] = arg1[0x1b]
    int32_t ecx_8 = arg1[0x1c]
    arg1[0xf] = 0
    arg1[0x10] = 0
    arg1[0x13] = 0
    arg1[0x14] = ecx_8

if (arg2[0x11] == 0)
    return 

int32_t esi_9 = arg1[0x1a] + 2
int32_t edi_15 = sub_745f3f(esi_9 << 4)

if (edi_15 == 0)
    edi_15 = 0
else
    sub_61cdd0(edi_15, 0x10, esi_9, sub_52e900)

arg1[0x17] = edi_15

if (edi_15 != 0)
    int32_t ecx_13 = (arg1[0x1a] + 2) << 4
    __builtin_memset(__builtin_memset(edi_15, 0, ecx_13 u>> 2 << 2), 0, ecx_13 & 3)
