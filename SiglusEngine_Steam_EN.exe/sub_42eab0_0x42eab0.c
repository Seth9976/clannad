// 函数: sub_42eab0
// 地址: 0x42eab0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i_1 = arg2
void* result = *(arg1 + 0x170) + i_1 * 0x30
int32_t esi_2 = *(arg1 + 0x174)
void* result_1 = result

if (i_1 s< esi_2)
    void* ecx = result + 0x1c
    int32_t edi_1 = 0
    
    do
        int32_t result_2 = *(ecx - 4)
        result = result_2
        
        if (result_2 == 0)
            break
        
        void* eax_1 = result - 1
        
        if (result == 1)
            result = *ecx
            
            switch (result)
                case nullptr, 2, 3
                    break
                case 1
                    edi_1 += 1
        else
            result = eax_1 - 1
            
            if (eax_1 == 1)
                break
        
        arg2 += 1
        ecx += 0x30
    while (arg2 s< esi_2)
    
    if (edi_1 != 0)
        int32_t i = i_1
        
        if (i_1 s< esi_2)
            void* ecx_2 = result_1 + 0x1c
            
            do
                int32_t result_3 = *(ecx_2 - 4)
                result = result_3
                
                if (result_3 == 0)
                    break
                
                void* eax_2 = result - 1
                
                if (result == 1)
                    result = *ecx_2
                    
                    switch (result)
                        case nullptr, 2, 3
                            break
                        case 1
                            *(ecx_2 - 0xc) = edi_1
                            *(ecx_2 - 0x10) = i_1
                else
                    result = eax_2 - 1
                    
                    if (eax_2 == 1)
                        break
                
                i += 1
                ecx_2 += 0x30
            while (i s< *(arg1 + 0x174))

return result
