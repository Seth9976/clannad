// 函数: sub_99fc30
// 地址: 0x99fc30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg3[0xa]
int32_t eax = *arg3
__alloca_probe_16(esi << 2)
int32_t __saved_edi
int32_t* var_1c = &__saved_edi
int32_t i = 0
float xmm1_1 = *(arg3[1] + 4) + arg6

if (esi s> 0)
    do
        (&__saved_edi)[i] = 0xc61c3c00
        i += 1
    while (i s< arg3[0xa])

void* eax_11 = arg3[1]
float xmm0 = *(eax_11 + 8)

if (not(xmm0 <= xmm1_1))
    xmm1_1 = xmm0

int32_t ecx = eax
int32_t i_2 = 0
int32_t ebx = arg5

if (ecx s>= 4)
    void* esi_1 = ebx + 8
    int32_t i_3 = ((ecx - 4) u>> 2) + 1
    int32_t* edx_1 = 8
    int32_t i_1
    
    do
        int32_t* ecx_3 = 0xfffffff8 - ebx + esi_1
        *(esi_1 - 8) = *(ecx_3 + arg3[4]) + xmm1_1
        *(esi_1 - 4) = *(ecx_3 + arg3[4] + 4) + xmm1_1
        float xmm0_5 = *(edx_1 + arg3[4])
        edx_1 = &edx_1[4]
        *esi_1 = xmm0_5 + xmm1_1
        eax_11 = arg3[4]
        *(esi_1 + 4) = *(4 - ebx + esi_1 + eax_11) + xmm1_1
        esi_1 += 0x10
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    i_2 = (((ecx - 4) u>> 2) + 1) << 2
    ebx = arg5
    ecx = eax

for (; i_2 s< ecx; i_2 += 1)
    eax_11 = arg3[4]
    *(ebx + (i_2 << 2)) = *(eax_11 + (i_2 << 2)) + xmm1_1

int32_t var_30 = ecx
return sub_9a0740(sub_9a09e0(eax_11, arg3[2], arg3, arg2, ebx, var_1c, arg4), var_1c, arg3, ebx)
