// 函数: sub_45fdc0
// 地址: 0x45fdc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_702fc0 == 0)
    return 

int32_t eax = data_71929c
char ecx = 0

if (eax == 0x11 || eax == 0x13 || eax == 0x15)
    ecx = 1

if (data_1313254 == 0 || data_1311178 != 0 || ecx != 1)
    return 

void* esi_1 = &data_108f3a8

for (int32_t* i = &data_7035a4; i s< &data_7035e4; )
    if (*i != 0)
        eax = *(esi_1 - 8)
        
        if (eax != 0xffffffff)
            int32_t ecx_1 = *(esi_1 - 4)
            
            if (ecx_1 != 0xffffffff)
                int32_t edx_1 = *esi_1
                
                if (edx_1 != 0xffffffff && *(esi_1 + 4) != 0xffffffff)
                    int32_t var_c_1 = 0
                    int32_t var_10_1 = 0xff
                    int32_t var_14_1 = 0
                    int32_t var_18_1 = 0
                    int32_t var_1c_1 = 0
                    sub_58bcc0(eax, data_702fec, data_702fe8, data_702ff0, eax, ecx_1, edx_1, 
                        *(esi_1 + 4), data_702ff4, (data_702ff8).b, data_702ffc, data_703000, 
                        ecx_1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0xff, 0, 0, 0, 0, 0)
    
    i = &i[1]
    esi_1 += 0x1c
