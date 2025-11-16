// 函数: sub_71d190
// 地址: 0x71d190
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx = arg1
int32_t* var_10 = edx
int32_t* var_1c = nullptr

if (arg2 u<= 0)
    return 

uint32_t edi_1 = arg2
int32_t* ebx_1 = &edx[4]
int32_t* var_8_1 = ebx_1
int32_t* eax

do
    *edx += 1
    int32_t ecx = edx[0xc]
    uint32_t temp0_1 = divu.dp.d(0:(*edx), ecx)
    uint32_t temp1_1 = modu.dp.d(0:(var_10[3] + 1), ecx)
    var_10[3] = temp1_1
    sub_71d3e0(ebx_1, temp1_1)
    int32_t var_c_1 = *(*ebx_1 + ebx_1[4] * 0xc + 8)
    int32_t ecx_3 = var_10[0xb]
    int32_t esi_3 = *var_10
    int32_t ebx_2 = var_10[0xd]
    var_10[2] = 0
    int32_t ecx_4 = ecx_3 - esi_3
    
    if (ecx_3 == esi_3)
        break
    
    int32_t edx_4 = var_10[0xc]
    
    if (ebx_2 u> ecx_4)
        ebx_2 = ecx_4
    
    void* ecx_5 = var_10[0xa]
    void* eax_12 = ecx_5 + esi_3
    int32_t ecx_6 = var_c_1
    void* var_18_2 = eax_12
    
    while (true)
        void* esi_4 = eax_12
        void* edx_8 = edx_4 * temp0_1 + ecx_5 + ecx_6
        
        if (ecx_6 u> modu.dp.d(0:esi_3, edx_4))
            edx_8 -= edx_4
        
        int32_t eax_13 = 0
        
        if (ebx_2 != 0)
            do
                uint32_t ecx_7 = zx.d(*(edx_8 - var_18_2 + esi_4))
                esi_4 += 1
                uint32_t edi_2 = zx.d(*(esi_4 - 1))
                edi_1 = edi_2 - ecx_7
                
                if (edi_2 != ecx_7)
                    break
                
                eax_13 += 1
            while (eax_13 u< ebx_2)
            
            ecx_6 = var_c_1
        
        if (eax_13 u> var_10[2])
            var_10[2] = eax_13
            var_10[1] = ecx_6
            
            if (eax_13 == ebx_2)
                int32_t ebx_3 = var_10[3]
                int32_t ecx_10 = *var_8_1
                int32_t eax_17 = var_c_1 * 3
                int64_t* edx_12 = ecx_10 + (eax_17 << 2)
                int32_t eax_19 = *(ecx_10 + (eax_17 << 2)) * 3
                
                if (*(ecx_10 + (eax_19 << 2) + 4) != var_c_1)
                    *(ecx_10 + (eax_19 << 2) + 8) = ebx_3
                else
                    *(ecx_10 + (eax_19 << 2) + 4) = ebx_3
                
                int32_t ecx_11 = ebx_3 * 3
                int32_t eax_20 = *var_8_1
                *(eax_20 + (ecx_11 << 2)) = *edx_12
                *(eax_20 + (ecx_11 << 2) + 8) = edx_12[1].d
                *(*var_8_1 + *(edx_12 + 4) * 0xc) = ebx_3
                *(*var_8_1 + edx_12[1].d * 0xc) = ebx_3
                ebx_1 = var_8_1
                *edx_12 = ebx_1[5]
                break
        
        int32_t edx_11 = var_10[3]
        void* eax_15 = *var_8_1 + ecx_6 * 0xc
        int32_t* eax_16
        
        if (edi_1 s< 0)
            eax_16 = eax_15 + 4
        else
            eax_16 = eax_15 + 8
        
        ecx_6 = *eax_16
        
        if (ecx_6 == var_8_1[5])
            ebx_1 = var_8_1
            *eax_16 = edx_11
            int32_t edx_14 = edx_11 * 3
            *(*ebx_1 + (edx_14 << 2)) = var_c_1
            *(*ebx_1 + (edx_14 << 2) + 8) = ebx_1[5]
            *(*ebx_1 + (edx_14 << 2) + 4) = ebx_1[5]
            break
        
        eax_12 = var_18_2
        var_c_1 = ecx_6
    
    edx = var_10
    eax = var_1c + 1
    var_1c = eax
while (eax u< arg2)
