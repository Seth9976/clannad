// 函数: sub_40dbf8
// 地址: 0x40dbf8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
void* esi = arg1
int32_t edi
int32_t var_18 = edi
int32_t var_c_1 = 0

if (*(esi + 0x234) != 0)
    int32_t* eax_1 = *(esi + 0x230)
    (*(*eax_1 + 0x15c))(eax_1, *(esi + 8))
    int32_t* eax_2 = *(esi + 0x230)
    (*(*eax_2 + 0x190))(eax_2, 0, *(esi + 0x234), 0, *(esi + 0x238))
    int32_t* eax_3 = *(esi + 0x230)
    (*(*eax_3 + 0x1a0))(eax_3, *(esi + 0x248))
    
    if ((*(esi + 0x218) & 0x10) == 0)
        int32_t i = 0
        arg1 = nullptr
        
        if (*(esi + 0x264) u> 0)
            do
                if (*(*(esi + 0x254) + (i << 2)) != arg2)
                    if (arg1 u> 0)
                        int32_t* ecx_9 = *(esi + 0x230)
                        (*(*ecx_9 + 0x148))(ecx_9, 4, 0, 0, *(esi + 0x23c), (i - arg1) * 3, arg1)
                    
                    arg1 = nullptr
                else
                    arg1 += 1
                
                i += 1
            while (i u< *(esi + 0x264))
            
            if (arg1 u> 0)
                int32_t* eax_15 = *(esi + 0x230)
                return (*(*eax_15 + 0x148))(eax_15, 4, 0, 0, *(esi + 0x23c), (i - arg1) * 3, arg1)
    else
        int32_t edi_1 = *(esi + 0x260)
        int32_t eax_5
        
        if (arg2 u>= edi_1 || *(*(esi + 0x25c) + arg2 * 0x14) != arg2)
            eax_5 = 0
            
            if (edi_1 u> 0)
                int32_t* edx_2 = *(esi + 0x25c)
                
                while (*edx_2 != arg2)
                    eax_5 += 1
                    edx_2 = &edx_2[5]
                    
                    if (eax_5 u>= edi_1)
                        break
        else
            eax_5 = arg2
        
        if (eax_5 u< edi_1)
            int32_t edx_3 = *(esi + 0x25c)
            int32_t eax_7 = eax_5 * 0x14
            
            if (*(eax_7 + edx_3 + 8) u> 0)
                int32_t* esi_1 = *(esi + 0x230)
                void* eax_8 = eax_7 + edx_3
                return (*(*esi_1 + 0x148))(esi_1, 4, 0, *(eax_8 + 0xc), *(eax_8 + 0x10), 
                    *(eax_8 + 4) * 3, *(eax_8 + 8))

return 0
