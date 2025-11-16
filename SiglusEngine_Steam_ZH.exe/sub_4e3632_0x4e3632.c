// 函数: sub_4e3632
// 地址: 0x4e3632
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t ecx_1 = *(arg1 + 0x16b4)
int32_t ebx = arg4
int32_t edi
int32_t var_14 = edi

if (ecx_1 s<= 0xb)
    *(arg1 + 0x16b0) |= ((arg2 - 0x101) << ecx_1.b).w
    *(arg1 + 0x16b4) = ecx_1 + 5
else
    char* ecx_2 = *(arg1 + 0x14)
    int32_t var_8_1 = ebx
    *(arg1 + 0x16b0) |= ((arg2 - 0x101) << ecx_1.b).w
    ebx.b = *(arg1 + 0x16b0)
    ecx_2[*(arg1 + 8)] = ebx.b
    *(arg1 + 0x14) += 1
    ebx.b = *(arg1 + 0x16b1)
    (*(arg1 + 0x14))[*(arg1 + 8)] = ebx.b
    int32_t edx_4 = *(arg1 + 0x16b4)
    *(arg1 + 0x14) += 1
    ebx = var_8_1
    char* ecx_3
    ecx_3.b = 0x10
    ecx_3.b = 0x10 - edx_4.b
    int32_t esi_2
    esi_2.w = (arg2 - 0x101).w u>> ecx_3.b
    *(arg1 + 0x16b4) = edx_4 - 0xb
    *(arg1 + 0x16b0) = esi_2.w

int32_t ecx_5 = *(arg1 + 0x16b4)

if (ecx_5 s<= 0xb)
    *(arg1 + 0x16b0) |= ((arg3 - 1) << ecx_5.b).w
    *(arg1 + 0x16b4) = ecx_5 + 5
else
    char* ecx_6 = *(arg1 + 0x14)
    int32_t var_8_2 = ebx
    *(arg1 + 0x16b0) |= ((arg3 - 1) << ecx_5.b).w
    ebx.b = *(arg1 + 0x16b0)
    ecx_6[*(arg1 + 8)] = ebx.b
    *(arg1 + 0x14) += 1
    ebx.b = *(arg1 + 0x16b1)
    (*(arg1 + 0x14))[*(arg1 + 8)] = ebx.b
    int32_t edx_13 = *(arg1 + 0x16b4)
    *(arg1 + 0x14) += 1
    ebx = var_8_2
    char* ecx_7
    ecx_7.b = 0x10
    ecx_7.b = 0x10 - edx_13.b
    int32_t esi_4
    esi_4.w = (arg3 - 1).w u>> ecx_7.b
    *(arg1 + 0x16b4) = edx_13 - 0xb
    *(arg1 + 0x16b0) = esi_4.w

int32_t ecx_9 = *(arg1 + 0x16b4)

if (ecx_9 s<= 0xc)
    *(arg1 + 0x16b0) |= ((ebx - 4) << ecx_9.b).w
    *(arg1 + 0x16b4) = ecx_9 + 4
else
    int32_t esi_5 = ebx - 4
    char* ecx_10 = *(arg1 + 0x14)
    int32_t var_8_3 = ebx
    *(arg1 + 0x16b0) |= (esi_5 << ecx_9.b).w
    ebx.b = *(arg1 + 0x16b0)
    ecx_10[*(arg1 + 8)] = ebx.b
    *(arg1 + 0x14) += 1
    ebx.b = *(arg1 + 0x16b1)
    (*(arg1 + 0x14))[*(arg1 + 8)] = ebx.b
    int32_t edx_22 = *(arg1 + 0x16b4)
    *(arg1 + 0x14) += 1
    ebx = var_8_3
    char* ecx_11
    ecx_11.b = 0x10
    ecx_11.b = 0x10 - edx_22.b
    esi_5.w u>>= ecx_11.b
    *(arg1 + 0x16b4) = edx_22 - 0xc
    *(arg1 + 0x16b0) = esi_5.w

void* edi_1 = nullptr

if (ebx s> 0)
    do
        int32_t ecx_13 = *(arg1 + 0x16b4)
        uint32_t edx_26 = zx.d(*(edi_1 + 0xace0f4))
        
        if (ecx_13 s<= 0xd)
            edx_26.w = *(arg1 + (edx_26 << 2) + 0xa76)
            edx_26.w <<= ecx_13.b
            *(arg1 + 0x16b0) |= edx_26.w
            *(arg1 + 0x16b4) = ecx_13 + 3
        else
            uint32_t esi_6 = zx.d(*(arg1 + (edx_26 << 2) + 0xa76))
            char* ecx_14 = *(arg1 + 0x14)
            *(arg1 + 0x16b0) |= (esi_6 << ecx_13.b).w
            ebx.b = *(arg1 + 0x16b0)
            ecx_14[*(arg1 + 8)] = ebx.b
            *(arg1 + 0x14) += 1
            ebx.b = *(arg1 + 0x16b1)
            (*(arg1 + 0x14))[*(arg1 + 8)] = ebx.b
            int32_t edx_31 = *(arg1 + 0x16b4)
            *(arg1 + 0x14) += 1
            ebx = arg4
            char* ecx_15
            ecx_15.b = 0x10
            ecx_15.b = 0x10 - edx_31.b
            esi_6.w u>>= ecx_15.b
            *(arg1 + 0x16b4) = edx_31 - 0xd
            *(arg1 + 0x16b0) = esi_6.w
        
        edi_1 += 1
    while (edi_1 s< ebx)

sub_4e3193(arg1, arg2 - 1, arg1 + 0x8c)
sub_4e3193(arg1, arg3 - 1, arg1 + 0x980)
