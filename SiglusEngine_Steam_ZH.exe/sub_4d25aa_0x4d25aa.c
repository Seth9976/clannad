// 函数: sub_4d25aa
// 地址: 0x4d25aa
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t edi
int32_t var_18 = edi
int32_t* edi_1 = *(arg1 + 0x1b0)

if (edi_1 != 0)
    int32_t edx_1 = *(arg1 + 0x11c)
    int32_t eax_1 = *(arg1 + 0x110)
    
    if (edx_1 u< eax_1 && *(arg1 + 0xd4) == 0)
        void* ecx = *(arg1 + 0x100)
        int32_t var_c_1 = 0
        int32_t var_8_1 = 0
        
        if (ecx != 0)
            void* ebx_1 = *(ecx + 0x3c)
            
            if (ebx_1 != 0 && *(ebx_1 + 4) == 0xd)
                var_c_1 = *(ebx_1 + 0x40)
                var_8_1 = *(ebx_1 + 0x44)
        
        int32_t result = (*(*edi_1 + 0x10))(edi_1, var_c_1, var_8_1, 
            *(arg1 + 0x10c) + (edx_1 << 2), eax_1 - edx_1)
        *(arg1 + 0x11c) = *(arg1 + 0x110)
        return result

return 0
