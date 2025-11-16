// 函数: sub_4351e1
// 地址: 0x4351e1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_c = edi

if (arg3 == 0)
    return 0x8876086c

int32_t eax_1 = sub_433f9c(arg1, arg2, 1)
int32_t result = 0

if (eax_1 != 0)
    void* ecx_5 = *(*(eax_1 + 4) + 0x40) + arg1[0xd1] + *(eax_1 + 0x18)
    
    if ((*(ecx_5 + 0x10) == 0 || *(eax_1 + 0x10) != 0xffffffff) && *(ecx_5 + 4) == 1)
        int32_t esi_2 = *(eax_1 + 0x1c)
        int32_t i = 1
        char* ebx_1 = *(ecx_5 + 0x14)
        arg1 = arg3
        arg2 = 4
        
        if (ebx_1 u<= 4)
            arg2 = ebx_1
        
        *arg3 = 0
        void* edi_2 = &arg3[1]
        *edi_2 = 0
        void* edi_3 = edi_2 + 4
        *edi_3 = 0
        *(edi_3 + 4) = 0
        
        do
            int32_t edi_6 = 0
            
            if (arg2 u> 0)
                arg3 = arg1
                
                do
                    result = sub_432568(esi_2, arg3)
                    
                    if (result s< 0)
                        return result
                    
                    arg3 = &arg3[1]
                    esi_2 = *(esi_2 + 0xc)
                    edi_6 += 1
                while (edi_6 u< arg2)
            
            if (edi_6 u< ebx_1)
                void* j_1 = ebx_1 - edi_6
                void* j
                
                do
                    j = j_1
                    j_1 -= 1
                    esi_2 = *(esi_2 + 0xc)
                while (j != 1)
            
            i -= 1
            arg1 = &arg1[4]
        while (i != 0)
        
        return result

return 0x8876086c
