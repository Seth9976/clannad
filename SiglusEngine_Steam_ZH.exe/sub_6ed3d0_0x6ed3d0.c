// 函数: sub_6ed3d0
// 地址: 0x6ed3d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg2 + 2
int16_t* esi_1 = arg5 + 4
int32_t i_1 = 8
char* var_c = arg1 + 2
void* edi = arg3 + 2
void* result = arg2 - arg3 - 2
void* result_1 = result
int32_t i

do
    int32_t ebx_3 = (zx.d(*(result + edi)) + zx.d(*(edi - 2))) s>> 1
    int32_t ecx_2 = sx.d(esi_1[-2]) + ebx_3
    void* edx_1
    edx_1.b = ecx_2 s> 0xff
    edx_1.b = neg.b(edx_1.b)
    edx_1.b |= esi_1[-2].b + ebx_3.b
    edx_1.b &= (ecx_2 s< 0) - 1
    var_c[0xfffffffe] = edx_1.b
    int32_t ebx_6 = (zx.d(*(var_8 - 1)) + zx.d(*(edi - 1))) s>> 1
    int32_t ecx_4 = sx.d(esi_1[-1]) + ebx_6
    edx_1.b = ecx_4 s> 0xff
    edx_1.b = neg.b(edx_1.b)
    edx_1.b |= esi_1[-1].b + ebx_6.b
    edx_1.b &= (ecx_4 s< 0) - 1
    var_c[0xffffffff] = edx_1.b
    int32_t ebx_9 = (zx.d(*var_8) + zx.d(*edi)) s>> 1
    int32_t ecx_6 = sx.d(*esi_1) + ebx_9
    edx_1.b = ecx_6 s> 0xff
    edx_1.b = neg.b(edx_1.b)
    edx_1.b |= *esi_1 + ebx_9.b
    edx_1.b &= (ecx_6 s< 0) - 1
    *var_c = edx_1.b
    int32_t ebx_12 = (zx.d(*(var_8 + 1)) + zx.d(*(edi + 1))) s>> 1
    int32_t ecx_8 = sx.d(esi_1[1]) + ebx_12
    edx_1.b = ecx_8 s> 0xff
    edx_1.b = neg.b(edx_1.b)
    edx_1.b |= esi_1[1].b + ebx_12.b
    edx_1.b &= (ecx_8 s< 0) - 1
    var_c[1] = edx_1.b
    int32_t ecx_9 = sx.d(esi_1[2])
    int32_t ebx_15 = (zx.d(*(var_8 + 2)) + zx.d(*(edi + 2))) s>> 1
    bool eax_20 = esi_1[2].b
    esi_1 = &esi_1[8]
    int32_t ecx_10 = ecx_9 + ebx_15
    edx_1.b = ecx_10 s> 0xff
    edx_1.b = neg.b(edx_1.b)
    edx_1.b |= eax_20 + ebx_15.b
    edx_1.b &= (ecx_10 s< 0) - 1
    var_c[2] = edx_1.b
    int32_t ebx_18 = (zx.d(*(var_8 + 3)) + zx.d(*(edi + 3))) s>> 1
    int32_t ecx_12 = sx.d(esi_1[-5]) + ebx_18
    edx_1.b = ecx_12 s> 0xff
    edx_1.b = neg.b(edx_1.b)
    edx_1.b |= esi_1[-5].b + ebx_18.b
    edx_1.b &= (ecx_12 s< 0) - 1
    var_c[3] = edx_1.b
    int32_t ebx_21 = (zx.d(*(var_8 + 4)) + zx.d(*(edi + 4))) s>> 1
    int32_t ecx_14 = sx.d(esi_1[-4]) + ebx_21
    edx_1.b = ecx_14 s> 0xff
    edx_1.b = neg.b(edx_1.b)
    edx_1.b |= esi_1[-4].b + ebx_21.b
    edx_1.b &= (ecx_14 s< 0) - 1
    var_c[4] = edx_1.b
    int32_t ebx_24 = (zx.d(*(var_8 + 5)) + zx.d(*(edi + 5))) s>> 1
    int32_t ecx_16 = sx.d(esi_1[-3]) + ebx_24
    edx_1.b = ecx_16 s> 0xff
    edx_1.b = neg.b(edx_1.b)
    edx_1.b |= esi_1[-3].b + ebx_24.b
    var_8 += arg4
    edi += arg4
    edx_1.b &= (ecx_16 s< 0) - 1
    var_c[5] = edx_1.b
    i = i_1
    i_1 -= 1
    var_c = &var_c[arg4]
    result = result_1
while (i != 1)
return result
