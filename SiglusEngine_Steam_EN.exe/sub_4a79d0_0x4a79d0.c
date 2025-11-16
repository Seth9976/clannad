// 函数: sub_4a79d0
// 地址: 0x4a79d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1372c24.b == 0)
    return 

void* eax = data_1372c20

if (eax u> 7)
    return 

sub_425d50(data_1372c28, 0x1372d58)
int32_t i_1 = 0x10
void* esi_1 = &data_1372ebc
int32_t* edi_3 = eax * 0xfcc + 0x129aaf4
int32_t i_2 = 0x10
int32_t i

do
    if (edi_3[-1] != 0)
        eax = *(esi_1 + 0xcc)
        void* var_c_1 = eax
        
        if (*esi_1 != 0 && *(esi_1 - 4) != 0 && eax u<= 0x1ff)
            eax = sub_425430(eax, 1)
            
            if (*(var_c_1 * 0x74 + 0x13747b0) != 0)
                sub_424660(eax, esi_1 - 0x4c, var_c_1 * 0x74 + 0x13747b0, 0, 0xffffffff, 0, 0)
            
            i_1 = i_2
        
        if (data_702fc0 != 0 && data_1313250 != 0 && edi_3[2] s> 0)
            eax = edi_3[3]
            
            if (eax s> 0)
                int32_t var_18_1 = 0
                int32_t var_1c_1 = 0xff
                int32_t var_20_1 = 0
                int32_t var_24_1 = 0
                int32_t var_28_1 = 0
                int32_t ecx_7 = edi_3[1] + data_1374074
                int32_t edx_3 = *edi_3 + data_1374070
                int32_t eax_5 = edi_3[2] - 1 + edx_3
                sub_58bcc0(eax_5, data_702fec, data_702fe8, data_702ff0, edx_3, ecx_7, eax_5, 
                    eax - 1 + ecx_7, data_702ff4, (data_702ff8).b, data_702ffc, data_703000, ecx_7, 
                    0, 0, 0, 0, 0, 0, 0, 0, 0, 0xff, 0, 0, 0, 0, 0)
                i_1 = i_2
    
    esi_1 += 0x120
    edi_3 = &edi_3[5]
    i = i_1
    i_1 -= 1
    i_2 = i_1
while (i != 1)
