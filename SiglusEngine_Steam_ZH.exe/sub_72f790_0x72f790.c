// 函数: sub_72f790
// 地址: 0x72f790
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = *(arg1 + 0x1c0)
void* var_20 = esi
int32_t eax

if (*(arg1 + 0x4c) != 1)
    eax = 0
    *(esi + 0x1c) = 0
else
    eax = 0x1fe
    *(esi + 0x1c) = 1

int32_t i = 0
*(esi + 0x18) = (*(*(arg1 + 4) + 8))(arg1, 1, eax + 0x100, *(arg1 + 0x64))
int32_t result = *(esi + 0x14)
int32_t i_1 = 0

if (*(arg1 + 0x64) s> 0)
    do
        int32_t ecx_1 = *(esi + (i << 2) + 0x20)
        int32_t result_1 = divs.dp.d(sx.q(result), ecx_1)
        
        if (eax != 0)
            int32_t eax_6 = *(esi + 0x18)
            *(eax_6 + (i << 2)) += 0xff
        
        char* edi_1 = *(*(esi + 0x18) + (i << 2))
        int32_t ebx = 0
        char* var_18_1 = edi_1
        int32_t edx_4 = divs.dp.d(sx.q(ecx_1 + 0xfe), (ecx_1 << 1) + 0xfffffffe)
        
        for (char* j = nullptr; j s<= 0xff; j = &j[1])
            if (j s> edx_4)
                int32_t ecx_5 = ecx_1 + 0xfe + ebx * 0x1fe
                
                do
                    ecx_5 += 0x1fe
                    ebx += 1
                    edx_4 = divs.dp.d(sx.q(ecx_5), (ecx_1 << 1) + 0xfffffffe)
                while (j s> edx_4)
                
                edi_1 = var_18_1
            
            int32_t eax_10
            eax_10.b = result_1.b
            eax_10.w = muls.dp.b(eax_10.b, ebx.b)
            *(j + edi_1) = eax_10.b
        
        if (eax != 0)
            int32_t j_1 = 1
            void* edx_6 = &edi_1[0xffffffff]
            
            do
                edx_6 -= 1
                *(edx_6 + 1) = *edi_1
                edi_1[j_1 + 0xff] = edi_1[0xff]
                j_1 += 1
            while (j_1 s<= 0xff)
        
        esi = var_20
        i = i_1 + 1
        i_1 = i
        result = result_1
    while (i s< *(arg1 + 0x64))

return result
