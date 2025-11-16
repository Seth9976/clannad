// 函数: sub_46ad8d
// 地址: 0x46ad8d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg3 != 0)
    *arg3 = 0

int32_t* ebx = arg4

if (ebx != 0)
    *ebx = 0

if (arg1 == 0)
    return 0x8876086c

int32_t edi
int32_t var_c_1 = edi
int32_t edi_1 = *arg1
int32_t eax_2 = edi_1 & 0xffff0000
int32_t result

if (eax_2 == 0x46580000 || eax_2 == 0x54580000 || eax_2 == 0x7ffe0000 || eax_2 == 0x7fff0000
        || eax_2 == 0xfffe0000 || eax_2 == 0xffff0000)
    void* ecx_1 = &arg1[1]
    
    while (true)
        int32_t eax_3 = *ecx_1
        
        if (eax_3 s>= 0)
            uint32_t esi_2 = zx.d(eax_3.w)
            
            if (esi_2 == 0xffff)
                result = 1
                break
            
            if (esi_2 == 0xfffe)
                int32_t eax_5 = eax_3 u>> 0x10 & 0x7fff
                
                if (eax_5 u> 1 && arg2 == *(ecx_1 + 4))
                    if (arg3 != 0)
                        *arg3 = ecx_1 + 8
                    
                    if (ebx != 0)
                        *ebx = (eax_5 << 2) + 0xfffffffc
                    
                    result = 0
                    break
                
                ecx_1 += eax_5 << 2
            else if (zx.d(edi_1.w) u>= 0x200)
                ecx_1 += (eax_3 u>> 0x18 & 0xf) << 2
            else if (esi_2 == 0x51)
                ecx_1 += 0x14
        
        ebx = arg4
        ecx_1 += 4
else
    result = 0x88760b59

return result
