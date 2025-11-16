// 函数: sub_6d7210
// 地址: 0x6d7210
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg2

if (arg4 s>= 6)
    return 

uint32_t ebx_1 = zx.d(*(arg3 + 0xb))
uint32_t var_8_1
int32_t ecx_5
int32_t* edi_4
bool cond:2_1

if (ebx_1 == 1)
    int32_t eax_20 = *arg3
    edi_4 = esi
    uint32_t ebx_5 = zx.d(*(arg4 + 0xadb6b4))
    int32_t edx_4 = 7
    int32_t var_c_4 = 0
    var_8_1 = ebx_5
    
    if (ebx_5 u< eax_20)
        uint32_t var_18_4 = zx.d(*(arg4 + 0xadb358))
        
        do
            uint32_t eax_21
            eax_21.b = ebx_5.b
            eax_21.b &= 7
            ecx_5 = var_c_4 | (zx.d(*((ebx_5 u>> 3) + esi)) u>> (7 - eax_21.b) & 1) << edx_4.b
            var_c_4 = ecx_5
            
            if (edx_4 != 0)
                edx_4 -= 1
            else
                *edi_4 = ecx_5.b
                edx_4 = 7
                edi_4 += 1
                ecx_5 = 0
                var_c_4 = 0
            
            ebx_5 += var_18_4
        while (ebx_5 u< eax_20)
        
        cond:2_1 = edx_4 == 7
    label_6d7419:
        
        if (not(cond:2_1))
            *edi_4 = ecx_5.b
else if (ebx_1 == 2)
    int32_t eax_13 = *arg3
    edi_4 = esi
    uint32_t ebx_4 = zx.d(*(arg4 + 0xadb6b4))
    int32_t edx_3 = 6
    int32_t var_c_3 = 0
    var_8_1 = ebx_4
    
    if (ebx_4 u< eax_13)
        uint32_t var_18_3 = zx.d(*(arg4 + 0xadb358))
        
        do
            uint32_t eax_14
            eax_14.b = ebx_4.b
            eax_14.b &= 3
            ecx_5 = var_c_3 | (zx.d(*((ebx_4 u>> 2) + esi)) u>> ((3 - eax_14.b) * 2) & 3) << edx_3.b
            var_c_3 = ecx_5
            
            if (edx_3 != 0)
                edx_3 -= 2
            else
                *edi_4 = ecx_5.b
                edx_3 = 6
                edi_4 += 1
                ecx_5 = 0
                var_c_3 = 0
            
            ebx_4 += var_18_3
        while (ebx_4 u< eax_13)
        
        cond:2_1 = edx_3 == 6
        goto label_6d7419
else
    int32_t eax_3 = *arg3
    
    if (ebx_1 == 4)
        uint32_t ebx_3 = zx.d(*(arg4 + 0xadb6b4))
        edi_4 = esi
        int32_t edx_2 = 4
        int32_t var_c_2 = 0
        var_8_1 = ebx_3
        
        if (ebx_3 u< eax_3)
            uint32_t var_18_2 = zx.d(*(arg4 + 0xadb358))
            
            do
                uint32_t eax_7
                eax_7.b = ebx_3.b
                eax_7.b &= 1
                eax_7.b <<= 2
                ecx_5 = var_c_2 | (zx.d(*((ebx_3 u>> 1) + esi)) u>> (4 - eax_7.b) & 0xf) << edx_2.b
                var_c_2 = ecx_5
                
                if (edx_2 != 0)
                    edx_2 -= 4
                else
                    *edi_4 = ecx_5.b
                    edx_2 = 4
                    edi_4 += 1
                    ecx_5 = 0
                    var_c_2 = 0
                
                ebx_3 += var_18_2
            while (ebx_3 u< eax_3)
            
            cond:2_1 = edx_2 == 4
            goto label_6d7419
    else
        uint32_t ecx_1 = zx.d(*(arg4 + 0xadb6b4))
        uint32_t ebx_2 = ebx_1 u>> 3
        var_8_1 = ecx_1
        uint32_t var_10_1 = ecx_1
        
        if (ecx_1 u< eax_3)
            int32_t edx_1 = eax_3
            void* eax_4
            eax_4.b = *(arg4 + 0xadb358)
            uint32_t eax_5 = zx.d(eax_4.b)
            int32_t eax_6 = eax_5 * ebx_2
            int32_t* edi_3 = ecx_1 * ebx_2 + esi
            int32_t var_14_1 = eax_6
            
            do
                if (esi != edi_3)
                    sub_748840(esi, edi_3, ebx_2)
                    ecx_1 = var_10_1
                    eax_6 = var_14_1
                    edx_1 = eax_3
                
                ecx_1 += eax_5
                esi += ebx_2
                edi_3 += eax_6
                var_10_1 = ecx_1
            while (ecx_1 u< edx_1)
uint32_t esi_1 = zx.d(*(arg4 + 0xadb358))
uint32_t ecx_13
ecx_13.b = *(arg3 + 0xb)
uint32_t temp0_1 = divu.dp.d(0:(*arg3 - 1 + esi_1 - var_8_1), esi_1)
uint32_t ecx_14 = zx.d(ecx_13.b)
*arg3 = temp0_1

if (ecx_13.b u>= 8)
    arg3[1] = (ecx_14 u>> 3) * temp0_1
    return 

arg3[1] = (ecx_14 * temp0_1 + 7) u>> 3
