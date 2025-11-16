// 函数: sub_57ef70
// 地址: 0x57ef70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg3
int32_t var_c = eax

if (eax u<= 0x3f && arg2 u<= 7)
    int32_t ebx_1 = eax * 0x2d0
    int32_t ecx_1 = arg2 << 6
    void* eax_3 = arg2 * 0x128 + 0x2ca0 + eax * 0x3920 + &data_f89afc
    void* edi_2 = ebx_1 + &data_8fcb48 + ecx_1
    void* esi_3 = eax * 0x3920 + &data_f89afc + ecx_1
    
    if (arg6 == 0 && (*(ebx_1 + &data_8fcb1c) != 0 || *(ebx_1 + &data_8fcb18) != 0))
        if (arg4 == 0)
            return sub_57ee30(edi_2, eax_3)
        
        sub_4cfdf0(eax_3, arg4, esi_3 + 0x35e0, 0x24)
        *(esi_3 + 0x3604) = arg5
        return arg5
    
    void* ebx_2
    
    if (arg4 == 0)
        ebx_2 = eax_3
        eax = sub_57ee30(edi_2, ebx_2)
    else
        char* ecx_5 = arg4
        char* eax_6
        
        while (true)
            eax_6.b = *ecx_5
            
            if (eax_6.b u>= 0x80 && (eax_6.b u< 0xa0 || eax_6.b u> 0xdf) && eax_6.b u< 0xfe)
                ecx_5 = &ecx_5[2]
                continue
            
            if (eax_6.b == 0)
                break
            
            if (eax_6.b u>= 0x61 && eax_6.b u<= 0x7a)
                eax_6.b -= 0x20
                *ecx_5 = eax_6.b
            
            ecx_5 = &ecx_5[1]
        
        char* ecx_6 = edi_2
        
        if (edi_2 != 0)
            while (true)
                eax_6.b = *ecx_6
                
                if (eax_6.b u>= 0x80 && (eax_6.b u< 0xa0 || eax_6.b u> 0xdf) && eax_6.b u< 0xfe)
                    ecx_6 = &ecx_6[2]
                    continue
                
                if (eax_6.b == 0)
                    break
                
                if (eax_6.b u>= 0x61 && eax_6.b u<= 0x7a)
                    eax_6.b -= 0x20
                    *ecx_6 = eax_6.b
                
                ecx_6 = &ecx_6[1]
        
        ebx_2 = eax_3
        
        if (*ebx_2 != 0xffffffff)
            eax = sub_4d0f10(arg4, edi_2)
        
        if (*ebx_2 == 0xffffffff || eax != 0 || *(edi_2 + 0x24) != arg5)
            int32_t eax_7
            uint32_t ecx_9
            eax_7, ecx_9 = sub_57ee30(edi_2, ebx_2)
            int32_t var_20_1 = 0
            int32_t* eax_8 = sub_4254a0(eax_7, arg4, ecx_9, arg5, 0, 1, 0, 1)
            *ebx_2 = eax_8
            eax = sub_4cfdf0(eax_8, arg4, edi_2, 0x24)
            *(edi_2 + 0x24) = arg5
    
    if (arg7 != 0)
        eax = sub_580560(var_c)
    
    *(ebx_2 + 0x78) += 1

return eax
