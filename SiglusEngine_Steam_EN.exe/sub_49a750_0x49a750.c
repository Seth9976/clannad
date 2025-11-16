// 函数: sub_49a750
// 地址: 0x49a750
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u> 7 || arg2 u> 1)
    return 

int32_t eax = arg2 + (arg1 << 1)
int32_t var_c_1 = eax
void* ebx_2 = &(&data_8d02b4)[eax * 0xb20]

if (*ebx_2 != 0)
    *ebx_2 = 0
    void* esi_1 = ebx_2 + 0x64
    int32_t i_1 = 0x100
    int32_t i
    
    do
        int32_t edi_1 = *esi_1
        
        if (edi_1 != 0xffffffff)
            if (edi_1 u<= 0x3ff)
                eax = edi_1 * 0x2c + &data_8c52b4
                *(eax + 0x28) -= 1
                
                if (*(eax + 0x28) s<= 0)
                    sub_4d6c40(edi_1 * 0x34 + &data_f2e6f8, edi_1 * 0x34 + &data_f2e6fc)
                    eax = sub_4997c0(edi_1)
            
            *esi_1 = 0xffffffff
        
        *(ebx_2 + 0xc) = 1
        *(ebx_2 + 0x10) = 0
        eax = sub_4d1ba0(eax, 0x24, esi_1 + 8, 0)
        esi_1 += 0x2c
        i = i_1
        i_1 -= 1
    while (i != 1)
    eax = var_c_1

(&data_20f0094)[eax] += 1
