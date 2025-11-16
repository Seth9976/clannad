// 函数: sub_4d8e04
// 地址: 0x4d8e04
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = arg1[0x40]
int32_t eax = ecx[3]
int32_t* eax_1 = ecx[4]
int32_t edi
int32_t var_30 = edi
int32_t edi_2 = *ecx & 0xfffff
int32_t* var_24
sub_49e7de(ecx, 0, &var_24)
int32_t* var_20
sub_49e7de(arg1[0x40], 1, &var_20)
int32_t* var_1c
sub_49e7de(arg1[0x40], 2, &var_1c)
int32_t i = 0

if (arg3 != 0)
    arg3 = 0
    
    while (i == 0)
        int32_t* edx_1 = (&var_24)[arg3]
        
        if (edx_1 != 0)
            int32_t var_c_1 = 0
            
            if (edi_2 u> 0)
                int32_t ecx_3 = 0
                int32_t* var_8_1 = edx_1
                
                do
                    if ((*(ecx_3 + *(arg1[5] + (*var_8_1 << 2)) + 3) & 1) != 0)
                        i = 1
                        break
                    
                    var_c_1 += 1
                    var_8_1 = &var_8_1[1]
                    ecx_3 += 0x80
                while (var_c_1 u< edi_2)
        
        arg3 += 1
        
        if (arg3 u>= 3)
            break

return sub_4d75f7(arg1, arg2, eax_1, eax, var_24, var_20, var_1c, edi_2, 0, 0, 0, i)
