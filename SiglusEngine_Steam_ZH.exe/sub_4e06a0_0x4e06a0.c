// 函数: sub_4e06a0
// 地址: 0x4e06a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *arg3
int32_t ecx_1 = *(arg2 + 0x13c)
int32_t result = 0

if (ecx_1 s> 0)
    int32_t* esi_1 = arg5
    int32_t ecx_4 = *(arg4 + 0x28) - 2
    int32_t edi
    int32_t var_34_1 = edi
    arg5 = esi_1
    
    do
        char* edx = *esi_1
        int32_t i = 0
        int32_t i_1 = 0
        
        do
            char* esi_2
            
            if (i != 0)
                esi_2 = esi_1[1]
            else
                esi_2 = esi_1[-1]
            
            char* ecx_6 = *(ecx + (result << 2))
            uint32_t edi_3 = zx.d(*edx) * 3 + zx.d(*esi_2)
            uint32_t eax_4 = zx.d(edx[1]) * 3 + zx.d(esi_2[1])
            *ecx_6 = (((edi_3 << 2) + 8) s>> 4).b
            void* esi_4 = &esi_2[2]
            void* edx_3 = &edx[2]
            ecx_6[1] = ((edi_3 * 3 + eax_4 + 7) s>> 4).b
            arg4 = edi_3
            char* ecx_8 = &ecx_6[2]
            uint32_t ebx_7 = eax_4
            uint32_t var_c_1 = ebx_7
            
            if (ecx_4 u> 0)
                int32_t var_10_1 = ecx_4
                bool cond:5_1
                
                do
                    eax_4 = zx.d(*edx_3) * 3 + zx.d(*esi_4)
                    uint32_t edi_6 = ebx_7 * 3
                    *ecx_8 = ((edi_6 + arg4 + 8) s>> 4).b
                    esi_4 += 1
                    uint32_t var_8_1 = edi_6
                    edx_3 += 1
                    arg4 = var_c_1
                    ecx_8[1] = ((edi_6 + eax_4 + 7) s>> 4).b
                    ecx_8 = &ecx_8[2]
                    ebx_7 = eax_4
                    cond:5_1 = var_10_1 != 1
                    var_c_1 = ebx_7
                    var_10_1 -= 1
                while (cond:5_1)
            
            esi_1 = arg5
            *ecx_8 = ((eax_4 * 3 + arg4 + 8) s>> 4).b
            ecx_8[1] = (((eax_4 << 2) + 7) s>> 4).b
            result += 1
            i = i_1 + 1
            i_1 = i
        while (i s< 2)
        
        esi_1 = &esi_1[1]
        arg5 = esi_1
    while (result s< ecx_1)

return result
