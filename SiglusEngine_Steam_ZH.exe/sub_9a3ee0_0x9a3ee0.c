// 函数: sub_9a3ee0
// 地址: 0x9a3ee0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = *arg1
int32_t* edi = arg1[3]
void* ebx = arg2 + (esi s>> 1 << 2)
void* var_8 = arg1[2] + (esi << 2)
float* esi_1 = ebx + 0xc
int32_t* edx = arg2 - edi
void* var_c = arg2 + 8

do
    int32_t ecx = *edi
    esi_1 -= 0x10
    int32_t eax_5 = edi[1]
    float xmm2_1 = *(ebx + (ecx << 2))
    float xmm0_1 = *(ebx + (eax_5 << 2) + 4)
    float xmm5_1 = *(ebx + (eax_5 << 2))
    int32_t* eax_6 = var_8
    float xmm3_2 = *(ebx + (ecx << 2) + 4) - xmm0_1
    float xmm2_2 = xmm2_1 + xmm5_1
    float xmm7_1 = eax_6[1]
    float xmm1_1 = *eax_6
    float xmm2_5 = (xmm0_1 f+ *(ebx + (ecx << 2) + 4)) * 0.5f
    float xmm4_3 = xmm1_1 * xmm2_2 + xmm7_1 * xmm3_2
    float xmm7_3 = xmm7_1 * xmm2_2 - xmm1_1 * xmm3_2
    float xmm1_5 = (xmm2_1 - xmm5_1) * 0.5f
    *(edx + edi) = xmm4_3 + xmm2_5
    esi_1[-1] = xmm2_5 - xmm4_3
    *(var_c - 4) = xmm7_3 + xmm1_5
    *esi_1 = xmm7_3 - xmm1_5
    int32_t ecx_1 = edi[2]
    int32_t eax_8 = edi[3]
    edi = &edi[4]
    float xmm1_6 = *(ebx + (ecx_1 << 2))
    float xmm0_8 = *(ebx + (eax_8 << 2) + 4)
    float xmm5_2 = *(ebx + (eax_8 << 2))
    float xmm3_4 = *(ebx + (ecx_1 << 2) + 4) - xmm0_8
    float xmm1_7 = xmm1_6 + xmm5_2
    float xmm2_7 = *(var_8 + 8)
    float xmm7_5 = *(var_8 + 0xc)
    var_8 += 0x10
    float xmm7_7 = xmm7_5 * xmm1_7 - xmm2_7 * xmm3_4
    float* ecx_2 = var_c
    float xmm1_10 = (xmm1_6 - xmm5_2) * 0.5f
    float xmm2_11 = (xmm0_8 f+ *(ebx + (ecx_1 << 2) + 4)) * 0.5f
    float xmm4_6 = xmm7_5 * xmm3_4 + xmm2_7 * xmm1_7
    *ecx_2 = xmm4_6 + xmm2_11
    esi_1[-3] = xmm2_11 - xmm4_6
    ecx_2[1] = xmm7_7 + xmm1_10
    esi_1[-2] = xmm7_7 - xmm1_10
    var_c = &ecx_2[4]
while (edx + edi u< &esi_1[-3])

return &esi_1[-3]
