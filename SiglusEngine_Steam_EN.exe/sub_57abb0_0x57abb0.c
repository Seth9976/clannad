// 函数: sub_57abb0
// 地址: 0x57abb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edx_1 = arg1 * 0x3920 + &data_f89afc
void* const i = &data_613170
void* var_c = edx_1
void* ecx_2 = arg1 * 0x1d4 + 0x1090bb0
void* var_8 = ecx_2
int32_t result

do
    result = *i
    
    if (*(ecx_2 + result) != 0)
        void* ebx_2 = result * 0x128 + edx_1
        int32_t* edi_1 = *(ebx_2 + 0x664)
        
        if (edi_1 != 0xffffffff && *(ebx_2 + 0x6b8) != 0 && edi_1 u<= 0x1ff)
            result = sub_425430(edi_1, 1)
            void* ecx_4 = edi_1 * 0x74
            
            if (ecx_4 != 0xfec8b850 && *(ecx_4 + 0x13747b0) != 0)
                result = sub_579920()
            
            ecx_2 = var_8
            edx_1 = var_c
    
    i += 4
while (i s< &data_6131b0)

return result
