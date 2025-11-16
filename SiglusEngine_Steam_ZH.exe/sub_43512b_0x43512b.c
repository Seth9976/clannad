// 函数: sub_43512b
// 地址: 0x43512b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi

if (arg3 == 0)
    return 0x8876086c

int32_t eax = sub_433f9c(arg1, arg2, 1)

if (eax != 0)
    void* ecx_5 = *(*(eax + 4) + 0x40) + *(arg1 + 0x344) + *(eax + 0x18)
    
    if ((*(ecx_5 + 0x10) == 0 || *(eax + 0x10) != 0xffffffff) && *(ecx_5 + 4) == 1)
        void* esi_2 = *(eax + 0x1c)
        arg2 = arg3
        char* edi_2 = *(ecx_5 + 0x14)
        void* j_1 = 4
        int32_t result = 0
        arg1 = 1
        arg3 = 4
        
        if (edi_2 u<= 4)
            arg3 = edi_2
        
        do
            int32_t ebx_1 = 0
            
            if (arg3 u> 0)
                do
                    void* j_2 = j_1
                    result = sub_43250c(esi_2, fconvert.s(fconvert.t(*(arg2 + (ebx_1 << 2)))))
                    
                    if (result s< 0)
                        return result
                    
                    esi_2 = *(esi_2 + 0xc)
                    ebx_1 += 1
                while (ebx_1 u< arg3)
            
            if (ebx_1 u< edi_2)
                j_1 = edi_2 - ebx_1
                void* j
                
                do
                    j = j_1
                    j_1 -= 1
                    esi_2 = *(esi_2 + 0xc)
                while (j != 1)
            
            arg1 -= 1
            arg2 = &arg2[0x10]
        while (arg1 != 0)
        
        return result

return 0x8876086c
