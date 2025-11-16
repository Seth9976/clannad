// 函数: sub_4e2ce8
// 地址: 0x4e2ce8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* ecx = arg2
int32_t edi
int32_t var_c = edi
uint32_t esi_1 = zx.d(arg1.w)
uint32_t edi_2 = arg1 u>> 0x10

if (ecx == 0)
    return 1

while (arg3 u> 0)
    int32_t j_3 = 0x15b0
    
    if (arg3 u< 0x15b0)
        j_3 = arg3
    
    arg3 -= j_3
    
    if (j_3 s>= 0x10)
        uint32_t j_2 = j_3 u>> 4
        j_3 += neg.d(j_2) << 4
        uint32_t j
        
        do
            uint32_t esi_2 = esi_1 + zx.d(*ecx)
            uint32_t esi_3 = esi_2 + zx.d(ecx[1])
            uint32_t esi_4 = esi_3 + zx.d(ecx[2])
            uint32_t esi_5 = esi_4 + zx.d(ecx[3])
            uint32_t esi_6 = esi_5 + zx.d(ecx[4])
            uint32_t esi_7 = esi_6 + zx.d(ecx[5])
            uint32_t esi_8 = esi_7 + zx.d(ecx[6])
            uint32_t esi_9 = esi_8 + zx.d(ecx[7])
            uint32_t esi_10 = esi_9 + zx.d(ecx[8])
            uint32_t esi_11 = esi_10 + zx.d(ecx[9])
            uint32_t esi_12 = esi_11 + zx.d(ecx[0xa])
            uint32_t esi_13 = esi_12 + zx.d(ecx[0xb])
            uint32_t esi_14 = esi_13 + zx.d(ecx[0xc])
            uint32_t esi_15 = esi_14 + zx.d(ecx[0xd])
            uint32_t esi_16 = esi_15 + zx.d(ecx[0xe])
            esi_1 = esi_16 + zx.d(ecx[0xf])
            edi_2 = edi_2 + esi_2 + esi_3 + esi_4 + esi_5 + esi_6 + esi_7 + esi_8 + esi_9 + esi_10
                + esi_11 + esi_12 + esi_13 + esi_14 + esi_15 + esi_16 + esi_1
            ecx = &ecx[0x10]
            j = j_2
            j_2 -= 1
        while (j != 1)
    
    if (j_3 != 0)
        int32_t j_1
        
        do
            esi_1 += zx.d(*ecx)
            ecx = &ecx[1]
            edi_2 += esi_1
            j_1 = j_3
            j_3 -= 1
        while (j_1 != 1)
    
    esi_1 = modu.dp.d(0:esi_1, 0xfff1)
    edi_2 = modu.dp.d(0:edi_2, 0xfff1)

return edi_2 << 0x10 | esi_1
