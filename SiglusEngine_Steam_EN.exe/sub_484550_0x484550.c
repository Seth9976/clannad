// 函数: sub_484550
// 地址: 0x484550
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = data_1311178 != 0
data_1af1778 = 0

if (cond:0)
    return 

void* eax = &data_925270
int32_t ecx_1 = 0

while (*eax == 0)
    ecx_1 += 1
    eax += 0x134
    
    if (ecx_1 s>= 0x10)
        if (data_139270c == 0xffffffff || data_1392708 == 0)
            if (data_1af177c != 2)
                eax = *((data_71929c << 4) + 0x63f398)
            
            if (data_1af177c == 2 || eax == 0)
                sub_48ff90()
                return 
            
            if (eax == 1)
                data_1af1768 = eax
                return 
            
            data_1392cc4 = 1
        
        break
