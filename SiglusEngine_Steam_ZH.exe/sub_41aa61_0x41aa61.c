// 函数: sub_41aa61
// 地址: 0x41aa61
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
void* eax = arg1[1]
void* ecx = *arg1
int32_t edi
int32_t var_14 = edi
int32_t edi_1 = *(eax + 0x68)

if (edi_1 == *(ecx + 0x68) && *(eax + 0x6c) == *(ecx + 0x6c) && *(eax + 0x70) == *(ecx + 0x70))
    int32_t eax_4 = sub_745f3f(edi_1 << 4)
    int32_t var_8_1
    
    if (eax_4 == 0)
        var_8_1 = 0
    else
        sub_61cdd0(eax_4, 0x10, edi_1, sub_52e900)
        var_8_1 = eax_4
    
    if (var_8_1 != 0)
        void* eax_5 = arg1[1]
        
        if (*(eax_5 + 0x10) != 0 && *(*arg1 + 0x10) != 0)
            *(eax_5 + 0x10) = 0
            *(*arg1 + 0x10) = 0
        
        void* eax_7 = arg1[1]
        int32_t i = 0
        
        if (*(eax_7 + 0x70) u> 0)
            int32_t eax_8 = *(eax_7 + 0x6c)
            
            do
                int32_t edi_2 = 0
                
                if (eax_8 u> 0)
                    do
                        (*(**arg1 + 4))(edi_2, i, var_8_1)
                        (*(*arg1[1] + 8))(edi_2, i, var_8_1)
                        eax_8 = *(arg1[1] + 0x6c)
                        edi_2 += 1
                    while (edi_2 u< eax_8)
                
                i += 1
            while (i u< *(arg1[1] + 0x70))
        
        j__free(var_8_1)
        return 0

return 0x80004005
