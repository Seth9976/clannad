// 函数: sub_4a31b9
// 地址: 0x4a31b9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
void* edx = arg1
void* ecx_1 = *(*(edx + 0x14) + (arg3 << 2))
int32_t edi
int32_t var_18 = edi
int32_t eax_3 = *(*(arg2 + 0x1c) + ((arg5 + (arg4 << 2)) << 2))
void* var_8_1 = edx
void* var_c_1 = ecx_1
arg4 = eax_3

if (eax_3 != 0xffffffff)
    while (true)
        void* edi_3 = *(*(edx + 0x14) + (eax_3 << 2))
        
        if (*(edi_3 + 0x48) u< *(ecx_1 + 0x58))
            int32_t ebx_1 = *(ecx_1 + 0x48)
            
            if (ebx_1 u>= *(edi_3 + 0x58))
                break
            
            int32_t edx_3 = *(edi_3 + 0x14)
            
            if (*(ecx_1 + 0x14) == edx_3 && *(ecx_1 + 0x18) == edx_3)
                return eax_3
            
            void* eax_4
            
            if (ebx_1 u>= *(edi_3 + 0x48))
                eax_4 = edi_3
                arg5 = ecx_1
            else
                eax_4 = ecx_1
                arg5 = edi_3
            
            arg3 = 0
            void** eax_6 = *(eax_4 + 0x74) << 2
            int32_t ebx_3 = *(arg2 + 0x54) + (*(eax_6 + *(arg2 + 0x50)) << 2)
            void* eax_7 = *(eax_6 + *(arg2 + 0x4c))
            
            if (eax_7 u> 0)
                do
                    int32_t* eax_11 = *(arg2 + 0x58) + *(ebx_3 + (arg3 << 2)) * 0xc
                    
                    if (*eax_11 u<= *(arg5 + 0x48))
                        break
                    
                    if (sub_4a3104(var_8_1, *(arg5 + 0x14), *(arg5 + 0x18), eax_11[1], eax_11[2])
                            == 0)
                        return arg4
                    
                    arg3 += 1
                    ecx_1 = var_c_1
                while (arg3 u< eax_7)
        
        int32_t edi_4 = *(edi_3 + 0x30)
        arg4 = edi_4
        
        if (edi_4 == 0xffffffff)
            break
        
        eax_3 = arg4
        edx = var_8_1

return 0xffffffff
