// 函数: sub_607860
// 地址: 0x607860
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg1
void* edx = arg2 - esi
int32_t eax_1
int32_t edx_1
edx_1:eax_1 = sx.q(edx)
void* result = eax_1 - edx_1
int32_t i = result s>> 1

if (i s> 0)
    result = (i << 1) + 2
    
    do
        i -= 1
        void* j = result - 2
        void* edi_1 = i
        void* var_8_1 = j
        arg1:1.b = *(i + esi)
        
        for (; j s< edx; j = (j << 1) + 2)
            arg1.b = *(j + esi)
            
            if (arg1.b s< *(esi + j - 1))
                j -= 1
            
            arg1.b = *(j + esi)
            *(edi_1 + esi) = arg1.b
            edi_1 = j
        
        if (j == edx)
            j.b = *(edx + esi - 1)
            *(edi_1 + esi) = j.b
            edi_1 = edx - 1
        
        int32_t eax_3
        int32_t edx_3
        edx_3:eax_3 = sx.q(edi_1 - 1)
        void* eax_5 = (eax_3 - edx_3) s>> 1
        
        while (i s< edi_1)
            arg1.b = *(eax_5 + esi)
            
            if (arg1.b s>= arg1:1.b)
                break
            
            *(edi_1 + esi) = arg1.b
            edi_1 = eax_5
            int32_t eax_7
            int32_t edx_4
            edx_4:eax_7 = sx.q(eax_5 - 1)
            eax_5 = (eax_7 - edx_4) s>> 1
        
        result = var_8_1
        *(edi_1 + esi) = arg1:1.b
    while (i s> 0)

return result
