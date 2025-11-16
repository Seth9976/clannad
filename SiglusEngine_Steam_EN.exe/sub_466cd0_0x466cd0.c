// 函数: sub_466cd0
// 地址: 0x466cd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg2
int32_t esi = arg3

if (esi s> ebx)
    int32_t eax = esi
    esi = ebx
    ebx = eax

if (esi s>= 0 && ebx s< data_7031bc)
    int32_t edx = arg4
    int32_t ebx_2 = ebx - esi + 1
    int32_t var_8_1 = 0
    void* edi_2 = (edx + (esi << 1)) * 0x650 + &data_72d6b0
    
    if (ebx_2 s> 0)
        while (true)
            int32_t ecx = arg5
            enum MESSAGEBOX_RESULT eax_2 = arg6
            
            if (*(edi_2 + 0xc) == 8)
                enum MESSAGEBOX_RESULT eax_3
                eax_3, edx = sub_478ca0(eax_2, edx, esi, ecx, eax_2)
                
                if (eax_3 != 0)
                    return 1
                
                eax_2 = arg6
                ecx = arg5
            
            if (sub_466890(eax_2, edx, edi_2, ecx, eax_2) != 0)
                return 1
            
            edi_2 += 0xca0
            int32_t eax_6 = var_8_1 + 1
            esi += 1
            var_8_1 = eax_6
            
            if (eax_6 s>= ebx_2)
                break
            
            edx = arg4

return 0
