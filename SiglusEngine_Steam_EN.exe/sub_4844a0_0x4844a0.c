// 函数: sub_4844a0
// 地址: 0x4844a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1311178 != 0)
    return 

void* eax = &data_925270
int32_t edx_1 = 0

while (*eax == 0)
    edx_1 += 1
    eax += 0x134
    
    if (edx_1 s>= 0x10)
        if (data_139270c == 0xffffffff || data_1392708 == 0)
            if (data_1af177c == 2)
                return sub_48ff90() __tailcall
            
            int32_t ecx_2 = data_71929c
            eax = *((ecx_2 << 4) + 0x63f398)
            
            if (eax == 0)
                return sub_48ff90() __tailcall
            
            if (eax == 1)
                data_1af1768 = eax
                return 
            
            if (arg1 != 1)
                eax = data_1392cc4
                
                if (arg1 == 0)
                    eax = 1
                
                data_1392cc4 = eax
            else if (ecx_2 == 4)
                return sub_48ff90() __tailcall
        
        break
